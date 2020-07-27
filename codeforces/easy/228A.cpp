#include <bits/stdc++.h>
using namespace std;

int main(){
		
	int temp;
	set <int> s;
	for(int i = 0; i<4; i++){
		cin >> temp;
		s.insert(temp);
	}
	
	cout << 4 - s.size();
	return 0;
}
