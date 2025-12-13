// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n,m;
//         scanf("%d %d",&n,&m);
//         int a[n];
//         for (int i=0;i<n;i++){
//             scanf("%d",&a[i]);
//         }

//         int unique[m];
//         for(int i=0;i<m;i++){
//             unique[i]=0;
//         }
//         /* BUG 1:
//            'unique' is initialized with 0s, but 0 is NOT
//             a valid topic.
//             This causes wrong comparisons later. */

//         int count=0;

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(a[i]!=unique[j]){
//                     /* BUG 2 (MAJOR LOGIC ERROR):
//                        You are checking "not equal to ONE
//                        element" instead of "not equal to
//                        ALL elements".
//                        Even if a[i] matches one value, it
//                        will be
//                        different from many others →
//                        condition becomes true. */

//                     unique[count]=a[i];
//                     /* BUG 3:
//                        a[i] gets inserted MULTIPLE TIMES
//                        because this runs for every j
//                        where a[i] != unique[j] */

//                     count++;
//                     /* BUG 4:
//                        count keeps increasing
//                        uncontrollably even for
//                        duplicate topics */
//                 } 
//             }
//         }

//         if(count < m-1){
//             /* BUG 5:
//              count does NOT represent number of distinct
//              topics,
//              so this comparison is meaningless.
//              Also, correct logic should compare
//              distinct topics with m, not m-1. */

//             printf("Yes\n");
//         }
//         else{
//             printf("No\n");
//         }
//     }
// }


#include <stdio.h>

int main(){
     int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        
        int used[m];
        for(int i=0;i<m;i++){
            used[i]=0;
        }
        
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            used[x-1]=1;
        }
        
        int CanWin=0;
        for(int i=0;i<m;i++){
            if(used[i]==0){
                CanWin=1;
                break;
            }
        }
        
        if(CanWin){
            printf("Yes\n");
        }
        else printf("No\n");
        
    }

}