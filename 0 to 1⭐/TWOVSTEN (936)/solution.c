#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    if(x%5==0 && x%2!=0){
	        printf("%d\n",1);
	    }
	    else if(x%10==0){
	        printf("%d\n",0);
	    }
	    else{
	        printf("%d\n",-1);
	    }
	}

}

