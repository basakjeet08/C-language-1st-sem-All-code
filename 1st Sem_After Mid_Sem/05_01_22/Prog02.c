#include <stdio.h>
void Display(int[]);
void DisplayKey(int );
int main(){
    int y_1880[10],i,key_1880;
    
    printf("Enter the 10 Numbers : \n");
    for(i=0;i<10;i++){
        scanf("%d",&y_1880[i]);
    }
    printf("Enter the Position of a Number U wanna Display : ");
    scanf("%d",&key_1880);
    Display(y_1880);

    if(key_1880>=0 && key_1880<=9)
        DisplayKey(y_1880[key_1880]);
    else
        printf("The Index is Out of Bounds !!");
    return 0;
}

void Display(int y[]){
    int i ;
    printf("The Array is :----------------- \n");
    for(i=0;i<10;i++){
        printf("[%d] : %d \n",i,y[i]);
    }
}
void DisplayKey(int x){
    printf("The Element at the Desired Position is : %d",x);

}