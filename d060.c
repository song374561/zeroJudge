#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		(n <= 25)?printf("%d\n",25-n):printf("%d\n",60-n+25);
	}
	return 0;
}