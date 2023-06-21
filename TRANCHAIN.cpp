#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<string> v(n);
        int A=0;
        int B=0;
        int AB=0;
        int O=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]=="A")
            A++;
            else if(v[i]=="AB")
            AB++;
            else if(v[i]=="B")
            B++;
            else
            O++;
        }
        
        int ans1=A+AB;
        int ans2=B+AB;
        int ans3=O+A+AB;
        int ans4=O+B+AB;
        
        cout<<max(max(ans1,ans2),max(ans3,ans4))<<endl;
    }
	return 0;
}
