#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        
        // we will have to remove trailing zeroes so remove zeroes at the ending of the number and then start reversing
        
        while(n%10==0 && n!=0){
            n=n/10;
        }

        int digit=n;
        while(digit>0){
            
            printf("%d",digit%10);
            digit=digit/10;
        }
        printf("\n");
    }
    
    return 0;
}