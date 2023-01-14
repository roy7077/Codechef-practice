#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    
	   double dis1,dis2;
	   dis1=sqrt((x1*x1)+(y1*y1));
	   dis2=sqrt((x2*x2)+(y2*y2));
	   
	   if(dis1==dis2)
	   cout<<"EQUAL"<<endl;
	   else if(dis1>dis2)
	   cout<<"ALEX"<<endl;
	   else
	   cout<<"BOB"<<endl;
	}
	return 0;
}
