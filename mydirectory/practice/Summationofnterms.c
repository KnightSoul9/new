#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A1,An,n;
    printf("ENTER FIRST TERM a\n");
    scanf("%d",&A1);
    printf("ENTER LAST TERM\n");
    scanf("%d",&An);
    printf("ENTER NUMBER OF TERMS n\n");
    scanf("%d",&n);
    printf("SUM OF %d TERMS IS %d\n",n,(A1+An)*n/2);
    return 0;
}
