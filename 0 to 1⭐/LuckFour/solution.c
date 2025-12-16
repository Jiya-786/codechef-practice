#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        
        int count=0;
        int digit=n;
        while(digit>0){
            if (digit%10==4){
                count++;
            }
        digit=digit/10;
        }
        printf("%d\n",count);
    }
    
    return 0;
}