
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int count =0;

        set<vector<int>>  seqset;
        for(int i =0;i< n;i++){
            
            for(int j = 0; j < n-i;i++){
                
                vector<int> temp ;
                temp.insert(a.begin()+i,a.begin()+i+ j);
                x.insert(temp);
                if(seqset.find(temp)==seqset.end()){
                    count++;
                }
                else{
                    count--;
                }
                
            }

        }
         
        cout<<count<<endl;



    }


    return 0;
}


