#include <stdio.h>
int main()
{
    ///step1 檔案的指標，要開起檔案///*就是指標
    FILE *fout = fopen("output.txt","w+");
    fprintf(fout, "Hello World\n");
}
