#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z;
    x=sizeof(34);
    y=sizeof(3.56);
    z=sizeof('a');
    printf("%d%d%d",x,y,z);

    return 0;
}
