#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,OO=0x3f3f3f3f;
int arr[101];
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   int c=0;
   if(arr[m-1]==1) c++;
   int k=m-2,l=m;
   for(;k>=0 || l<n;k--,l++)
   {
   	 if(arr[k]==1 && arr[l]==1 && k>=0 && l<n) c+=2;
		else
		if(arr[k]==1 && l>=n) c++;
		else
		if(arr[l]==1 && k<0) c++; 
   }
   	printf("%d\n",c);
}
