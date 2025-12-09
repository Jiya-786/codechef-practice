#include <stdio.h>
#include <math.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int count=-1;
        while((n%(pow(10,i))))!=0){
            count+=1;
            i++;
        }
        printf("%d",((n%10)+(n-(n%(pow(10,count)))))/pow(10,count));
        
    }
    
    return 0;
}