#include <stdio.h>

int main() {
    int T, D, L, R;

    
    scanf("%d", &T);

    
    while (T--) {
        
        scanf("%d %d %d", &D, &L, &R);

       
        if (D < L) {
            printf("Too Early\n");
        }
        else if (D > R) {
            printf("Too Late\n");
        }
       
        else {
            printf("Take second dose now\n");
        }
    }

    return 0;
}