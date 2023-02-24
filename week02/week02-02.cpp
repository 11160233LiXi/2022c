#include <stdio.h>

int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		///printf("%d %d\n", a, b);
		int ans=a-b;
		if(ans<0) ans=b-a;
		printf("%d\n",ans);
	}
}
