/* Why your chopsticks solution is called greedy-
After sorting, you do this:
if (l[i+1] - l[i] <= d) {
    pair them;
}

You are saying:
“These two sticks are close enough right now,
so I’ll pair them immediately.”

You are not checking all possibilities like:
“What if I pair l[i] with l[i+2]?”
“What if I skip this and do something later?”

You commit immediately.
That’s greedy. */

/* Greedy works here because:
If two smallest available sticks can form a valid pair, then
any optimal solution must pair them together (or waste one
of them).

So pairing them immediately can never reduce the final
number of pairs.

That property is what makes greedy valid. */



#include <stdio.h>

int cmp (const void *a,const void* b){
    return (*(int*)a-*(int*)b);
}

int main() {
	int n,d;
	scanf("%d%d",&n,&d);
	int l[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&l[i]);
	}
	qsort(l,n,sizeof(int),cmp);
	
	int count=0;
	for(int i=1;i<n;){
	    if(l[i]-l[i-1]<=d){
	        count++;
	        i+=2;
	    }
	    else i++;
	}
	printf("%d\n",count);
}
	
	
    
//     int index=0;
//     int a[n-1];
//     for(int i=0;i<n-1;i++){
//         if(l[i+1]-l[i]<=d){
//             a[index]=1;
//             index++;;
//         }
//     }
//     int case_1=0;
//     int case_2=0;
//     for(int i=0;i<n-1;i+=2){
//         if (a[i]==1) case_1++;
//     }
//     for(int i=1;i<n-1;i+=2){
//         if (a[i]==1) case_2++;
//     }
    
//     int ans=0;
//     ans=(case_1>case_2) ? case_1 : case_2;
    
//     printf("%d\n",ans);
    
// }

