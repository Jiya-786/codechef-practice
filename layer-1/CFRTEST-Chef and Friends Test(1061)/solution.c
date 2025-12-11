#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        
        int count[100];
        for (int i=0;i<100;i++){
            count[i]=0;
        }
        
        
        for(int i=0;i<n;i++){
            count[a[i]-1]++;
        }
        
        int counter=0;
        for(int i=0;i<100;i++){
            if(count[i]>=1){
                counter++;
        }
    }
    printf("%d\n",counter);
}
}

// #include <stdio.h>

// int main(){
    
//     int t;
//     scanf("%d",&t);
    
//     for(int i=0;i<t;i++){
//         int n;
//         scanf("%d",&n);
        
//         int a[n];
//         for(int i=0;i<n;i++){
//             scanf("%d",&a[i]);
//         }
        
//         int new_list[n];
//         for(int i=0;i<n;i++){
//             if a[i] not in new_list{
//                 new_list.append(a[i]);
//             }
//         }
    
    
    
//     return 0;
// }