#include <stdio.h>
#include <stdlib.h>

// int cmp(const void *a,const void *b){
//     return (*(int*)b-*(int*)a);
// }

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a[10];
	    for(int i=0;i<10;i++){
	        scanf("%d",&a[i]);
	    }
	    int k;
	    scanf("%d",&k);
	    
	    int counter=0;
	    int index=0;
	    for(int i=9;i>0;i--){
	        counter+=a[i];
	        if(counter>k){
	            index=i;
	            break;
	        } 
	        
	    }
	    printf("%d\n",index+1);
	    
	   // qsort(a,10,sizeof(int),cmp);
	    
	   // int difficulty=10;
	   // int counter=0;
	   // while(counter<k){
	   //     for(int i=0;i<10 && difficulty>2;i++){
	   //         counter+=a[i];
	   //         if(counter>a[i]) difficulty--;
	   //         if(a[difficulty]==0) difficulty--;
	            
	   //     }
	   // }
	    
	   // printf("%d\n",difficulty);
	}

}

