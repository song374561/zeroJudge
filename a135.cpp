#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line;
	int count = 1;
	while(cin >> line){
		if (line == "HELLO")
			cout << "Case " << count++ << ": ENGLISH" << endl;
		else if (line == "HOLA")
			cout << "Case " << count++ << ": SPANISH" << endl;
		else if (line == "HALLO")
			cout << "Case " << count++ << ": GERMAN" << endl;
		else if (line == "BONJOUR")
			cout << "Case " << count++ << ": FRENCH" << endl;
		else if (line == "CIAO")
			cout << "Case " << count++ << ": ITALIAN" << endl;
		else if (line == "ZDRAVSTVUJTE")
			cout << "Case " << count++ << ": RUSSIAN" << endl;
		else if (line == "#")
			break;
		else
			cout << "Case "<< count++ << ": UNKNOWN" << endl;
	}
	return 0;
}