// #include <stdio.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    int n,k;
// 	    scanf("%d %d",&n,&k);
// 	    if(k==0){
// 	        printf("%d\n",n);
// 	    }
// 	    while(n>=0 && k!=0){
// 	        n=n-k;
// 	    }
// 	    printf("%d\n",n+k);
// 	}
// }

// Your code works correctly for the given test cases, but the logic can be simplified significantly. The problem asks for the smallest non-negative integer you can obtain by subtracting K from N any number of times. This is essentially the same as finding the remainder when N is divided by K.

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
	    else{
	        printf("%d\n",n%k);
	    }
	    
	}
	    
}