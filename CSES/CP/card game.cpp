
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
#include <numeric>
#include <iterator>

using namespace std;

#define mod 1e9+7
#define putyes cout<<"YES"<<endl
#define putno cout<<"NO"<<endl


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long  tc;
    cin>>tc;
    while(tc--){

        long long n;
        cin>>n;

        vector<long long > v(n,0);
        for(long long i =0; i < n; i++){
            cin>>v[i];
        }
        long long answer = 0;
        long long sm =0;

        for(long long i =n-1; i >=0; i--){

            if(i%2 == 0){
                answer = max(answer, sm+v[i]);
            }
            else{
                answer = max(answer, sm);
            }
            if(v[i]>0){
                sm+= v[i];
            }

        }

        cout <<answer<<endl;
       
    }


    return 0;
}


