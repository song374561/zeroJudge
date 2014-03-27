#include <stdio.h>

int main()
{
	int a,b,c;
	int max;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		max = a;
		if (b > max)
			max = b;
		if (c > max)
			max = c;
		printf("%d\n",max);
	}
	return 0;
}