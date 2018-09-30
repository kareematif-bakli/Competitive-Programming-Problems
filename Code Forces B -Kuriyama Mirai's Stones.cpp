#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N=1e5+5,OO=0x3f3f3f3f;
ll a1[N],a2[N];
int main()
{
   int n;
   int m,z,l,r;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
   scanf("%lld",&a1[i]);
   a2[i]=a1[i];
   }
   sort(a2,a2+n);
  for(int i=1;i<n;i++)
  {
      a1[i]+=a1[i-1];
	  a2[i]+=a2[i-1];	
  }
  scanf("%d",&m);
  while(m--)
  {
  	scanf("%d %d %d",&z,&l,&r);
  	if(z==1)
  	printf("%lld\n",a1[r-1]-a1[l-2]);
  	else
  	printf("%lld\n",a2[r-1]-a2[l-2]);
  }
  	
	
}
