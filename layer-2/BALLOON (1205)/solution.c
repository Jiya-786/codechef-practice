// #include <stdio.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	   int n;
// 	   scanf("%d",&n);
// 	   int a[n];
// 	   for(int i=0;i<n;i++){
// 	       scanf("%d",&a[i]);
// 	   }
// 	   int req_numbers[7]={1,2,3,4,5,6,7};
	   
// 	   int max_index=0;
// 	   for(int i=0;i<n;i++){
// 	       for(int j=0;j<7;j++){
// 	           if(a[i]==req_numbers[j]){
// 	               max_index=i;
// 	           }
// 	       }
// 	   }
// 	   printf("%d\n",max_index+1);
// 	 }
	
	
	
	
// }

// the prev soln will have time complexity O(7*n) we can bring it down to O(n) by:

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        // Read the input array
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int max_index = -1; // Initialize with -1 in case none of the required numbers are found

        // Iterate through the array to find the maximum index of required numbers (1 to 7)
        for (int i = 0; i < n; i++) {
            if (a[i] >= 1 && a[i] <= 7) {
                if (i > max_index) {
                    max_index = i;
                }
            }
        }

        // Print the result (add 1 because the problem asks for the number of problems, not the index)
        printf("%d\n", max_index + 1);
    }

    return 0;
}

