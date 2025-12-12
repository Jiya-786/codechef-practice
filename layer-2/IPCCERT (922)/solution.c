#include <stdio.h>

int main() {
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a[n][k+1];
	for(int i=0;i<n;i++){
	    for(int j=0;j<k+1;j++){
	        scanf("%d",&a[i][j]);
	    }
	}
	
	int sum[n];
	for (int i=0;i<n;i++){
	    for(int j=0;j<k;j++){
	        sum[i]=sum[i]+a[i][j];
	    }
	}
	
	int count=0;
	for(int i=0;i<n;i++){
	    if (a[i][k]<=10 && sum[i]>=m){
	        count++;
	    }
	}
    printf("%d\n",count);
}

