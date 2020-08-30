#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define Pb push_back
#define mp make_pair
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 void solve(int i, int j,int d){

     int n,count=0,r;
     for(int k =i;k<j+1;k++)
     {
         int n=k,temp=0;
         while(n!=0)
         {
             r=n%10;
             temp=temp*10+r;
             n=n/10;
         }
         //cout<<k-temp<<endl;
         if(abs(k-temp)%d==0)
         {count++;}
     }
     cout<<count;
}
int main() 
{
OJ;
FIO;
 int i,j,k;
 //while(t--)
 cin>>i>>j>>k;
 //cout<<i<<j;
 solve(i,j,k);
 
 
return 0;
   
}