
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int num;
	string str;
	cin >> num >> str;
	
	int countA = 0; //occurrences of substring "SF"
	int countB = 0; //occurrences of substring "FS"
	
	auto foundA = str.find("SF");
	while(foundA != string::npos){
		countA++;
		foundA = str.find("SF", foundA+1);
	}
	
	auto foundB = str.find("FS");
	while(foundB != string::npos){
		countB++;
		foundB = str.find("FS", foundB+1);
	}
	
	if(countA > countB) cout << "YES";
	else cout << "NO";
	
}
