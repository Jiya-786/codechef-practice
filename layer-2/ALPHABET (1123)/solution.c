// #include <stdio.h>
// #include <string.h>

// int main() {
//     //char s[26];
//     char s[27];
//     //scanf("%d",s);
//     scanf("%s",s);
// 	int length_1=strlen(s);
// 	int n;
// 	scanf("%d",&n);
// 	while(n--){
// 	    //char w[12];
// 	    char w[13];
// 	    //scanf("%d",w);
// 	    scanf("%s",w);
// 	    int length_2=strlen(w);
// 	    int count=0;
// 	    for(int i=0;i<length_2;i++){
// 	        for(int j=0;j<length_1;j++){
// 	            if(w[i]==s[j]) count++;
// 	        }
// 	    }
// 	    if (count==length_2 || length_1==1) printf("Yes\n");
// 	    else printf("No\n");
// 	}
	

// }


/* correct code using boolean flags */

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main() {

//     // s stores the letters Jeff knows
//     // size 27 = 26 letters + null character
//     char s[27];

//     // read the string of known letters
//     scanf("%s", s);

//     // length of string s
//     int length_1 = strlen(s);

//     // number of words to check
//     int n;
//     scanf("%d", &n);

//     // process each word
//     while (n--) {

//         // w stores the current word
//         // size 13 because max word length is 12 + '\0'
//         char w[13];
//         scanf("%s", w);

//         // length of current word
//         int length_2 = strlen(w);

//         // assume the word can be read
//         bool canRead = true;

//         // check each letter of the word
//         for (int i = 0; i < length_2; i++) {

//             // assume current letter is not found in s
//             bool found = false;
            
//             // search for w[i] in string s
//             for (int j = 0; j < length_1; j++) {
//                 if (w[i] == s[j]) {
//                     // letter found in s
//                     found = true;
//                     break;  /* stop searching for this
//                               letter continue to next i. */
//                 }
//             }

//             // if this letter is not present in s
//             if (!found) {
//                 // word cannot be read
//                 canRead = false;
//                 break;  // no need to check remaining letters
//             }
//         }

//         // print result for the current word
//         if (canRead) {
//             printf("Yes\n");
//         } else {
//             printf("No\n");
//         }
//     }
// }


/* correct code using hashing */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char s[27];
    scanf("%s",s);
    
    bool known[26]={false};
    for(int i=0;s[i]!='\0';i++){
        known[s[i]-'a']=true;
    }
    
    int n;
    scanf("%d",&n);
    
    while(n--){
        char w[13];
        scanf("%s",w);
        
        bool canRead=true;
        for(int i=0;w[i]!='\0';i++){
            if(!known[w[i]-'a']){
                canRead=false;
                break;
            }
        }
        if(canRead) printf("Yes\n");
        else printf("No\n");
    }
}