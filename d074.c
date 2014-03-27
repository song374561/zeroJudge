#include <stdio.h>

int main()
{
	int n;
	int k[5000];
	int i;
	int max;

	while(scanf("%d",&n)!=EOF){
		for (i = 0 ; i < n ; i++)
			scanf("%d",&k[i]);
		max = k[0];
		for (i = 1 ; i < n ; i++){
			if (k[i] > max)
				max = k[i];
		}
		printf("%d\n",max);
	}
	return 0;
}