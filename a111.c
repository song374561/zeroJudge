#include <stdio.h>

int main()
{
	int n;
	int sum;
	while(scanf("%d",&n)!=EOF && n){
		sum = 0;
		for (;n >= 1 ; n--){
			sum += n*n;
		}
		printf("%d\n",sum);
	}
	return 0;
}