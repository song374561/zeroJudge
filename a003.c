#include <stdio.h>

int main()
{
	int m,n,s;

	while(scanf("%d %d",&m,&n)!=EOF){
		s = (m*2+n)%3;
		if (s == 0)
			printf("普通\n");
		else if (s == 1)
		 	printf("吉\n");
		else
		 	printf("大吉\n");
	}

	return 0;
}