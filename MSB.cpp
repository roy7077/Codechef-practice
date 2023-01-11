#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b,x,y;
	    cin>>a>>b>>x>>y;
	    
	   if(a*x==a and b/y==b and a<b)
	   {
	       cout<<"-1"<<endl;
	       continue;
	   }
	   
	   //if x and y are equal
	   int cnt=0;
	   if(x==y)
	   {
	       int cnt1=0;
	       int cnt2=0;
	       
	       ll _a=a;
	       ll _b=b;
	       
	       //dividing
	       while(_b>a)
	       {
	           cnt1++;
	           _b/=y;
	           
	       }
	       
	       //multiplying
	       while(_a<b)
	       {
	           cnt2++;
	           _a*=x;
	           if(_a>=b)
	           break;
	           
	           if(b/_a + bool((b%_a)) <= x){
				++cnt2;break;
			}
	       }
	       
	       cout<<min(cnt2,cnt1)<<endl;
	       continue;
	   }
	   
	   if(y > x){
		while(a < b){
			b /= y;
			++cnt;
		}
	}
	else{
		while(a < b){
			a *= x;
			++cnt;
			if(a >=b)break;
			if(b/a + bool((b%a))<= x){
				++cnt;break;
			}
		}
	}
	cout<<cnt<<endl;
	    
	}
	return 0;
}


