#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,OO=0x3f3f3f3f;
int main()
{
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]<97)
		a[i]=tolower(a[i]);
		if(b[i]<97)
		b[i]=tolower(b[i]);
		
		if(a[i]>b[i])
		{
		    printf("1\n");
		    return 0;
	    }
	    else
	    if(a[i]<b[i])
	    {
	    	printf("-1\n");
	    	return 0;
		}
	}
	printf("0\n");
}
