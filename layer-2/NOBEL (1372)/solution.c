#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d %d",&n,&m);
	    int a[n];
	    for (int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int unique[m];
	    for(int i=0;i<m;i++){
	        unique[i]=0;
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(a[i]!=unique[j]){
	                unique[count]=a[i];
	                count++;
	            } 
	        }
	        
	    }
	    if(count<m-1){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}

}

