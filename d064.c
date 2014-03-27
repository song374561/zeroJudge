#include <stdio.h>

int main()
{
	int n;

	while(scanf("%d",&n)!=EOF){
		(n % 2)?printf("Odd\n"):printf("Even\n");
	}
	return 0;
}