#include<bits/stdc++.h>
using namespace std;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
OJ;
FIO;
 //int i,j,t,a,n;
// 
string str;
cin>>str;
//cout<<str;
for(int i=0;i<str.length();i++)
{
    if(str[i]==str[i+1])
    {
        //cout<<str[i]<<" ";
        str.erase(i,2);
        i=-1;
    }
}
if (str.length()==0)
cout<< "Empty String";
else cout<<str;
 
 
return 0;
   
}