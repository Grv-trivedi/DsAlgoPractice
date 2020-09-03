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
    int l=n-1;
    int f=0;
    int mid;
    while(f<=l)
    {
        mid=(l+f)/2;
        cout<<mid<<"m";
        if(arr[mid]>arr[mid-1])
        return mid;
        else if(arr[mid+1]>arr[mid])
        return mid+1;
        else if((arr[mid-1]==1)&&(arr[mid]==1))
        l=mid-1;
        else
        f=mid+1;
    
        
    }
    cout<<"\n"<<mid;
    //if (arr[mid]==1)return 1;
    //else 
    return -1;
}