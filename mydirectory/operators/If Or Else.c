#include <stdio.h>
int main(int argc, char const *argv[])
{    
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive Number\n");
    
    }
    else
    {
        printf("Non Positive Number\n");
    }
    
    return 0;
}
