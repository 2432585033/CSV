#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,m,max,max_pos;
	int count=0;
	cin>>n>>m;
	int **a=new int *[n];
	
	int *b=new int[n];
	
	int *d=new int[n];
	 
	for(int i=0;i<n;i++)
	a[i]=new int[m];
	for(int i=0;i<n;i++)
	{
	  cin>>b[i];
	  d[i]=0;
	  for(int j=0;j<m;j++)
	   {
	    cin>>a[i][j];
	    b[i]=b[i]+a[i][j];
	    d[i]+=abs(a[i][j]);
	   }
    }
    max=d[0];
    for(int i=0;i<n;i++)
    {
    	count+=b[i];
    	if(d[i]>max)
    	{
		max=d[i];
    	max_pos=i+1;
        }
	}
	cout<<count<<" "<<max_pos<<" "<<max;
	return 0;
    
	
	
}
