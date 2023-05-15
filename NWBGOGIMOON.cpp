#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	int z=0;
	int o=0;
	
	for(int i=0;i<n;i++)
	{
	    if(str[i]=='1')
	    o++;
	    else
	    z++;
	}
	
	if(o>z)
	cout<<"gogi_to_the_moon"<<endl;
	else
	cout<<"kiddo"<<endl;
	return 0;
}
