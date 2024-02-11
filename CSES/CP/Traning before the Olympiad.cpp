
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
      int n;
      cin>>n;
     
      vector<int> a(n);
      for(int i =0;i<n;i++)cin>>a[i];

      int sum=0;
      int odd = 0;
      int even =0;

      for(int i =0;i<n;i++){
        sum+=a[i];
        odd += (a[i]%2==1);
       
        if(i ==0) cout<< sum<<" ";
        else cout<< sum - odd/3  - (odd%3 == 1) <<" ";
      }
      cout<<endl;


    }

    return 0;
}


