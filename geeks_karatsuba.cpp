#include<bits/stdc++.h>
using namespace std;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int number(string s)
{
    //cout<<s;
    int x=s.length()-1;
    int sum=0,deci=0;
    for(int i=x;i>=0;i--)
    {
        if(s[i]-'0'==1){
            sum=sum+pow(2,deci);
        }
        deci++;
    }
    return sum;
}
int main() 
{
OJ;
FIO;
 int i,j,t,a,n;
cin>>t;
 while(t--)
 {
     string s1,s2;
     cin>>s1>>s2;
     int x=number(s1);
     //cout<<x<<"num";
     int y=number(s2);
     cout<<x*y<<"\n";
     
 }
 
 
return 0;
   
}