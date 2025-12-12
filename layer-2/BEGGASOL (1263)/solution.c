//1 2 3 4 5..........N
//i belongs to [2,N]

//car 2 is at dist 1 unit from car 1 
//car 3 is at distance 2 units from car 1
//                  :
//car N is at distance N-1 units from car 1

//car 1 has f1 litres gasoline
//car 2 has f2 litres gasoline
//car 3 has f3 litres gasoline
//          :
//car n has fn litres gasoline

//one unit distance -> 1 litre gasoline
//car 1 moves in cw direction
//say gasoline values 3 0 0 0 0
//car 1 moves 3 units stops at car 4 it has 0 units now all gasoline finished so tot dist=3 units
//say f[n]={1 1 1 1 1}
//car 1 moves i unit cw stops at car 2 steals 1l gasonline moves to car 3 steals, moves to car 4 , steals , moves to car 5, steals, moves to car 1 stops ie 1->2->3->4->5->1 5 units
//say f[n]={5 4 3 2 1}
//car 1 moves 5 units cw 1>2>3>4>5>1




#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int f[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&f[i]);
	    }
	   // int dist=0;
	   // int gasoline=f[0];
	   // for(int i=0;i<n;i++){
	   //     while(gasoline>0){
	   //         dist+=f[i];
	   //         gasoline=gasoline
	   //     }
	   // }
	   
	   //int dist=0;
	   //int gasoline=f[0];
	   //while(gasoline>0){
	   //    for(int i=0;i<gasoline;i++){
	   //        if(i>=n) i=i-n;
	   //        dist+=f[i];
	   //        gasoline-=dist;
	   //        gasoline+=f[i];
	   //        f[i]=0;
	   //    }
	   //}
	   
	   int dist=0;
	   int gasoline=f[0];
	   f[0]=0;
	   int current_position=0;  
	   
	   while(gasoline>0){
	       gasoline--;
	       dist++;
	       current_position=(current_position+1)%n;
	       gasoline+=f[current_position];
	       f[current_position]=0;
	   }
	   
	   printf("%d\n",dist);
	   
	   /*the tot dist!=tot gasoline since you dont know if the car has enoigh fuel to even reach a certein car whose fuel oyu are adding-
	   int gasoline=0;
	   for(int i=0;i<n;i++){
	       gasoline+=f[i];
	   }
	   printf("%d\n",gasoline);*/
	   
	   
	}

}

