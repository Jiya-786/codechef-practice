#include <stdio.h>
#include <string.h>

int main() {
    //char s[26];
    char s[27];
    //scanf("%d",s);
    scanf("%s",s);
	int length_1=strlen(s);
	int n;
	scanf("%d",&n);
	while(n--){
	    //char w[12];
	    char w[13];
	    //scanf("%d",w);
	    scanf("%s",w);
	    int length_2=strlen(w);
	    int count=0;
	    for(int i=0;i<length_2;i++){
	        for(int j=0;j<length_1;j++){
	            if(w[i]==s[j]) count++;
	        }
	    }
	    if (count==length_2 || length_1==1) printf("Yes\n");
	    else printf("No\n");
	}
	

}
