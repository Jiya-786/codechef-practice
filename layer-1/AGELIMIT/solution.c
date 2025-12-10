// Update the program below to solve the problem

#include <stdio.h>

int main() 
{
 int t;
 scanf("%d",&t);
 while(t--)
  { 
   int X,Y,A;
   scanf("%d%d%d", &X, &Y, &A);  
   if (A>=X && A<Y){
       printf("YES\n");
   }
   else{
       printf("NO\n");
   }


   }
 return 0;
}

   
