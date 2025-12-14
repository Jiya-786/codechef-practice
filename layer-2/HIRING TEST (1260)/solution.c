#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int x,y;
	    scanf("%d%d",&x,&y);
	    
	    while(n--){
	        char s[105];
	        scanf("%101s",s);
	        int u=0;
	        int p=0;
	        int f=0;
	        for(int i=0;i<m;i++){
	            if(s[i]=='U') u++;
	            else if(s[i]=='P') p++;
	            else f++;
	        }
	        if(f>=x||(f==x-1 && p>=y)) printf("1");
	        else printf("0");
	    }
	    printf('\n');
	}

}

