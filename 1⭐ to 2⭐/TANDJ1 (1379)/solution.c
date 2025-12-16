// to use abs for int we need to include stdlib.h for flaot we need to include math.h but i did both anyways

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,d,k;
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
	    int horizontal=abs(c-a);
	    int vertical=abs(d-b);
	    int total=horizontal+vertical;
	    if(total<=k && (k-total)%2==0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}

}

