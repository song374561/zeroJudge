#include <stdio.h>

int main()
{
	long long int a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		if (a > b)
			printf("%lld",a-b);
		else
			printf("%lld",b-a);
		printf("\n");
	}
	return 0;
}