#include <math.h>
#include <stdio.h>

int main(){
    int n_1880,i_1880;
    double sum_1880 = 0.0;
    double cal_1880,x_1880;

    printf("Enter the No. of Terms : ");
    scanf("%d",&n_1880);
    printf("Enter the value of x : ");
    scanf("%lf",&x_1880);

    for(i_1880 = 1;i_1880<=n_1880;i_1880++){
        cal_1880 = (1/(pow(x_1880,i_1880)));

        if(i_1880%2==0)
            sum_1880-= cal_1880;
        else
            sum_1880+= cal_1880;
    }

    printf("The Sum of the series is %f",sum_1880);

    return 0;
}