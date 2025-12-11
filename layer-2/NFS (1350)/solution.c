#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    float u,v,a,s;
	    scanf("%f%f%f%f",&u,&v,&a,&s);
	    float final_speed=((u*u)+(2*a*s))**(0.5);
	    if (final_speed<=v) printf("Yes\n");
	    else printf("No\n");
	}

}

