#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

#define int long long
#define vch vector<char>
#define vi vector<int>
#define vst vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define si set<int>
#define mii map<int,int>
#define vinp(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define vout(a,n) for(int i=0;i<n;i++)cout a[i]<<" ";
#define fo(i,n) for(int i =0 ; i < n ; i++)
#define en <<endl;
#define cout cout<<
#define mod 1e9 +7
#define sort(a) sort(a.begin(),a.end())



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H


//int32_t main() {
//
//    int n,target;
//    cin>>n>>target;
//
//    mii m;
//    fo(i,n) {
//        int k;cin>>k;m[k]= i;
//    }
//    bool exist = false;
//    for(auto x:m){
//        if(m.count(target - x.first) && m[target-x.first] != x.second ){
//            if( x.second < m[target-x.first]) cout x.second +1 << " " << m[target - x.first]+1 en
//            else cout m[target - x.first]+1 <<" " << x.second +1  en
//            return 0;
//        }
//    }
//    if(!exist)
//        cout "IMPOSSIBLE" en
//
//    return 0;
//}

int32_t main() {
    int n,k;
    cin>>n>>k;
    vi a(n);
    vinp(a,n);
    mii m;
    fo(i,n){
        if(m.count(k-a[i])){
            cout i+1 <<" " << m[k-a[i]] en return 0;
        }
        m[a[i]] = i+1;
    }
    cout "IMPOSSIBLE" en
    return 0;
}