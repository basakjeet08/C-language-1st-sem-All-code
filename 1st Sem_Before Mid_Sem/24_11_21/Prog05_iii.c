//Q5.(iii). Pyramid 03
#include <stdio.h>
int main(){
    int i,j,count;
    count = 1 ;

    for(i=1;i<4;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",count);
            count++;
        }
        printf("\n");
    }
}