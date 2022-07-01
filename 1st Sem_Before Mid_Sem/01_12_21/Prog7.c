//Q7. Linear search
#include <stdio.h>
int main()
{
    int ar[10],i,n,flag;
    flag = 0;
    printf("Enter the Array Elements : -------------\n");
    for(i=0;i<8;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the Element to be Searched : ");
    scanf("%d",&n);
    for(i=7;i>=0;i--){
        
        if(ar[i]==n){
            flag = 1;
        }
    }
    if(flag==1){
        printf("The Element is Present in the Array !!");
    }
    else
        printf("The Element is not Present in the Array !!");
    return 0;
}