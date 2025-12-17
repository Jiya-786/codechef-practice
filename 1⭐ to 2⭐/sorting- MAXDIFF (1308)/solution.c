// [a,n-1]
//n-1-a+1=k
//a=n-k
//[n-k,n-1]   n-1-n+k+1
//[0,n-k-1]


#include <stdio.h>
#include <stdlib.h>

int cmp(void *a,void *b){
    return (*(int*)a-*(int*)b);
}

int main() {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int w[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&w[i]);
	    }
	
	    qsort(w,n,sizeof(int),cmp);
	
	    int group_1_a=0;
	    int group_2_a=0;
	    for(int i=0;i<k;i++){
	        group_1_a+=w[i];
	    }
	    for(int i=k;i<n;i++){
	        group_2_a+=w[i];
	    }
	    
	    
	    
	    int group_1_b=0;
	    int group_2_b=0;
	    for(int i=0;i<n-k;i++){
	        group_1_b+=w[i];
	    }
	    for(int i=n-k;i<n;i++){
	        group_2_b+=w[i];
	    }
	    
	    int ans=0;
	    
	    ans= (group_2_b-group_1_b>group_2_a-group_1_a) ? group_2_b-group_1_b : group_2_a-group_1_a;
	    
	    printf("%d\n",ans);
	}

}

