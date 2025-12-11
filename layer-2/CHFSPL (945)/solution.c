#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int a,b,c;
	    int numbers[3];
	    for(int i=0;i<3;i++){
	        scanf("%d",&numbers[i]);
	    }
	    int max_number=numbers[0];
	    for (int i=0;i<3;i++){
	        if(numbers[i]>max_number){
	            max_number=numbers[i];
	        }
	    }
	    int second_max=numbers[0];
	        for(int i=0;i<3;i++){
	            if(numbers[i]>second_max && numbers[i]!=max_number){
	                second_max=numbers[i];
	            }
	        }
	    
	    printf("%d\n",max_number+second_max);
	}

}

