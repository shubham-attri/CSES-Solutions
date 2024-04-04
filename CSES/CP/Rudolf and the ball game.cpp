
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

    int t;
    cin >> t;
    while (t--) {
      
    int n,m,x,d; set <int> s,s1; char c;
		cin>>n>>m>>x; s.clear(); s1.clear();
		s.insert(x);
		while (m--)
		{
			cin>>d>>c;
			if (c!='1')
				for (int it:s)
					s1.insert((it+d-1)%n+1);
			if (c!='0')
				for (int it:s)
					s1.insert((it+n-d-1)%n+1);
			s=s1; s1.clear();
		}
		cout<<s.size()<<'\n';
		for (int it:s) cout<<it<<' '; cout<<'\n';



    }
    


    return 0;
}


