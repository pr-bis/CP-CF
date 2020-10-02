/*
ABHIJEET BISWAS
CSE (2017-2021)
MNNIT ALLAHBAD
*/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define INF 1e15
#define ll long long
#define ld long double
#define pii pair<int,int>
#define pli pair<long long,int>
#define pll pair<long long,long long>
#define MAX 1000009
#define pb push_back
#define mp map<int,int>
#define F first
#define S second
#define popi __builtin_popcount
#define popll __builtin_popcountll
#define grp vector<int> graph[MAX];
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int ll
//////////////////////TEMPLATE ENDS///////////////////////////////////////////////////////////////////////
ll power(ll,ll);
ll mpower(ll,ll);
//////////////////////////////////////////////////////////////////////////////////////////////////////////


int32_t main() {
	fastIO
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif

	int q;
	cin>>q;
	while(q--)
	{
		int a,b,m;
		cin>>a>>b>>m;
		int lg = 0 ;
		int found=0;
		while((1LL<<lg)<=b)
		{
			int lag = b - (1LL<<lg);
			if((lg+1)*m<lag)
				continue;
			found =1;
			cout<<lg+2<<" "<<a;
			int curr =a;
			for(int i=0;i<=lg;i++)
			{
				
			}

		}
		if(found==0)
		{
			cout<<-1<<endl;
			continue;
		}
		cout<<lg+1<<" "<<a<<" " ;
		for(int i=1;i<=lg;i++)
		{
			cout<<(1LL<<lg)*(a+found)<<" ";
		}
	}


	
	
	return 0;
}







/*_________________________________________________Utility Functions HERE_______________________________*/

ll power(ll a,ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b%2==1)
		res=res*a;
		a=a*a;
		b=b/2;
	}
	return res;
}
ll mpower(ll a ,ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b%2==1)
		{
			res=(res*a)%MOD;
		}
		a=(a*a)%MOD;
		b=b/2;
	}
	return res;
}
