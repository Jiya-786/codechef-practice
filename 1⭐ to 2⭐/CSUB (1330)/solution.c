// 100101
// {1,1,1,1001,101,100101} 
// 6

/* Count choices manually (this is the key insight)
Let’s number the '1's:
1₁  1₂  1₃  ...  1ₖ
If the substring starts at:
1₁ → it can end at 1₁, 1₂, 1₃, …, 1ₖ → k choices
1₂ → it can end at 1₂, 1₃, …, 1ₖ → k−1 choices
1₃ → k−2 choices
...
1ₖ → 1 choice */

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char s[100001];
	    scanf("%s",s);
	   // int count=0;
	    long long int count=0;
	    for(int i=0;i<n;i++){
	        if (s[i]=='1'){
	            count++;
	        }
	    }
	    
	   // printf("%d\n",(count*(count+1))/2);
	   printf("%lld\n",(count*(count+1))/2);
	    
	    
	}

}

