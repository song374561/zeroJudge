#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num[1005];
	int n;

	while(cin >> n){
		for (int i = 0 ; i < n ;i++)
			cin >> num[i];
		sort(num,num+n);
		
		for (int i = 0 ; i < n ; i++)
			cout << num[i] << ' ';
		cout << endl;

	}
	return 0;
}