#include <stdio.h>
int main()
{
    printf("=%c=%d=\n",65,65);
    printf("=%c=%d=\n",'+','+');
    printf("=%c=%d=\n",'\n','\n');
    printf("=%c=%d=\n",'\t','\t');
    printf("=%c=%d=\n",'\0','\0');

    char line[]="hello world";///�r��S�s�r���}�C
    for(int i=0;     ;i++) {///�����D�j��n�]�h�[
        char c=line[i];
        if(c==0) break;
        printf("=%c",c);
    }
}
