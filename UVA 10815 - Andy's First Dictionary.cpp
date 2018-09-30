
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,OO=0x3f3f3f3f;
void fast(){
	std::ios_base::sync_with_stdio(0); cin.tie(NULL);}
int main()
{
  string s;
  set<string> ss;
  while( cin>> s )
  {
  	  string x;
  	  int si=s.size();
     for(int i=0;i<si;i++)
     {
     	s[i]=tolower(s[i]);
     	if(s[i]>='a' && s[i]<='z') x+=s[i];
     	else
     	if(i!=0 && i!=si-1)
		 {
     		ss.insert(x);
     		x="";
		 }
	 }
	 ss.insert(x);
   }
	 set<string>::iterator it;
	 
	 for( it=ss.begin();it!=ss.end();it++)
	 cout<<*it<<endl;
}
