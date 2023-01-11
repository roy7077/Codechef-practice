#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,y;
        cin>>n>>y;
        
        //taking input
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        
        int temp=0;
        for(int i=0;i<n;i++)
        temp=(temp | v[i]);
        
        int final_ans=(y^temp);
        
        //check if both same or not
        if((final_ans | temp)==y)
        cout<<final_ans<<endl;
        else
        cout<<"-1"<<endl;
        
    }
}
 
// // Function to return the binary
// // equivalent of decimal value N
// int decimalToBinary(int N)
// {
//     // To store the binary number
//     ull B_Number = 0;
//     int cnt = 0;
//     while (N != 0) {
//         int rem = N % 2;
//         ull c = pow(10, cnt);
//         B_Number += rem * c;
//         N /= 2;
//         // Count used to store exponent value
//         cnt++;
//     }
//     return B_Number;
// }
// int main() {
	
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    ll n,y;
// 	    cin>>n>>y;
// 	    vector<ll> v(n);
// 	    for(int i=0;i<n;i++)
// 	    cin>>v[i];
	    
// 	    ll temp=0;
// 	    for(int i=0;i<n;i++)
// 	    temp=temp|v[i];
	    
// 	    ll bin1=decimalToBinary(temp);
// 	    ll bin2=decimalToBinary(y);
	    
// 	    ll fbin=10;
// 	    if(bin1==bin2)
// 	    cout<<"0"<<endl;
	    
// 	    while(bin1 and bin2)
// 	    {
// 	        int last1=bin1%10;
// 	        int last2=bin2%10;
	        
// 	        bin1/=10;
// 	        bin2/=10;
	        
// 	        if(last1==last2)
	        
// 	    }
// 	}
// 	return 0;
// }
