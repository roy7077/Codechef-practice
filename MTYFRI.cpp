#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//compare
bool compare(int a,int b)
{
    return a>b;
}
int main() {
	
	//number of test case
	int t;
	cin>>t;
	while(t--)
	{ 
	    //taking input n and k - (n is the size of an array)
	    int n,k;
	    cin>>n>>k;
	    
	    //declaring 3 vector
	    vector<int> v(n);
	    vector<int> motu,tomu;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        
	        /* if i is odd thats mean it is tomu's turn
	           if i is even thats mean it is motu's turn
	       */
	        if(i&1)
	        tomu.push_back(v[i]);
	        else
	        motu.push_back(v[i]);
	    }
	    
	    // sort motu's element in decreasing order
	    // sort tomu's element in increasing order
	    sort(motu.begin(),motu.end(),compare);
	    sort(tomu.begin(),tomu.end());
	    
	    int m=0;
	    int t=0;
	    int limit=0;
	    while(1)
	    {
	        if(m>=motu.size() or t>=tomu.size() or limit>=k)
	        break;
	       
	       
	        if(motu[m]>tomu[t])
	        {
	            swap(motu[m],tomu[t]);
	            m++;
	            t++;
	            limit++;
	        }else
	        break;
	    }
	    
	    int sum1=0;
	    int sum2=0;
	    
	    for(int i=0;i<motu.size();i++)
	    sum1+=motu[i];
	    
	    for(int i=0;i<tomu.size();i++)
	    sum2+=tomu[i];
	    
	    if(sum2>sum1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
 
/* time _Complexity
   ________________
   
   O(n) - taking input array
   O(nlogn + nlogn) - for sorting the vector
   O(n/2) - for comparing the elements in motu and tomu
   O(n+n) - finding the sum
   
   overall time _Complexity is O(nlogn)
   
*/