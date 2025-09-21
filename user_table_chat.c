#include <stdio.h>

int main() {
    int tab_st, tab_ed, num_on, num_to;

    printf("Enter from where the table starts: ");
    scanf("%d", &tab_st);

    printf("Enter where the table ends: ");
    scanf("%d", &tab_ed);

    if (tab_st > tab_ed) {
        printf("Invalid range! Start must be less than or equal to end.\n");
        return 1;
    }

    // Print headings
    for (num_to = tab_st; num_to <= tab_ed; num_to++) {
        printf("   Table of %-4d", num_to);  // left-aligned
    }
    printf("\n");

    // Print tables
    for (num_on = 1; num_on <= 10; num_on++) {
        for (num_to = tab_st; num_to <= tab_ed; num_to++) {
            printf("%2d x %-2d = %-4d  ", num_to, num_on, num_to * num_on);
        }
        printf("\n");
    }

    return 0;
}
