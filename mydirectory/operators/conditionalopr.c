#include <stdio.h>
int main()
{//this program is for nature of number
    double x;
    printf("enter a number\n");
    scanf("%lf",&x);
    if(x>0)
    {
        printf("positive number\n");
    }
    if(x<0)
    {
        printf("Non positive number\n");
    }
    if(x==0)
    {
        printf("neither positive nor negative");
    } 
    return 0;
}
