#include <stdio.h>
int main()
{
    char c;
    printf("請輸入字串: ");
    char line[40];
    scanf("%s",line);
    ///會被空白鍵斷開
    printf("你讀入: %s\n",line);
}
