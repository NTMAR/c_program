#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#define SLEEP(ms) Sleep(ms)
#else
#include <unistd.h>
#define SLEEP(ms) usleep((ms) * 1000)
#endif

#define NUM_FILES 5
#define WIDTH 40

typedef struct {
    const char *name;
    double sizeMB;     // total file size
    double downloaded; // MB downloaded
    double speed;      // MB/s (simulated)
    int progress;
    int completed;
} File;

void print_initial(File files[], int n) {
    printf("\033[?25l"); // hide cursor
    for (int i = 0; i < n; i++) {
        printf("%-30s [>%*s]   0%%   0.0MB / %.1fMB   0.0 MB/s\n",
               files[i].name, WIDTH, "", files[i].sizeMB);
    }
    printf("\nOverall: 0/%d files downloaded\n", n);
}

void update_progress(File files[], int n, int completed_count) {
    // Move cursor up (n + 2) lines to overwrite progress
    printf("\033[%dF", n + 2);

    for (int i = 0; i < n; i++) {
        int pos = (files[i].progress * WIDTH) / 100;

        printf("%-30s [", files[i].name);
        for (int j = 0; j < WIDTH; j++) {
            if (j < pos)
                printf("#");
            else if (j == pos)
                printf(">");
            else
                printf(" ");
        }
        printf("] %3d%%   %5.1fMB / %.1fMB   %4.1f MB/s\n",
               files[i].progress,
               files[i].downloaded,
               files[i].sizeMB,
               files[i].speed);
    }
    printf("\nOverall: %d/%d files downloaded\n", completed_count, n);
}

int main() {
    srand(time(NULL));

    File files[NUM_FILES] = {
        {"gcc-core-13.2.0.tar.xz", 50.0, 0, 0, 0, 0},
        {"gcc-g++-13.2.0.tar.xz", 35.0, 0, 0, 0, 0},
        {"binutils-2.42.tar.xz", 25.0, 0, 0, 0, 0},
        {"libstdc++-13.2.0.tar.xz", 20.0, 0, 0, 0, 0},
        {"make-4.4.1.tar.gz", 10.0, 0, 0, 0, 0}
    };

    int done = 0;
    print_initial(files, NUM_FILES);

    while (done < NUM_FILES) {
        for (int i = 0; i < NUM_FILES; i++) {
            if (!files[i].completed) {
                // random speed between 0.5 and 2.5 MB/s
                files[i].speed = 0.5 + (rand() % 200) / 100.0;

                // increase downloaded amount
                files[i].downloaded += files[i].speed * 0.15; // 0.15 sec interval
                if (files[i].downloaded >= files[i].sizeMB) {
                    files[i].downloaded = files[i].sizeMB;
                    files[i].progress = 100;
                    files[i].completed = 1;
                    done++;
                } else {
                    files[i].progress = (int)((files[i].downloaded / files[i].sizeMB) * 100);
                }
            }
        }
        update_progress(files, NUM_FILES, done);
        SLEEP(150);
    }

    printf("\033[?25h"); // show cursor again
    printf("\nAll downloads completed successfully!\n");
    return 0;
}
