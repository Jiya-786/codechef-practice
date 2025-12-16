#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	       // scanf("%d",&a[n]);
	       scanf("%d",&a[i]);
	    }
	    
	   /* int greater_than=0;
	      int less_than=-1;
              this should be declared inside the i loop because 
              for every student we need to start afresh */

	    int count=0;
	    
	    for(int i=0;i<n;i++){
	        int greater_than=0;
	        int less_than=0;
	        for(int j=0;j<n;j++){
	            if (a[j]<=a[i]) less_than++;
	            else if(a[j]>a[i]) greater_than++;
	            
	           /* if(less_than-1>greater_than) count++;
	              this line should be outside the j loop */
	        }
	        
	       /* if(less_than-1>greater_than) count++;
	          the count of people scoring less than or equal
	          to also includes the person themselves so we
	          dont have to subtract 1 and compare. we compare
	          without subtracting 1 */

	       if(less_than>greater_than) count++;
	    }
	    
	    printf("%d\n",count);
	}

}

