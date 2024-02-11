
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

        int n,m;
        cin>>n>>m;

        vector<int> a(n),b(m);
        for(int i =0;i<n;i++)cin>>a[i];
        for(int i =0;i<m;i++)cin>>b[i];
        
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());

        int ap = 0;
        int bp = 0;

        vector<int> answer;

        while(ap < n && bp < m){

            if(a[ap] < b[bp] )answer.push_back(b[bp]),bp++;
            else answer.push_back(a[ap]),ap++;

        }
        while(bp<m) answer.push_back(b[bp]),bp++;
        while(ap<n) answer.push_back(a[ap]),ap++;

        for(auto x: answer) cout<<x<<" ";     
        cout<<endl;   

    }

    return 0;
}


