// //1 3 1 2 3 4 7 5
// //2 4 2 3 4 5 7 6
// //3 5 3 4 5 6 7 7
// //4 6 4 5 6 7 7 7
// //5 7 5 6 7 7 7 7
// //6 7 6 7 7 7 7 7
// //7 7 7 7 7 7 7 7
// //the min number of moves is just the difference between the max and min elemnt of the array and zero moves if all elts are equal.

// #include <stdio.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    int n;
// 	    scanf("%d",&n);
// 	    int a[n];
// 	    for(int i=0;i<n;i++){
// 	        scanf("%d",&a[i]);
// 	    }
// 	    int min_elt=100000;
// 	    int max_elt=-100000;
// 	    for(int i=0;i<n;i++){
// 	        if(a[i]>max_elt) max_elt=a[i];
// 	        if(a[i]<min_elt) min_elt=a[i];
// 	    }
// 	    if(max_elt==min_elt){
// 	        printf("%d\n",0);
// 	    }
// 	    else printf("%d\n",max_elt-min_elt);
// 	}
// }


/*better way is to use INT_MAX and INT_MIN*/
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
	    int min_elt=INT_MAX;
	    int max_elt=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(a[i]>max_elt) max_elt=a[i];
	        if(a[i]<min_elt) min_elt=a[i];
	    }
	    if(max_elt==min_elt){
	        printf("%d\n",0);
	    }
	    else printf("%d\n",max_elt-min_elt);
	}
}