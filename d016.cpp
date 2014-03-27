#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int convertInt(string number);

int main()
{
	string line,subline;
	stack<int> myStack;
    int num;
    int i,j;
	while(getline(cin,line)){
		for (i = 0 ; i < line.length() ; i++){
			if (isdigit(line[i])){
				for (j = i ; j < line.length() ; j++){
					if (line[j] == ' ')
						break;
				}
				subline = line.substr(i,j-i);
				num = convertInt(subline);
                i = j;
				myStack.push(num);
			}
			if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == '%'){
				switch(line[i]){
                        int ans,a,b;
                    case '+':
                        a = myStack.top();
                        myStack.pop();
                        b = myStack.top();
                        myStack.pop();
                        ans = a+b;
                        myStack.push(ans);
                        break;
                    case '-':
                        a = myStack.top();
                        myStack.pop();
                        b = myStack.top();
                        myStack.pop();
                        ans = b-a;
                        myStack.push(ans);
                        break;
                    case '*':
                        a = myStack.top();
                        myStack.pop();
                        b = myStack.top();
                        myStack.pop();
                        ans = a*b;
                        myStack.push(ans);
                        break;
                    case '/':
                        a = myStack.top();
                        myStack.pop();
                        b = myStack.top();
                        myStack.pop();
                        ans = b/a;
                        myStack.push(ans);
                        break;
                    case '%':
                        a = myStack.top();
                        myStack.pop();
                        b = myStack.top();
                        myStack.pop();
                        ans = b % a;
                        myStack.push(ans);
                        break;
				}
			}
		}
        cout << myStack.top() << endl;	
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