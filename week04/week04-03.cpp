#include <stdio.h>
int main()
{
    int a=10,b=20;
    printf("a�b����?%d\n",&a);

    int * p1=&a;
    int * p2=&b;

    printf("p���쪺���ȬO%d\n",*p1);
    printf("p���쪺���ȬO%d\n",*p2);

    p1=p2;
    printf("p���쪺���ȬO%d\n",*p1);
    printf("p���쪺���ȬO%d\n",*p2);
}
