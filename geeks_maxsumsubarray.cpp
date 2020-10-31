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
int transitionPoint(int arr[], int n);

int main() {
    OJ;
    FIO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
 
 
return 0;
   
}
int transitionPoint(int arr[], int n) {
    // code here
     int l=0,h=n-1,mid;
while(l<=h){
mid=(l+h)/2;
if((arr[mid]==0) && (arr[mid+1]==1))
return mid+1;
else if((arr[mid]==1) && (arr[mid-1]==0))
return mid;
else if((arr[mid]==1) && (arr[mid-1]==1))
h=mid;
else
l=mid+1;
}
return -1;

}