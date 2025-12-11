// #include <stdio.h>

// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    float u,v,a,s;
// 	    scanf("%f%f%f%f",&u,&v,&a,&s);
// 	    float final_speed=((u*u)+(2*a*s))**(0.5);
// 	    if (final_speed<=v) printf("Yes\n");
// 	    else printf("No\n");
// 	}

// }

// Note that given a is deceleration implies we need to write u*u-2as and we also need to take care of the case when the sqrt term is -ve in that case we return final speed as 0

// and ** is used in python. in c we can use sqrt or pow both of which are present in math.h

#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    float u,v,a,s;
	    scanf("%f%f%f%f",&u,&v,&a,&s);
	    float final_speed;
	    if (((u*u)-(2*a*s))<0) final_speed=0;
	    else final_speed=sqrt((u*u)-(2*a*s));
	    
	    if (final_speed<=v) printf("Yes\n");
	    else printf("No\n");
	}

}