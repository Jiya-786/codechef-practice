#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,s;
	    scanf("%d %d",&n,&s);
	    
	    if(n>s){
	        printf("%d\n",s);
	    }
	    else if(n==s){
	        printf("%d\n",s);
	    }
	    else{
	        printf("%d\n",2*n-s);
	    }
	}
	
}

