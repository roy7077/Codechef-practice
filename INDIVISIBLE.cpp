#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    for(int i=1;i<100;i++)
	    {
	        if(a%i!=0 and b%i!=0 and c%i!=0)
	        {
	            //flag=1;
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
