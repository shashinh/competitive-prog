#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<string> strV;
	
	
	for(int i = 0; i<n; i++){
		
		string str;
		cin >> str;
		strV.push_back(str);
		
	}
	
	for(int i = 0; i<n; i++){
		int length = strV[i].length();
		if(length >10){
			int count = strV[i].length() - 2;
			cout << strV[i].front() << count << strV[i].back() << "\n";
		} else cout << strV[i] << "\n";
		
	}

}
