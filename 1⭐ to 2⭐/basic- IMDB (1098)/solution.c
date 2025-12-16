#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int n,x;
	    scanf("%d %d",&n,&x);
	    int memory[n];
	    int rating[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&memory[i]);
	        scanf("%d",&rating[i]);
	    }
	    int max_rating=0;
	    for(int i=0;i<n;i++){
	        if(rating[i]>max_rating && memory[i]<=x){
	            max_rating=rating[i];
	        }
	    }
	    printf("%d\n",max_rating);
	}

}

