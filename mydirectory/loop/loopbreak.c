#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,x;
    while(i<=5)
    {
        printf("Enter a number\n");
        scanf("%d",&x);
        if(x>5)
        break;
        i++;
    }
    i==6?printf("Ends Normally\n"):printf("Applied Break\n");
    return 0;
}
