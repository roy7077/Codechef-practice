#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    vector<int> v(9,0);
	    for(int i=a;i<=b;i++)
	    v[i]=1;
	    
	    for(int i=c;i<=d;i++)
	    v[i]=1;
	    
	    int count=0;
	    for(int i=0;i<9;i++)
	    {
	        if(v[i]==1)
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	
	return 0;
}
