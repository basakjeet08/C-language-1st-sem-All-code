#include <stdio.h>
int MaxElement(int[]);
int main(){
    int y_1880[10],i,max_1880;
    
    printf("Enter the 10 Numbers : \n");
    for(i=0;i<10;i++){
        scanf("%d",&y_1880[i]);
    }
    max_1880 = MaxElement(y_1880);

    printf("The Maximum Element is : %d",max_1880);

    return 0;
}

int MaxElement(int y[]){
    int i ,max;
    max = y[0];
    for(i=1;i<10;i++){
        if(max<y[i])
            max = y[i];
    }

    return max;
}