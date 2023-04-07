#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(3);
    a[0]=100;
    a[1]=1000;
    a[2]=10000;
    for(int i=0;i<3;i++) {
        printf("%d\n",a[i]);
    }
}
