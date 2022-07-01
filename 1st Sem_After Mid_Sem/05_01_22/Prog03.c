#include <stdio.h>
void Calc(int[]);
int main(){
    int y_1880[10],i;
    
    printf("Enter the 10 Numbers : \n");
    for(i=0;i<10;i++){
        scanf("%d",&y_1880[i]);
    }
    Calc(y_1880);

    return 0;
}

void Calc(int y[]){
    int i ,sum;
    sum = 0;
    for(i=0;i<10;i++){
        sum = sum + y[i];
    }

    printf("The Sum of the Array is : %d",sum);
}