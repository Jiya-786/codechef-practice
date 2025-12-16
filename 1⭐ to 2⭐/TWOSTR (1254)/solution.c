// #include <stdio.h>
// #include <string.h>

// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         char x[1001],y[1001];
//         scanf("%s%s",x,y);
//         int matched=0;
//         for(int i=0;i<strlen(x);i++){
//             if(x[i]==y[i] || (x[i]!=y[i] && (x[i]=='?' || y[i]=='?' || x[i]=='?' && y[i]=='?'))) matched=1;
//             else matched=0; break;
//         }
        
//         if (matched) printf("Yes\n");
//         else printf("No\n");
//     }
    
// }

#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char x[1001],y[1001];
        scanf("%s%s",x,y);
        int matched=1;
        for(int i=0;i<strlen(x);i++){
            if(x[i]!=y[i] && (x[i]!='?'&& y[i]!='?')){
                matched=0; 
                break;
            }                /*matched=0; break; 2 lines
                               inside if statement without curly braces will make compiler think that break is a statement outside the if loop. it will think break is a statement inside the for loop instead of the if loop */
        }
        
        if (matched) printf("Yes\n");
        else printf("No\n");
    }
    
}