
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
	
	int n, x;
	rd(n) rd(x)
	
	vi rdv(v, n)
	
	int s = accumulate(v.begin(), v.end(), 0);
	
	int count = abs(s)/x;
	if(abs(s) % x != 0) count++;
	
	dbg(count);
	return 0;
}
