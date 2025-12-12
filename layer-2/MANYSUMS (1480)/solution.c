//    min number =l+l
//    max number =r+r
//    4,5,6,7,8,9
//    min=8  max=18   
//    9,11,13,15,17 x
//    10,12,14,16,18 yes


#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int l,r;
	    scanf("%d %d",&l,&r);
	    int possible=r-l;
	    if(r==l){
	        printf("1\n");
	    }
	    else{
	        printf("%d\n",possible+2);
	    }

	}
}

