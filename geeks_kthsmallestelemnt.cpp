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
int main() 
{
OJ;
FIO
 int i,j,t,x,y,n,b,k;

cin>>t;
 while(t--)
//  solve()
{
cin>>n;
ll a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
cin>>k;
cout<<a[k-1]<<endl;

}
 
 
return 0;
   
}