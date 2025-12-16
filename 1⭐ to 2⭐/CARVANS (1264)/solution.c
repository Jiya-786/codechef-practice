#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	   // scanf("%d",&n);
	    for (int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	   /*i understood the qs incorrectly according to the problem, prev_value should be the minimum so far, since once a car meets a slower car, all behind it must go no faster than the minimum speed before them. i thought that current car must be slower than the car in front of it to continue moving with the same speed
	   
	    int count=0;
	    int prev_value=a[0];
	    for(int i=0;i<n;i++){
	        if(a[i]<=prev_value) count++;
	        prev_value=a[i];
	    }*/ 
	    
	    int count=1;
	    int min_speed=a[0];
	    for(int i=1;i<n;i++){
	        if(a[i]<=min_speed){
	            count++;
	            min_speed=a[i];
	        }
	    }
	   
	    printf("%d\n",count);
	}
}

