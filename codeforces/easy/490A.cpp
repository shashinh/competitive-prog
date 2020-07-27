
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	
	vector <int> v1, v2, v3;
	for(int i = 0; i<n; i++){
		int temp;
		cin >> temp;
		if(temp == 1) v1.push_back(i+1);
		else if(temp == 2) v2.push_back(i+1);
		else v3.push_back(i+1);
	}
	
	if(v1.empty() || v2.empty() || v3.empty()) cout << 0; //O(1))
	
	else {
		
		int x = min(min(v1.size(), v2.size()), v3.size());
		cout << x << "\n";
		
		for(int i = 0; i<x; i++){
			cout << v1[i] << " " << v2[i] << " " << v3[i] << "\n";
		}
	
}
	
	return 0;
	
}
