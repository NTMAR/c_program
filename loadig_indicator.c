#include <stdio.h>
#include <unistd.h>  // for sleep() or usleep()

int main() {
    int i;
    for (i = 10; i <= 100; i += 10) {
        printf("\rLoading... %d%%", i); // \r brings cursor to line start
        fflush(stdout);                // force output immediately
        sleep(1);                      // delay 1 second (Linux/Unix/Mac)
    }
    printf("\nDone!\n");
    return 0;
}
