#include <iostream>
#include <vector>
#include <string>

using namespace std;

void upperStr(string &inputStr){
	decltype(inputStr.size()) i;
	for(i = 0; i < inputStr.size(); i++){
		inputStr[i] = toupper(inputStr[i]);
	}
}

int main(){
	vector<string> vecStr;
	string inputStr;
	while(cin >> inputStr){
		upperStr(inputStr);
		vecStr.push_back(inputStr);
	}
	decltype(inputStr.size()) i = 0;
	while(i <= inputStr.size()){
		cout << vecStr[i] << endl;
		i ++;
	}
	return 0;
}
