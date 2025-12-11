#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    float s,a,b,c;
	    scanf("%f%f%f%f",&s,&a,&b,&c);
	    float final_price=s+((c*s)/100);
	    if (final_price>=a && final_price<=b){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}

}

