#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,OO=0x3f3f3f3f;
int main()
{
	int a[3],b[3],sum1=0,sum2=0,res=0;
	int n;
	for(int i=0;i<3;i++)
	{
	scanf("%d",&a[i]);
	sum1+=a[i];
    }
    for(int i=0;i<3;i++)
	{
	scanf("%d",&b[i]);
	sum2+=b[i];
    }
	scanf("%d",&n);
	if(sum1%5==0)
	sum1/=5;
	else
	sum1=(sum1/5)+1;
	if(sum2%10==0)
	sum2/=10;
	else
	sum2=(sum2/10)+1;
	//
//	printf("%d %d ",sum1,sum2);
    res=sum1+sum2;
	if(res<=n)
	printf("YES\n");
	else
	printf("NO\n");
}
