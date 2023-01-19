#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int re;
        cin>>re;
        int seq[n];
        for(int i=0;i<n;i++)
        {
            cin>>seq[i];
        }
        
            int diff=abs(seq[0]-seq[1]);
            int left = INT_MIN;
            int right =INT_MAX;
            for(int i=0;i<n;i++)
            {
                if(seq[i]<=left || seq[i]>=right)
                {
                    flag=1;
                    break;
                }
                else if(seq[i]>re)
                {
                    right = seq[i];
                }
                else if(seq[i]<re)
                {
                    left = seq[i];
                }
            }
                if(flag)
                {
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
        
        
    }
	return 0;
}
