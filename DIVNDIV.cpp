#include <iostream>
using namespace std;
#define ll long long

int main() {
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        
        if(y%z==0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            ll a;
            a = y*((x/y)+1);
            while (a%z==0){
                a+=y;
            }
            cout << a << endl;
        }
    }
	return 0;
}
