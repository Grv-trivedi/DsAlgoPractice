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
int t;
cin>>t;
 while(t--)
 {
     int i,j,n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int low=0,mid=0,end=n-1;
     while(mid<=end)
     {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            mid++;
            low++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[end]);
            end--;
            //mid++;
        }
     
     }
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<"\n";

 }
 
 
return 0;
   
}