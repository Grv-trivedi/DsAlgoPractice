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
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//  solve(){
// }
int main() 
{
//OJ;
FIO;
 int i,j,t,x,y,b;
cin>>t;
 while(t--)
{
    int n;
    cin>>n;
    int a[n];
    int count=0;
    fo(i,n)
    {
        cin>>a[i];
    }
    i=0;
    int x=0;
    while(i<n)
    {
        if(a[i]>=0){x++;if(count<x)count=x;}
        else
        {
            x=0;
        }
        i++;
        
    }
    cout<<count<<"\n";

}
 
 
return 0;
   
}
