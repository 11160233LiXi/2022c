#include <stdio.h>
int main()
{
    for(int i=0;i<5;i++) {
        printf("電腦從零開始印,i=%d\n",i);
    }
    for(int i=1;i<=5;i++) {
        printf("人類從一開始印,i=%d\n",i);
    }
    for(int i=5;i>0;i--) {
        printf("倒過來型,i=%d\n",i);
    }
}
