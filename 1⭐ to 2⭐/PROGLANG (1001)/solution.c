#include <stdio.h>
#include <stdbool.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int A, B, A1, B1, A2, B2;
        scanf("%d %d %d %d %d %d", &A, &B, &A1, &B1, &A2, &B2);

        // Function to check if two pairs of integers are equal, regardless of order
        bool check(int a, int b, int x, int y) {
            return (a == x && b == y) || (a == y && b == x);
        }

        if (check(A, B, A1, B1)) {
            printf("1\n"); // First language matches
        } else if (check(A, B, A2, B2)) {
            printf("2\n"); // Second language matches
        } else {
            printf("0\n"); // No language matches
        }
    }

    return 0;
}