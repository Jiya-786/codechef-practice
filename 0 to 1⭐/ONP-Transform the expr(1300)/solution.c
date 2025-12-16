#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        char letters[400];
        scanf("%s",letters);
        
        char ops[400];
        int index=-1;
        
        for(int i=0;letters[i]!='\0';i++){
            char c=letters[i];
            
            if(c>='a' && c<='z'){
                printf("%c",c);
            }
            else if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^'){
                ops[++index]=c;
            }
            else if(c==')'){
                printf("%c",ops[index--]);
            }
        }
        printf("\n");
    }
    
    return 0;
}