//
// Created by Shubham Attri on 11/09/23.
//
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


int32_t main() {

    int n;
    cin>>n;
    int k;
    cin>>k;
    vi a;
    fo(i,n){
        int m;
        cin>>m;
        a.pb(m);
    }
    sort(a);
    int ans = 0;
    int cs =0;
    for(auto x: a){
        if( cs + x <= k)
            cs+=x;
        else{
            cs = x;
            if(cs > k){
                continue;
            }
            ans++;
        }
    }

    cout ans +1 en
    return 0;
}