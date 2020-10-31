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
 int i,j,t,a,n;
cin>>t;
 while(t--)
 {
     string s;
	    cin>>s;
        //cout<<s;
	    int k;
	    cin>>k;

	    int arr[26]={0};
	    for(int i=0;i<s.length();i++)
	    {
	        int index;

	        if(s[i]>='a'&&s[i]<='z')
	        {
	            index=s[i]-'a';
	            //cout<<index;
	            arr[index]=1;
	        }
	        if(s[i]>='A'&&s[i]<='Z')
	        {
	            index=s[i]-'A';
	            arr[index]=1;
	        }
	    }
	    int count=0;
	    for (int i=0;i<26;i++)
	    {
	        if(arr[i]==0)count++;
	    }
        cout<<count;
	    if(count<=k&&(s.length()>=26))cout<<"1";
	    else
	    cout<<"0";
	    cout<<"\n";
	
 }
 
 
return 0;
   
}
