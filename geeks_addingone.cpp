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
 int i,j,t,a,n;
cin>>t;
 while(t--)
 {
     int k;
     cin>>n>>k;
     int ar[n]={0};
     while(k--)
     {
         int y;
         cin>>y;
             for(j=y-1;j<n;j++)
             {
                 ar[j]=ar[j]+1;
             }
         
     }
     for(i=0;i<n;i++)
     {
         cout<<ar[i]<<" ";
     }
     cout<<"\n";
 }
 
 
return 0;
   
}