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
 int t,x,y,a,b,i;
 char ch;
 array<int,26> alpha;
 int max=0,count=0;
 //while(t--)
 //solve()
 fo(i,26)
 {
     cin>>alpha[i];
 }
 while(cin>>ch)
 {
     count++;
     x=int(ch)-97-1;
     if(max<alpha[x])
     {
         max=alpha[x];
     }

 }
 cout<<count*max;
 
 
return 0;
   
}