// //N bags
// //each bag i contains Ai coins
// //all Ai must be divisible by k
// //choose c between [0,N]
// //take out some conis from each bag
// //move these coins to N-c bags. each bag can get none or some or all coins
// //left over coins=R
// //find smallest possible R
// // eg: 1 14 4 41 1 
// //all coins in bags must be multiple of k
// // i.e., r+(k(x))=tot_coins
// // r=tot_coins-k(x)
// // to make r minimum k(x) should be maximum
// // k*n1+k*n2+k*n3+......+k*nc+.......+k*(nn)
// // 
// // bag 1-> a[0]
// // bag 2-> a[1]
// // implies bag n-> a[n-1]
// //         bag c-> a[c-1]



/*You're still using int for tot_coins. That's almost
certainly the reason it's failing on a hidden test case. The
hidden test case likely has larger values for Ai and N such
that the sum exceeds the maximum value that an int can hold
leading to integer overflow and an incorrect result.*/

// #include <stdio.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    int n,k;
// 	    scanf("%d %d",&n,&k);
// 	    int a[n];
// 	    for(int i=0;i<n;i++){
// 	        scanf("%d",&a[i]);
// 	    }
// 	    int tot_coins=0;
// 	    for(int i=0;i<n;i++){
// 	        tot_coins+=a[i];
// 	    }
// 	    printf("%d\n",tot_coins%k);
// 	}

// }


#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    long long int tot_coins=0;
	    for(int i=0;i<n;i++){
	        tot_coins+=a[i];
	    }
	    printf("%lld\n",tot_coins%k);
	    
	    
	    
	    
	}

}


