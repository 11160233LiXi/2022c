#include <stdio.h>
int main()
{
    int a[10] = {9,8,7,5,6,4,2,3,1,0};
    for(int k=0;k<10-1;k++) {
        for(int j=0;j<10-1;j++) {
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
       for(int i=0;i<10;i++) {
            printf("%d ",a[i]);
       }
       printf("\n");
    }
}
