#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b;
	    
	    float n1=100-a;
	    float n2=200-((float)(b*200))/100;
	    
	    if(n1<n2)
	    cout<<"FIRST"<<endl;
	    else if(n2<n1)
	    cout<<"SECOND"<<endl;
	    else
	    cout<<"BOTH"<<endl;
	}
	return 0;
}

// time _Complexity - O(t)
