/* Efficiency: Sorting an array generally takes 
O(nlogn) time, where n is the number of elements.
Finding the two smallest elements can be done in 
O(n) time by iterating through the array and keeping track
of the smallest and second smallest elements seen so far.
This is more efficient than sorting, especially for large
arrays. */

// .....x.....min_1......x......min_2

#include <stdio.h>
#include <limits.h>

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
	    int min_1=INT_MAX;
	    int min_2=INT_MAX;
	    for(int i=0;i<n;i++){
	        if(a[i]<min_1){
	            min_2=min_1;
	            min_1=a[i];
	        }
	        else if(a[i]<min_2 && a[i]>min_1){
	            min_2=a[i];
	        }
	    }
	    printf("%d\n",min_1+min_2);
	}

}

