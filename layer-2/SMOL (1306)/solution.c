#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    if(k==0){
	        printf("%d\n",n);
	    }
	    while(n>=0 && k!=0){
	        n=n-k;
	    }
	    printf("%d\n",n+k);
	}
}

