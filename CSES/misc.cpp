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

int32_t breedcounting(){
     int n,q,k;cin>>n>>q;
    vector<vector<int>> a(3,vi (n+1,0));
    for(int i =1;i <=n;i++){
        cin>>k;
        a[0][i] = a[0][i-1];
        a[1][i] = a[1][i-1];
        a[2][i] = a[2][i-1];
        a[k-1][i] +=1;
    }
//    vout(a[0],n+1) cout endl;
//    vout(a[1],n+1) cout endl;
//    vout(a[2],n+1) cout endl;

    while(q--){
        int c,b;
        cin>>c>>b;
        cout a[0][b] - a[0][c-1] <<" " << a[1][b] - a[1][c-1]  <<" "<< a[2][b] - a[2][c-1] en
    }
    return 0;
}