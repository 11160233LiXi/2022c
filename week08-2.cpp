#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n) {
        int k=1;
        while(k<=n) {
            printf("%c",(k<=n-i)?' ':'*');
            k++;
        }
        i++;
        printf("\n");
    }
}
