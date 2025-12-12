#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        int w1,w2,x1,x2,m;
        scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
        int wt_diff=w2-w1;
        int min_increase=m*x1;
        int max_increase=m*x2;
        
        if(wt_diff>=min_increase && wt_diff<=max_increase){
            printf("%d\n",1);
        }
        else{
            printf("%d\n",0);
        }
        
    }
    
    return 0;
}