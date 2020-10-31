#include<bits/stdc++.h>
using namespace std;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
OJ;
FIO
 int i,j,t,n;
cin>>t;
 while(t--)
 {
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int ans=-1,min_curr=a[0];
     for(int i=1;i<n;i++)
     {
         ans=max(ans,a[i]-min_curr);
         min_curr=min(min_curr,a[i]);
     }
     cout<<ans<<"\n";
 }
 
return 0;
   
}