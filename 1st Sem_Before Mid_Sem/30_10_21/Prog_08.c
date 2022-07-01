#include <stdio.h>

int main()
{
    int hour_1 , hour_2 , min_1 , min_2, sec_1 ,sec_2 ;
    int cal , t_sec ,h_3 , m_3 , s_3 ;
    
    printf("Enter the Hour : ");
    scanf("%d",&hour_1);
    printf("Enter the min : ");
    scanf("%d",&min_1);
    printf("Enter the sec : ");
    scanf("%d",&sec_1);
    
    printf("Enter the Hour : ");
    scanf("%d",&hour_2);
    printf("Enter the min : ");
    scanf("%d",&min_2);
    printf("Enter the sec : ");
    scanf("%d",&sec_2);
    
    t_sec = hour_2*3600 + hour_1*3600 + min_2*60 + min_1*60 + sec_2 + sec_1 ;
    
    h_3 = t_sec / 3600 ;
    cal = t_sec % 3600 ;
    m_3 = cal / 60 ;
    s_3 = cal % 60 ;
    
    printf("%d:%d:%d",h_3,m_3,s_3);

    return 0;
}