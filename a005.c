#include <stdio.h>

int main()
{
	int n;
	int a[5];
	int i;
	int k,r;
	
	while(scanf("%d",&n)!=EOF){
		while(n--){
			for (i = 0 ; i < 4 ; i++)
				scanf("%d",&a[i]);
			k = a[3]-a[2];
			if (a[2]-a[1] == k && a[1] - a[0] == k){
				a[4] = a[3]+k;
			}
			
			r = a[3]/a[2];
			if (a[2]/a[1] == r && a[1]/a[0] == r){
				a[4] = a[3]*r;
			}
			
			for (i = 0 ; i < 5 ; i++)
				printf("%d ",a[i]);
			printf("\n");
		}
	}
	return 0;
}
