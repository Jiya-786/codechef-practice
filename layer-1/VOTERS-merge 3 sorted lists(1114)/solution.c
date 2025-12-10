#include <stdio.h>

int main() {
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int a[n1],b[n2],c[n3];
    
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n3;i++){
        scanf("%d",&c[i]);
    }
    
    int count=0;
    int new_list[n1+n2+n3];
    for i in a{
        for j in b{
            for k in c{
                if (i==j || k==i){
                    new_list.append(i);
                }
                else if(j==k){
                    new_list.append(j);
                }
            }
        }
        
    }
    printf(new_list);    
    }
    
	return 0;

}

