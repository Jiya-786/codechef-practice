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
    	int covered[100]={0};
    	for(int i=0;i<m;i++){
    	    int counter_1=0;
    	    int counter_2=0;
	        for(int j=police_house[i];j>0;j--){
	             while(counter_1<can_cover){
	                 covered[j]=1;
	                 counter_1++;
	             }
	             
	    }
	        for(int k=police_house[i];k<100;k++){
	            while(counter_2<can_cover){
	                 covered[k]=1;
	                 counter_2++;
	             }
	           
	    }
	}
	
    	int count=0;
	    for(int i=0;i<100;i++){
	         if(covered[i]==0) count++;
	}
    	printf("%d\n",count);
	
}


}

