#include <stdio.h>

int main()
{
    int x=3,y;
    y=x++;
    printf("%d%d",x,y);
    y=++x;
    printf("%d%d",x,y);

    y=--x;
    printf("%d%d",x,y);

    return 0;
}
