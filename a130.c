#include <stdio.h>

typedef struct _urlSys
{
	char url[105];
	int neer;
} URL;

int main()
{
	int n;
	URL url[10];
	int i;
	int max;
	int count;

	while(scanf("%d",&n)!=EOF){
		count = 1;
		while(n--){
			for (i = 0 ; i < 10 ; i++){
				scanf("%s %d",url[i].url,&url[i].neer);
				if (i == 0)
					max = url[i].neer;
				else if (url[i].neer > max)
					max = url[i].neer;
			}
			printf("Case #%d:\n",count++);
			for(i = 0 ; i < 10 ; i++){
				if (url[i].neer == max)
					printf("%s\n",url[i].url);
			}
		}
	}
	return 0;
}