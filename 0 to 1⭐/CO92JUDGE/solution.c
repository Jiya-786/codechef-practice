#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int characteristic_values[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&characteristic_values[i]);
	    }
	    
	    
	    int count=0;
	    for(int i=0;i<n;i++){
	        if((characteristic_values[i]+k)%7==0){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	
	return 0;

}

