
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

    int tc;
    cin>>tc;
    while(tc--){
    
    int n;cin>>n;int ans=0;int x,a=INT_MAX,b=INT_MAX;
		
    for(int i=1;i<=n;i++){
			cin>>x;
			if(b>=x)b=x;
			else if(a>=x)a=x;
			else b=a,a=x,ans++;
		}
		cout<<ans<<endl;
      
    }

    return 0;


}


