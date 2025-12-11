// sum can be even when:
//        even+even
//        odd+odd
//        odd+odd+even
//        1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20



#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    
	    if(n%4==0){
	        printf("%d\n",n);
	    }
	    else if(n%4==1){
	        printf("%d\n",n-1);
	    }
	    else if (n%4==2){
	        printf("%d\n",n-1);
	    }
	    else if (n%4==3){
	        printf("%d\n",n);
	    }
	    
	}

}

