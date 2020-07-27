
#include <bits/stdc++.h>
using namespace std;



int main(){
	
	int n;
	cin >> n;
	
	bool prime[n+1];
	memset(prime, false, sizeof(prime));
	
	for(int p = 2; p*p <= n; p++){
		if(!prime[p]){
			for(int i = p*p; i <=n; i+=p){
				prime[i] = true;
			}
		
		}
	}

	
	int fact = 1;
	for(int i = 2; i <= n; i++){
		int count = 0;
		if(!prime[i]){
			while(n%i == 0){
				count++;
				n = n/i;
			}
		}
		
		fact *= (count+1);
	}
	
	cout << fact-1;
}
