#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        
        int last=n%10;
        
        int first=n;
        while(first>=10){
            first=first/10;
        }
        
        printf("%d\n",first+last);
        
    }
    
    return 0;
}