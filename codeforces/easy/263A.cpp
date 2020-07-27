
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	vector < vector <int> > v;
	int i, j;
	bool stop = false;
	for(i = 0; i<5 && !stop; i++){
		
		for(j = 0; j<5; j++){
			int temp;
			cin >> temp;
			
			if(temp > 0) { stop = true; break; }
		}
		
	}
	
	int count = abs(2-i+1) + abs(2-j);
	
	cout << count;
	
	
	return 0;
}
