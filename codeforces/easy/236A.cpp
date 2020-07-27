
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	cin >> str;
	
	set<char> s;
	for(auto i = str.begin(); i != str.end(); i++){
		s.insert(*i);
	}
	
	if(s.size() %2 == 0) cout << "CHAT WITH HER!"; 
	else cout << "IGNORE HIM!";
}
