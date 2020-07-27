
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector< vector <int> > v;
	
	for(int i=0; i < n; i++){
		vector<int> x;
		int temp;
		cin >> temp;
		x.push_back(temp);
		cin >> temp;
		x.push_back(temp);
		cin >> temp;
		x.push_back(temp);
		
		v.push_back(x);
	}
	
	int count = 0;
	for(int i=0; i<n; i++){
		auto x = v[i];
		
		if(accumulate(x.begin(), x.end(), 0) >=2)
			count++;
	}
	
	cout << count;
}
