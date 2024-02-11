
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
        for(int i =0;i< n;i++)cin>>a[i];

        for(int j = 0;j<n;j++){
        for(int i =1 ; i < n-1;i++){
            if(a[i-1] < a[i] && a[i] >a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        }

        if(is_sorted(a.begin(),a.end())) putyes;
        else putno;
    }


    return 0;
}


