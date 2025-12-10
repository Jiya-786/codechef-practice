#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        
        for (int i=0;i<n;i++){
            scanf(" %d",&a[i]);}            // if we write only "%c, it will consider spaces                                 also as characters. if we write " %c", it will                                 delete leading spaces and consider only the                                    characters as characters no spaces.
                                             // but this not hold for %d or anything else.     others will always condier the same and not consider space as characters regardless of inout has space or not
       for (int i=0;i<n;i++){
            scanf(" %d",&b[i]);}       
        
        int best_time_a=0;
        int best_time_b=0;
        for (int i=0;i<n;i++){
            if (a[i]>best_time_a){
                best_time_a=a[i];
            }
            if (b[i]>best_time_b){
                best_time_b=b[i];
            }
        }
        
        int sum_of_a=0;
        int sum_of_b=0;
        for (int i=0;i<n;i++){
            sum_of_a+=a[i];
            sum_of_b+=b[i];
        }
        
        sum_of_a=sum_of_a-best_time_a;
        sum_of_b=sum_of_b-best_time_b;
        
        if(sum_of_a>sum_of_b){
            printf("Bob\n");
        }
        else if(sum_of_a<sum_of_b){
            printf("Alice\n");
        }
        else{
            printf("Draw\n");
        }
        
        
    }
    
    
    return 0;
}