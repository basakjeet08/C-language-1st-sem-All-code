//Q8. Delete an element of an array
#include <stdio.h>
int main()
{
    int ar[10],i,n,pos;
    printf("Enter the Array Elements : -------------\n");
    for(i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }    
    printf("Enter the Element to be Deleted : ");
    scanf("%d",&n);
    for(i=0;i<10;i++){        
        if(ar[i]==n){
            pos = i;
        }
    }   
    for(i=pos;i<9;i++){
        ar[i]=ar[i+1];
    }   
    printf("The Final Array is :--------------------\n");
    for(i=0;i<9;i++){
        printf("%d \n",ar[i]);
    }
    return 0;
}
