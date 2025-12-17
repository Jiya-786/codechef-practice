#include <stdio.h>
#include <stdlib.h>

int cmp(void *a,void* b){
    return (*(int*)a-*(int*)b);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        
        int negative=0;
        int positive=0;
        for(int i=0;i<n;i++){
            if(a[i]<0) negative++;
            else if(a[i]>0) positive++;
        }
        
        int neg[negative];
        int p[positive];
        
        int index_n=0;
        int index_p=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                neg[index_n]=a[i];
                index_n++;
            }
            else if(a[i]>0){
                p[index_p]=a[i];
                index_p++;
            }
            
        }
        
        qsort(neg,negative,sizeof(int),cmp);
        
        
        int ans=0;
        int neg_sum=0;
        int pos_sum=0;
        
        if(k>negative){
            for(int i=0;i<n;i++){
                if(a[i]<0) a[i]=a[i]*(-1);
                ans+=a[i];
            }
            
        }
        
        
        else if(k<=negative){
            for(int i=0;i<k;i++){
                neg[i]=neg[i]*(-1);
            }
            for(int i=0;i<k;i++){
                neg_sum+=neg[i];
            }
            for(int i=0;i<n;i++){
                if(a[i]>0) pos_sum+=a[i];
            }
            ans=neg_sum+pos_sum;
    }
    printf("%d\n",ans);
}
}

