//10011->01100->10011
// if wand is used even number of times then string will be in its original state. and if encounter a 0, use the wand. that will make number of wand uses odd. if odd number of uses of wand, then 0 of og string will be 1 and 1 of og string will be zero implies for odd number of wand uses, if 1 is found, increase number of wand uses by 1
//even uses -> 0 found -> increase by 1
//odd uses -> 1 found -> increase by 1

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    char s[100001];
	    // scanf("%d",s);
	    scanf("%s",s);
	    int wand_used=0;
	    for(int i=0;i<strlen(s);i++){
	        if(wand_used%2==0 && s[i]=='0') wand_used++;
	        else if(wand_used%2!=0 && s[i]=='1') wand_used++;
	    }
	    
	    
	    printf("%d\n",wand_used);
	    
	}

}

