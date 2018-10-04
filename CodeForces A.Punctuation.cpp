#include<bits/stdc++.h>
using namespace std;
//You Can Do It
const int N=1e5+5,OO=0x3f3f3f3f;
int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++)
       {
            if(str[i]==' ' && str[i+1]==' ')
            {
            	str.erase(str.begin()+i);
            	i--;
			}
			 if(str[i]==',' || str[i]=='!'|| str[i]=='?' || str[i]=='.')
			 {
			 if(str[i+1]!=' ' && i<str.size()-1)
			 	{
			 	 string a=" ";	
				 str.insert(i+1,a);
		        } 
			 	if(str[i-1]==' ')
			   str.erase(str.begin()+(i-1));
			   // i++;
			  }
		}
	   cout<<str<<endl;	
}

