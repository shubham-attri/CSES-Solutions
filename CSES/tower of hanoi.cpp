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
#define fo(n) for(int i =0 ; i < n ; i++)
#define en <<endl;
#define cout cout<<
#define mod 1e9 +7



#ifndef INTERNPREP_TEMPLATE_H
#define INTERNPREP_TEMPLATE_H

#endif //INTERNPREP_TEMPLATE_H

void towerofhanoi(int n,int a,int b , int c){
    vector<pair<int,int>> v;
    if(n == 0){
        return;
    }
    towerofhanoi(n-1,a,c,b);
    cout a<< " "<< c en
    towerofhanoi(n-1,b,a,c);

}


int32_t main() {
    int n;
    cin>>n;
	cout pow(2,n)-1 en
    towerofhanoi(n,1,2,3);


    return 0;
}