
#include <bits/stdc++.h>
using namespace std;

#define rd(x) cin>>x;
#define dbg(x) cout << x << "\n";
#define vi vector <int> v;
#define rdv(x, n) fo(n) { int t; cin >> t; x.push_back(t);}
#define foi(i, n) for(; i<n; i++)
#define fo(n) for(int i = 0; i<n; i++)
#define itr(v) for(auto i = v.begin(); i != v.end(); i++)

int main(){
	
	long long int n, k;
	rd(n) rd(k)
	
	if(k <= (n+1)/2){
		//number sure to be odd
		dbg(1 + 2*(k-1))
	} else {
		//number sure to be even
		dbg(2 + 2*(k-((n+1)/2)-1))
	}
	return 0;
}
