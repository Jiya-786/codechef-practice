#include <stdio.h>
#include <stdbool.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	   // 	int n,a,b;         // note: because acc to given
	                           // constraints a and b lie
	                           // between 1 and 10^9 so a,b
	                           // cant be int we need to
	                           // take long long int 
	        int n;
	        long long int a,b;
	        scanf("%d%lld%lld",&n,&a,&b);
	       //int sarthak=0;
	       //int anuradha=0;
	        long long int sarthak=0;
	        long long int anuradha=0;
	        while(n--){
	            char s[101];
	            scanf("%s",s);
	           // int sarthak=0;
	           // int anuradha=0; acc to the problem, these
	           //                 need to be declared for
	           //                 each case t not for each n
	            bool add=false;
	            char req[8]="EQUINOX";
	            for(int i=0;req[i]!='\0';i++){
	                if(s[0]==req[i]){
	                    add=true;
	                    sarthak+=a;
	                    break;
	        } 
	        
	    }
	            if(!add) anuradha+=b;
	           // if(sarthak>anuradha) printf("Sarthak\n");
	           // else if(sarthak<anuradha) printf("Anuradha\n");
	           // else printf("Draw\n");
	}
	        if(sarthak>anuradha) printf("Sarthak\n");
	        else if(sarthak<anuradha) printf("Anuradha\n");
	        else printf("Draw\n");

}


	}
