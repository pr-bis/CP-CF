#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define INF 1e15
#define ll long long
#define ld long double
#define int ll
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

//////////////////////TEMPLATE ENDS///////////////////////////////////////////////////////////////////////
ll power(ll,ll);
ll mpower(ll,ll);
//////////////////////////////////////////////////////////////////////////////////////////////////////////

std::map<int, int> front,back;
int n;
set<int> s;
int a,b,mv;

int32_t main() {
	fastIO
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i = 0 ; i < n ; i++)
	{
		cin>>a>>b;
		front[a]++;
		if(a!=b)
			back[b]++;
		s.insert(a);
		s.insert(b);
	}

	int ans = INF;

	for(auto itr = s.begin(); itr != s.end() ; ++itr)
	{
		//cout<<*itr<<" "<<front[*itr]<<" "<<back[*itr]<<endl;
		mv = max(0LL,(n+1)/2 - front[*itr] );
		if(back[*itr]>=mv)
			ans = min(ans,mv);
	}

	
	if( ans == INF )
	ans = -1;
	
		
		
	cout<< ans << "\n";




	
	
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
