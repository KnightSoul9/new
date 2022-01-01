#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int choice,a,b,s;
    while (1)
    {    
    printf("1. Addition\n");
    printf("2. Odd-even\n");
    printf("3. Printing N numbers\n");
    printf("4. EXIT\n");

    printf("\n\nEnter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
          printf("Enter two number\n");
          scanf("%d%d",&a,&b);
          s=a+b;
          printf("\nSum is %d\n",s);
        break;
    case 2:
           printf("Enter a Number\n");
           scanf("%d",&a);
           if (a%2==0)
                  printf("Even Number\n");
                  else
                  printf("Odd Number\n");
                  break;

    case 3:
           printf("Enter a Number\n");
           scanf("%d",&a);
           for (b=1;b<=a;b++)
           printf("%d",b);
           break;
    case 4: exit(0);
    default:
    printf("Invalid Choice\n");
    }
    }
    return 0;
    
}
