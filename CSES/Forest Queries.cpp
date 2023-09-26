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
#define see(i,a,b) for(int i =a ; i < b ; i++)
#define en <<endl;
#define cout cout<<
#define mod 1e9 +7
#define sort(a) sort(a.begin(),a.end())



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H


int32_t main() {
    int n;cin>>n;int q;cin>>q;
    vector<vector<int>> a(n,vi(n+1,0));

    see(i,1,n+1) see(j,1,n+1) {char s;cin>>s;a[i][j] = a[i-1][j] +a[i][j-1]- a[i-1][j-1];if(s == '*') a[i][j]++;}

    while(q--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        cout a[y-1][z-1] - a[w-1][x-1] en
    }

    return 0;
}