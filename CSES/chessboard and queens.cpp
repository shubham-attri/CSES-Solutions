//
// Created by Shubham Attri on 25/07/23.
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

char chess[8][8];
int c=0;
bool ld[15], rd[15], row[7];
void rec(int j){
	if (j==8) {c++; return;}
	fo(i,8){
		if (chess[i][j]=='.' && ld[i-j+7]==0 && rd[i+j]==0 && row[i]==0){
			ld[i-j+7]=1, rd[i+j]=1, row[i]=1;
			rec(j+1);
			ld[i-j+7]=0, rd[i+j]=0, row[i]=0;
		}
	}
}

int32_t main() {

    fo(i,8)fo(j,8)cin>>chess[i][j];

    rec(0);
    cout c en


    return 0;
}