#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
	string line;
	int count;
	while(getline(cin,line)){
		int i = 0;
		while(line[i]){
			if (isalpha(line[i]))
				count++;
			i++;
		}
		cout << count << endl;
	}
	return 0;
}