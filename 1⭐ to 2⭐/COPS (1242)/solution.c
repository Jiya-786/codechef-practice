// #include <stdio.h>
// #include <math.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    int m,x,y;
// 	    scanf("%d%d%d",&m,&x,&y);
// 	    int police_house[m];
//     	for(int i=0;i<m;i++){
// 	        scanf("%d",&police_house[i]);
// 	}
	    
// 	    int can_cover=x*y;
//     	int covered[100]={0};
//     	for(int i=0;i<m;i++){
//     	    int counter_1=0;
//     	    int counter_2=0;
// 	        for(int j=police_house[i];j>0;j--){
// 	             while(counter_1<can_cover){
// 	                 covered[j]=1;
// 	                 counter_1++;
// 	             }
	             
// 	    }
// 	        for(int k=police_house[i];k<100;k++){
// 	            while(counter_2<can_cover){
// 	                 covered[k]=1;
// 	                 counter_2++;
// 	             }
	           
// 	    }
// 	}
	
//     	int count=0;
// 	    for(int i=0;i<100;i++){
// 	         if(covered[i]==0) count++;
// 	}
//     	printf("%d\n",count);
	
// }


// }



/* Key lesson (VERY IMPORTANT for contests)
   while inside for = usually a red flag
   distance-based problems → use loop bounds, not counters*/

#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int m,x,y;
	    scanf("%d%d%d",&m,&x,&y);
	    int police_house[m];
    	for(int i=0;i<m;i++){
	        scanf("%d",&police_house[i]);
	}
	    
	    int can_cover=x*y;
    	int covered[101]={0};
    	/* covered[101] so that we can match the indices with the ho use numbers 1 to 100. we will not use index 0 at all hence in the last for loop we will put index from [1,100]. */
    	
    	for(int i=0;i<m;i++){
    	    
    	    
	        for(int j=police_house[i];j>=1 && j>=police_house[i]-can_cover;j--){
	                 covered[j]=1;
	        }
	        for(int k=police_house[i];k<=100 && k<=police_house[i]+can_cover;k++){
	           
	                 covered[k]=1;
	    }
	}
	
    	int count=0;
	    for(int i=1;i<=100;i++){
	         if(covered[i]==0) count++;
	}
    	printf("%d\n",count);
	
}


}



