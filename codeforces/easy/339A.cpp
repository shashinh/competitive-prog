
#include <bits/stdc++.h>
using namespace std;

int main(){

		string in;
		cin >> in;
		
		vector<int> v;
		for(auto i = in.begin(); i != in.end(); i++){
			
			if(*i != '+') v.push_back(*i-'0');
		}
		
		
		sort(v.begin(), v.end());
		for(auto i = v.begin(); i!= v.end(); i++){
			cout << *i;
			if(i != (v.end()-1)) cout << "+";
		}
		
		
		return 0;
}
