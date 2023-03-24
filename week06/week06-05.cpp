#include <stdio.h>
#include <algorithm>

int a[10]={1,2,3,4,5,2,7,6,9,8};
int main()
{
    std::sort(a, a+10);

    for(int i=0;i<10;i++) {
        printf("%d ",a[i]);
    }
}
