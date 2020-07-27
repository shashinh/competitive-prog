#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int num;
	cin >> num;
	string str;
	cin >> str;
	
	int L = 0, R = 0;
	for(auto i = str.begin(); i!=str.end(); i++){
		if(*i == L) L--;
		else R++;
	}
	
	cout << R-L+1;
	
	return 0;
	
}
