//Q4.ii.
#include <stdio.h>
int* max(int* ,int*);
int main(){
    int x_1880,y_1880;
    int *flag_1880;

    printf("Enter the 2 Numbers :----------- \n");
    scanf("%d%d",&x_1880,&y_1880);

    flag_1880 = max(&x_1880,&y_1880);

    printf("The Maximum is %d",*flag_1880);
    return 0;
}
int* max(int *x,int *y){
    if(*x>*y)
        return x;
    return y;
}