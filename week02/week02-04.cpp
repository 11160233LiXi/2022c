#include <iostream>

int main()
{
	long long int a,b;
	while(std::cin>>a>>b){
		///printf("%d %d\n", a, b);
		int ans=a-b;
		if(ans<0) ans=b-a;
		std::cout<<ans<<std::endl;
	}
}
