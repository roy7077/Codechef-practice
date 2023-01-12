#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    //calculating total number of squares of odd sides
	    int sum=0;
	    for(int i=1;i<=n;i+=2)
	    {
	        sum+=pow(n-i+1,2);
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}
