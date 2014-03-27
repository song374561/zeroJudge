#include <stdio.h>

int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		if (n < 7 || n >= 17)
			printf("Off School\n");
		else if (n == 7 && m < 30)
			printf("Off School\n");
		else
			printf("At School\n");
	}
	return 0;
}