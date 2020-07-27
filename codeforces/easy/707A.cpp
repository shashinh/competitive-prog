#include <bits/stdc++.h>
using namespace std;

int main(){
	
	vector < vector<char> > v;
	
	int m, n;
	cin >> n >> m;
	
	bool colored = false;
	
	for(int i = 0; i<n && !colored; i++){
		char temp;
		for(int j = 0; j<m; j++){
			cin >> temp;
			
			if(temp != 'W' && temp != 'B' && temp != 'G') {colored = true; break;}
		}
	}
	
	if(colored) cout << "#Color";
	else cout << "#Black&White";
	
	
	return 0;
}
