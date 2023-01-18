#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int test;
	cin>>test;
	while(test--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    int ans1=x;
	    int ans2= __gcd(x,y);
	    int final_ans=ans1-ans2;
	    cout<<final_ans<<endl;
	}
	return 0;
}
