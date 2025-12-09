#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        
        int digit=n;
        while(digit>0){
            printf("%d",digit%10);
            digit=digit/10;
        }
        printf("\n");
    }
    
    return 0;
}