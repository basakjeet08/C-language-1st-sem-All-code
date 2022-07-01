#include <stdio.h>
int SearchElement(int[],int);
int main(){
    int y_1880[10],i,index_1880,key_1880;
    
    printf("Enter the 10 Numbers : \n");
    for(i=0;i<10;i++){
        scanf("%d",&y_1880[i]);
    }

    printf("Enter the Element to be Searched : ");
    scanf("%d",&key_1880);
    index_1880 = SearchElement(y_1880,key_1880);
    printf("The Element is at Index : %d",index_1880);

    return 0;
}

int SearchElement(int y[],int key){
    int i ,index;
    for(i=1;i<10;i++){
        if(key==y[i])
            index = i;
    }

    return index;
}