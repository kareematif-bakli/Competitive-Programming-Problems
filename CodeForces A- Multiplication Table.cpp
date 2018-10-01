#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,OO=0x3f3f3f3f;
int main()
{
	long long n;
	long long m;
	scanf("%lld %lld",&n,&m);
	long long c=0;
	for(int i=1;i<=n;i++)
	if(m%i==0 && i*n>=m) c++;
	printf("%lld\n",c);
}

