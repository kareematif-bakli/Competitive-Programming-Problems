#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,OO=0x3f3f3f3f;
char str[N]; 
int arr[27];
int main()
{
	int n;
	scanf("%d %s",&n,&str);
	if(n<26) 
	{
	  printf("NO\n");
	  return 0;	
	}
	for(int i=0;i<n;i++)
	{
	if(str[i]<97) str[i]=tolower(str[i]);
	arr[str[i]-'a']++;
    }
    bool ok=true;
    for(int i=0;i<26;i++)
    {
    	if(arr[i]==0) 
    	{
    		//printf("%d",i);
    		ok=false;
    		break;
		}
	}
	if(!ok) printf("NO\n");
	else
	printf("YES\n");
}

