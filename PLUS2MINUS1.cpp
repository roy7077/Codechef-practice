#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    if(n==0)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    int left=0-(n);
	    int right=0+(2*n);
	    
	    cout<<right-left<<endl;
	}
	return 0;
}
