// #include <stdio.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    int s;
// 	    scanf("%d",&s);
// 	    int q[s];
// 	    for(int i=0;i<s;i++){
// 	        scanf("%d",&q[i]);
// 	    }
// 	    int e[s][e[s][0]];
// 	    for(int i=0;i<s;i++){
// 	        for(int j=0;j<e[i][0];j++){
// 	            scanf("%d",&e[i][j]);
// 	        }
	        
// 	    }

// 	}

// }


/*Important realization (this will save you in contests)
  You do NOT need to store all episode lengths at all.
  You only need:
  sum of all episode lengths
  subtract intro time for skipped episodes
  so just read → process → discard. */

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int s;
	    scanf("%d",&s);
	    int q[s];
	    for(int i=0;i<s;i++){
	        scanf("%d",&q[i]);
	    }
	    
	    long long int total=0;
	    
	    for(int i=0;i<s;i++){
	        int e;
	        scanf("%d",&e);
	        
	        for(int j=0;j<e;j++){
	            int l;
	            scanf("%d",&l);
	            
	            if(j==0){
	                total+=l;
	            }
	            else{
	                total+=(l-q[i]);
	            }
	        }
	    }
	    printf("%lld\n",total);
	    
    }
}