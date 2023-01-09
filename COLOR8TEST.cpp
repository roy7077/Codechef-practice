#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve(){
    ll int n,a,b,c,d,e,f;
    cin>>n>>a>>b>>c>>d>>e>>f;
    ll int s = a+b+c+d+e+f;
    n=ceil(((double)n)/2);
    cout<<s*n<<endl;
    
    
}

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) solve();
	return 0;
}
