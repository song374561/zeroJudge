#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		n -= 15;
		(n < 0)?n += 24:n;
		printf("%d\n",n);
	}
	return 0;
}