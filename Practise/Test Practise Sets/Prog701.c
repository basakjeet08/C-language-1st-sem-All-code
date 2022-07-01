/*WAP to declare an union named as ABC having three members a, b and c as character, integer 
and double respectively. Assign user entered values to these members respectively one by one 
and display these values immediately. Again assign these user entered values to a, b, c 
one by one all together and display these values at last. Find the difference.*/
#include <stdio.h>
union abc{
    char a;
    int b;
    double c;
};
void Show(union abc);
int main(){
    union abc Test1,Test2;

    printf("Test 01 ---------------\n");
    printf("Enter the Value of a (character) : ");
    scanf("%c",&Test1.a);
    printf("The value of a is : %c\n",Test1.a);

    printf("Enter the Value of b (Integer) : ");
    scanf("%d",&Test1.b);
    printf("The value of b is : %d\n",Test1.b);  

    printf("Enter the Value of c (Double) : ");
    scanf("%lf",&Test1.c);
    printf("The value of c is : %lf\n",Test1.c);
    Show(Test2);
    return 0;
}
void Show(union abc Test2){
    printf("Test 01 ---------------\n");
    printf("Enter the Value of a (character) : ");
    scanf("%c",&Test2.a);
    printf("Enter the Value of b (Integer) : ");
    scanf("%d",&Test2.b);
    printf("Enter the Value of c (Double) : ");
    scanf("%lf",&Test2.c);

    printf("The value of a is : %c\n",Test2.a);
    printf("The value of b is : %d\n",Test2.b);  
    printf("The value of c is : %lf\n",Test2.c);
}