#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
	string tempStr;
	getline(cin, tempStr);
	for(auto &tempC : tempStr)
		tempC = 'X';
	cout << tempStr << endl;
	return 0;
}
