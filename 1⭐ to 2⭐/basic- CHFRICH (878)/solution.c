#include <stdio.h>

int main() {
    int t, a, b, x, years;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &a, &b, &x); 
        years = (b - a) / x;          
        printf("%d\n", years);       
    }

    return 0;
}