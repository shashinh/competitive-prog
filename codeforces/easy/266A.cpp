#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	string str;
	cin >> n >> str;
	
	auto it = str.begin(); auto itN = it+1;
	int count = 0;


	while(itN !=str.end()){
		if(*it == *itN){
			//we have a duplicate
			count++;
			itN++;
		} else { it = itN; itN++;}
	}
		
	cout << count;
	
	return 0;
}
