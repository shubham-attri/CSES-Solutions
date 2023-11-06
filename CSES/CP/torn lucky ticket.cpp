
//" FILE Created By Shubham Attri"

#include <bits/stdc++.h>

using namespace std;

#define mod 1e9+7
#define putyes cout<<"YES"<<endl
#define putno cout<<"NO"<<endl
#define int long long 


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
	cin>>n;
	vector<string> a(n);
	vector<int> sum(n);
	map<pair<int, int>, int> mpp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		int len=a[i].length();
		int ssum=0;
		for(int j=0;j<len;j++)
		{
			ssum+=a[i][j]-'0';
		}
		for(int j=0;j<len;j++)
		{
			sum[i]+=a[i][j]-'0';
			mpp[{sum[i]*2-ssum,2*(j+1)-len}]++;
		}
	}
     int ans=0;
	for(int i=0;i<n;i++)
	{
	    int len=a[i].length();
		ans+=mpp[{sum[i],len}]+mpp[{-sum[i],-len}];
	}
	cout<<ans<<endl;



    return 0;
}


