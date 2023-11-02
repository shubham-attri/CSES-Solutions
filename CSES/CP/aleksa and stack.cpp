
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
        
        vector<int> a;

        a.push_back(3);
        a.push_back(4);
        a.push_back(5);

        for(int i =3;i < n;i++){
            int k = a[i-1]+1;
            int presum = a[i-1]+a[i-2];
            // cout <<"k "<< k << " " << presum << " "<< 3*k%presum  << endl;
            while(3*k%presum == 0){
                // cout <<"k "<< k << " " << presum << " "<< k%presum  << endl;
                k++;
            }
            a.push_back(k);

        }
        
        for(auto x: a) cout<<x<<" ";
        cout<<endl;


    }


    return 0;
}


