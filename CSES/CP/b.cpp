

// FILE Created By Shubham Attri

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <queue>
#include <cstdio>
#include <iomanip>

using namespace std;

#define mod 1e9+7
#define putyes cout<<"YES"<<endl
#define putno cout<<"NO"<<endl


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i =0; i < n;i++){
            cin>>a[i];
        }

        if(a[0] == 1){
            b[0] =2;
        }
        else{
            b[0] =1;
        }
        
        for(int i =1;i < n;i++){
            if(a[i] == b[i-1] + 1 ){
                b[i] = b[i-1] + 2;
            }
            else{
                b[i] = b[i-1] + 1;
            }
        }

        cout << b[n-1] << endl;

    }


    return 0;
}


