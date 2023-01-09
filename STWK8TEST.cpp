#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    cin>>v[i][j];
	}
	
	vector<int> v1,v2;
	
	for(int i=0;i<n;i++)
	{
	    int maxi=0;
	    for(int j=0;j<m;j++)
	    {
	        maxi=max(maxi,v[i][j]);
	    }
	    v1.push_back(maxi);
	}
	
	for(int i=0;i<m;i++)
	{
	    int mini=1e9;
	    for(int j=0;j<n;j++)
	    {
	        mini=min(mini,v[j][i]);
	    }
	    v2.push_back(mini);
	}
	
	bool found=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        if(v[i][j]==v1[i] and v[i][j]==v2[j])
	        {
	            found=1;
	            break;
	        }
	    }
	    if(found)
	    break;
	}
	
	if(found)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}
