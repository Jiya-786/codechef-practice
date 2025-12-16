#include <stdio.h>


int main(){
    
    int x;
    float y;
    float output;
    scanf("%d %f",&x,&y);
    if (x%5==0 && y>=(x+0.5)){
        output=y-x-(0.5);
    }
    else {
        output=y;
    }
    
    printf("%f\n",output);
    return 0;
}