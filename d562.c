#include <stdio.h>

int main()
{
	int n;
	int num[105];
	int i;
	int length;
	int first,end;
	int flag;

	while(scanf("%d",&n)!=EOF){
		length = n;
		for (i = 0 ; i < n ; i ++){
			scanf("%d",&num[i]);
		}
		for (i = 0 ; i < n ; i++)
			printf("%d ",num[i]);
		printf("\n");
		first = 0;
		end = n-1;
		flag = 1;
		while(length>1){
			if (flag == 0){
				num[end--] = 0;
				length--;
				for (i = 0 ; i < n ; i++){
					if (num[i]!=0)
						printf("%d ",num[i]);
				}
				printf("\n");
				flag = 1;
			}
			else{
				num[first++] = 0;
				length--;
				for (i = n-1 ; i >= 0 ; i--){
					if (num[i]!=0)
						printf("%d ",num[i]);
				}
				printf("\n");
				flag = 0;
			}
		}
	}
	return 0;
}