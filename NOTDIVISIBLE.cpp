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
	    
	   // vector<int> v;
	   // int pre=-300;
	    
	   
	    for(int i=0;i<n;i++)
	    {
	        if(i%2)
	        cout<<"0"<<" ";
	        else
	        cout<<"1"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
