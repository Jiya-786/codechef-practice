#include <stdio.h>
#include <string.h>

int main(){
    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[100];
        scanf("%s",s);
        
        int freq[26]={0};
        int n=strlen(s);
        
        for (int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        
        int ok=0;
        
        for(int i=0;i<26;i++){
            if(2*freq[i]==n){
                ok=1;
                break;
            }
        }
        
        if (ok) printf("Yes\n");
        
        else printf("No\n");
        
        
        }
    
    return 0;
}