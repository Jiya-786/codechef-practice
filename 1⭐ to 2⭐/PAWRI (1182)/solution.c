// #include <stdio.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    char s[10**5];
// 	    scanf("%s",s);
// 	    char required[5]="party"
	    /* you cannot compare strings directly in C
           you might be thinking of something like:
                if (s[i] == required){
                                   }   // ❌ NOT POSSIBLE
            In C:
            Arrays cannot be compared directly
            You must compare character by character */
// 	}

// }

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    char s[100001];
	    scanf("%s",s);
	    int i=0;
	    while(s[i]!='\0'){
	        if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y'){
	            printf("pawri");
	           
	           i=i+5;
	           continue;       /* (or) we can also write i=i+4; without any
                                      continue statement and extra increment 
                                      of 1 will be done by i++ */ 
	           
	        }
	       // else printf("%s\n",s);
	       else {
	           printf("%c",s[i]);
	       }
	       i++;
	    }
	    printf("\n");
	}
}

