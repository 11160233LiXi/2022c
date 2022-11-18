#include <stdio.h>
int main()
{
    int a=90,b=80,temp;
    printf("%d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
}
