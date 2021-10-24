// for loops
#include <stdio.h>
int main(){
    for(int i=0,j=0,k=0; i<10&&j<100&&k<1000 ;i++,j+=10,k+=100){
        printf("Value(s) of i, j, k : %d, %d, %d.\n",i,j,k);
    }
    return 0;
}