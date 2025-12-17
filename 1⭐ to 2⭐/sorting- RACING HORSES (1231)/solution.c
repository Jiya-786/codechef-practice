#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int cmp(void *a,void *b){
    return (*(long long int*)a-*(long long int*)b);
}

int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        int n;
        scanf("%d",&n);
        
        long long int a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        
        qsort(a,n,sizeof(long long int),cmp);
        
        long long int ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            long long int diff=a[i+1]-a[i];
            if (diff<ans){
                ans=diff;
            } 
        }
        printf("%lld\n",ans);
    }
}