#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    char s[1001];
	    scanf("%s",s);
	    int n=strlen(s);
	    int alphabet_counter_1[26]={0};
	    int alphabet_counter_2[26]={0};
	    if(n==0 || n==1) printf("No\n");
	    if(n%2==0){
	        for(int i=0;i<n/2;i++){
	            //alphabet_counter_1[s[i]-'a']=1;
	            alphabet_counter_1[s[i]-'a']++;
	        }
	        for(int i=(n/2);i<n;i++){
	            //alphabet_counter_1[s[i]-'a']=1;
	            alphabet_counter_2[s[i]-'a']++;
	        }
	        
	    }
	    if(n%2!=0){
	        for(int i=0;i<n/2;i++){
	            //alphabet_counter_1[s[i]-'a']=1;
	            alphabet_counter_1[s[i]-'a']++;
	        }
	        for(int i=(n/2)+1;i<n;i++){
	            //alphabet_counter_1[s[i]-'a']=1;
	            alphabet_counter_2[s[i]-'a']++;
	        }
	        
	    }
	    bool lapindrome=true;
	    //for(int i=0;i<n;i++)
	    for(int i=0;i<26;i++){
	        if(alphabet_counter_1[i]!=alphabet_counter_2[i]){
	            lapindrome=false;
	            break;
	        }
	    }
	    if(lapindrome) printf("Yes\n");
	    else printf("No\n");
	    
	}

}

