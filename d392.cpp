#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int convertInt(string number);

int main()
{
	string line,subline;
	int j;
	int num;
	while(getline(cin,line)){
		unsigned int sum = 0;
		for (int i = 0 ; i < line.length() ; i++){
			if (isdigit(line[i])){
				for (j = i ; j < line.length() ; j++){
					if (isblank(line[j]))
						break;
				}
				subline = line.substr(i,j-i);
				num = convertInt(subline);
				sum += num;
                i = j;
			}
		}
		cout << sum << endl;
	}
	return 0;
}

int convertInt(string number)
{
	double answer = 0;
	int i;
	int j;
    i = number.length()-1;
    for (j = 0 ; i >= 0 ; i--,j++){
        answer += (number[i]-'0')*pow(10,j);
    }
	return (int)answer;
}