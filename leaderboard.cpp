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
 const int mod = 1'000'000'007;
const int N = 3e5, M = N;
 //solve(){
//}
int main() 
{
    OJ;
    FIO;
//  int t;
//  while(t--)
//  solve()
    int n,m,i,x,y;
    stack<long>scores;
    cin>>n;
    fo(i,n)
    {
        cin>>x;
        if(scores.empty()||scores.top()!=x)scores.push(x);
    }
    cin>>m;
    //cout<<"hello";
    fo(i,m)
    {
        cin>>y;
        while(!scores.empty()&&scores.top()<=y)scores.pop();
        cout<<scores.size()+1<<endl;
    }
    
return 0;
   
}