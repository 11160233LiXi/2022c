#include <stdio.h>
#include <string.h>
char mirrored_cahr(char c)
{
    char line1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    char line2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    for(int i=0; line1[i]!=0;i++){
        if(line1[i]==c) return line2[i];
    }
    return ' ';
}
int main()
{
	char line[30];
	scanf("%s",line);

	int N=strlen(line);
	int bad=0;
	for(int i=0;i<N;i++){
        char c1=line[i];
        char c2=mirrored_cahr(line[N-1-i]);
		if(c1!=c2) bad=1;
	}
	if(bad==1) printf("他是鏡像字\n");
	else printf("他不是鏡像字\n");
}
