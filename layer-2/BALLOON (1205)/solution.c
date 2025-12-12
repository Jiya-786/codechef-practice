#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	   int n;
	   scanf("%d",&n);
	   int a[n];
	   for(int i=0;i<n;i++){
	       scanf("%d",&a[i]);
	   }
	   int req_numbers[7]={1,2,3,4,5,6,7};
	   
	   int max_index=0;
	   for(int i=0;i<n;i++){
	       for(int j=0;j<7;j++){
	           if(a[i]==req_numbers[j]){
	               max_index=i;
	           }
	       }
	   }
	   printf("%d\n",max_index+1);
	 }
	
	
	
	
}

