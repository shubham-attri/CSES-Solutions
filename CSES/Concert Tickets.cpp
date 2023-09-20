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
#define vinp(a,n) for(int i=0;i<n;i++)cin>>a[i]
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

    int n,m,ticket,query;
    cin>>n>>m;

    multiset< int, greater<int>> tickets;

    while(n--){
        cin>>ticket;tickets.insert(ticket);
    }

    while(m--){
        cin>>query;
        auto it = tickets.lower_bound(query);
        if(it == tickets.end())
            cout - 1 en
        else{
            cout *it en
            tickets.erase(it);
        }
    }

    return 0;
}