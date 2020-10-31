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
 int i,j,t,n,s;
cin>>t;
 while(t--)
 {
     cin>>n>>s;
     int a[n];
     for(i=0;i<n;i++)
     {
        cin>>a[i];
     }
     int start=0,end=0,temp=0;
     while(end<n)
     {
         if(temp==s) break;
         else if(temp<s)temp=temp+a[end++];
         else if(temp>s)temp=temp-a[start++];
     }
       if(temp==s)cout<<start+1<<end<<"\n";
       else cout<<-1;
     
     
     
 }
 
 
return 0;
   
}