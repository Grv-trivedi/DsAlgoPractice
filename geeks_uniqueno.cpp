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
//  solve(){
// }

int findunique(int b[],int n)
{
    int i;
    unordered_map<int ,int > mp;
    fo(i,n)
    {
        mp[b[i]]++;
    }
    for (auto itr :mp)
    {
        if(itr.second==1)
        {
            return (itr.first);
        }
    }
}
int main() 
{
OJ;
FIO
 int i,j,t,x,y,a,b,n,k,res;
 cin>>t;
 while(t--)
 {
     cin>>n>>k;
     int a[n];
     fo(i,n)
     {
         cin>>a[i];
     }
     res=findunique(a,n);
     cout<<res<<" ";
 }
 
 
 
return 0;
   
}