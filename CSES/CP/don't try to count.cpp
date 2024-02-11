
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

    int tc;cin>>tc;
    while(tc--){

        int n,m;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;

        while(x.size()< m+1 ) x+=x;

        cout<<x<<endl;

        bool found = false;
        int answer = -1;
        for(int i =0; i < x.size()-m;i++)
        {
            if(x.substr(i,i+m) == s){
                found = true;
                answer = (i+m+1)/n;
                break;
            } 
        }

        cout<<answer<<endl;



    }



    return 0;
}


