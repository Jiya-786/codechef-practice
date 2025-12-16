#include <stdio.h>
#include <string.h> // for string functions like strlen

int main() {
    int R; // Number of test cases
    scanf("%d", &R);

    while (R--) {
        int L; // Length of the report
        scanf("%d", &L);
        char report[501]; // Report string (increased size to accommodate null terminator)
        scanf("%s", report); // Read the report string

        int head_found = 0; // 0: no head found, 1: head found
        int valid = 1;      // Assume valid initially

        for (int i = 0; i < L; i++) {
            if (report[i] == 'H') {
                if (head_found == 1) {
                    valid = 0; // Invalid: two heads in a row
                    break;     // No need to continue checking
                }
                head_found = 1; // Mark head as found
            } else if (report[i] == 'T') {
                if (head_found == 0) {
                    valid = 0; // Invalid: tail before head
                    break;     // No need to continue checking
                }
                head_found = 0; // Reset head_found (head and tail matched)
            }
        }

        // After the loop, check for an unmatched head
        if (head_found == 1) {
            valid = 0; // Invalid: unmatched head
        }

        if (valid) {
            printf("Valid\n");
        } else {
            printf("Invalid\n");
        }
    }

    return 0;
}