#include <bits/stdc++.h>
using namespace std;

int main(){
		
	int n, k;
	cin >> n >> k;
	
	vector<int> v;
	
	bool isPos = false;
	for(int i = 0; i<n; i++){
		int x;
		cin >> x;
		if (x > 0 && !isPos) isPos = true; 
		v.push_back(x);
		
	}
	
	if(isPos){
		
		int check = v[k-1];
		auto it = v.rbegin();
		for( ; it != v.rend(); it++){
			if(*it > 0 && *it >= check) break;
		}
		
		cout << v.rend() - it;
		
	} else cout << 0;
	
	
	return 0;

	
}
