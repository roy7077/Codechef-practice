#include <iostream>
#include <iomanip>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    double p,x,y,z;
	    cin>>p>>x>>y>>z;
	    
	    if(z)
	    {
	        p+=(double)(((double)y/100)*p);
	    }else
	    p-=(double)(((double)x/100)*p);
	    
	    std::cout << std::fixed;
        std::cout << std::setprecision(10);
        std::cout << p<<endl;
	}
	
	return 0;
}
