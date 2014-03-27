#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		(n % 3)==0?printf("%d\n",n/3):printf("%d\n",n/3+1);
	}
	return 0;
}