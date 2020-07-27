
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int x = 0;
	vector<string> v;
	for(int i = 0; i<n; i++){
		string str;
		cin >> str;
		
		char op = str[1];
		switch(op){
			case '+':
					x++;
					break;
			case '-':
					x--;
					break;
			default:
					break;
		}
	}
	
	cout << x;
	
	return 0;
	}
