#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    
	   // int num=0;
	   // int cnt=1;
	   // for(int i=s.length();i>=0;i--)
	   // {
	   //     if(s[i]=='1')
	   //     {
	   //         num+=cnt;
	   //     }
	        
	   //     cnt*=2;
	   // }
	    
	    
	   // int num2=0;
	   // int cnt2=0;
	   // cnt=1;
	   // for(int i=s.length();i>=0;i--)
	   // {
	   //     if(cnt2>=3)
	   //     break;
	        
	   //     if(s[i]=='1')
	   //     {
	   //         cnt2++;
	   //         num2+=cnt;
	   //     }
	        
	   //     cnt*=2;
	   // }
	    
	   // if((num-num2)%2==0)
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	    
	   // cout<<num<<" "<<num2<<endl;
	    
	    int count=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='1')
	        count++;
	    }
	    
	    if(s=="1" or s=="10")
	    cout<<"NO"<<endl;
	    else if(count<=3)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
