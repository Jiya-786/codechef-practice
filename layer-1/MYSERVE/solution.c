#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for (int i=0;i<t;i++){
        int p,q;
        scanf("%d %d",&p,&q);
        if ((p+q-1)%4==0 || (p+q)%4==0){
            printf("Alice\n");
        }
        else if((p+q-2)%4==0 || (p+q-3)%4==0){
            printf("Bob\n");
        }
    }
    
    return 0;
}