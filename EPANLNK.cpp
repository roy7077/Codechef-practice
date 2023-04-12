#include <iostream>
#include <cstring>
using namespace std;
#define ll long long

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    
	    ll carry=0;
	    ll num=0;
	    
	    ll divide=0;
	    for(int i=0;i<str.length();i++)
	    {
	        divide=(divide*10+(str[i]-'0'))%20;
	       // num*=10;
	       // num+=carry+(str[i]-'0');
	       // carry=0;
	       // if(num<20)
	       // continue;
	        
	       // divide*=10;
	       // divide+=num/20;
	       // carry=num%20;
	       // num=0;
	    }
	    
	    cout<<divide<<endl;
	    
	}
	return 0;
}
