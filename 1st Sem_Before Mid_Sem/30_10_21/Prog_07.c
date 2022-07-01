#include <stdio.h>

int main()
{
    int input , sec , hour , min ;
    int cal ;
    
    printf("Enter the Equivalent hour : ");
    scanf("%d",&input);
    
    hour = input / 3600 ;
    cal = input % 3600 ;
    min = cal / 60 ;
    sec = cal % 60 ;
    
    
    
    
    printf("%d Seconds = %d hours,%d Minute and %d seconds", input,hour,min,sec);

    return 0;
}