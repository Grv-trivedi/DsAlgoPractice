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
void solve(int k,int n,int ar[]){

     int count =0,i;
     fo(i,n)
     {
         if(ar[i]<=0) count++;
     }
     if(count<k)
        cout<<"YES";
    else
    {
        cout<<"NO";
    }
    cout<<endl;
    


}
int main() 
{
OJ;
FIO
 int t,x,y,a,b,n,k,i;
 cin>>t;
 while(t--)
 {

        cin>>n>>k;
        int ar[n];
        fo(i,n)
        {
            cin>>ar[i];
        }
        solve(k,n,ar);
        
 }
 
return 0;
   
}