#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for (int i=0;i<t;i++){
        
        int count=1;
        int e,k;
        scanf("%d %d",&e,&k);
        int level=e;
        while(level/k>0){
            count++;
            level=level/k;
        }
        printf("%d\n",count);
        
        
        
    }
    
    return 0;
}