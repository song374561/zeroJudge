#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		(n > 50)?n--:n;
		printf("%d\n",n);
	}
	return 0;
}