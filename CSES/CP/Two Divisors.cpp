
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
        int a,b;
        cin>>a>>b;

        int lcmv = lcm(a,b);
        int hcfv = gcd(a,b);
        int div = b/a;
        
  
       if(b%a == 0)lcmv*=b/a;
       
      cout<<lcmv<<endl;




    }

    return 0;
}


