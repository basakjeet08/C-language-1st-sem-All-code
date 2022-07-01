//Q4.i.
#include <stdio.h>
int max(int ,int);
int main(){
    int x_1880,y_1880,flag_1880;

    printf("Enter the 2 Numbers :----------- \n");
    scanf("%d%d",&x_1880,&y_1880);
    flag_1880 = max(x_1880,y_1880);
    if(flag_1880==1)
        printf("The Maximum is %d",x_1880);
    else
        printf("The Maximum is %d",y_1880);
    return 0;
}
int max(int x,int y){
    return(x>y);
}