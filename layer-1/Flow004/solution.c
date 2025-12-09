#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        
        int last=n%10;
        
        int first=n;
        while(n>=10){
            first=first/10;
        }
        
        printf(first+last);
        
    }
    
    return 0;
}