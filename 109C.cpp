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
#define MAX 100009
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


int cnt[MAX];
int in[MAX];
int out[MAX];

std::vector<pii> graph[MAX];
int n;

bool isLucky(int num)
{
	while(num)
	{
		int d = num%10;
		if(d!=4 and d!=7)
			return false;
		num/=10;
	}
	return true;
}

void cntdfs(int v,int p)
{
	cnt[v] = 1;

	for(pii u : graph[v])
	{
		if(u.F==p)
			continue;
		cntdfs(u.F,v);
		cnt[v]+=cnt[u.F];
	}
}

void indfs(int v,int p)
{
	for(pii u : graph[v])
	{
		if(u.F==p)
			continue;
		indfs(u.F,v);
		in[v] += isLucky(u.S)?cnt[u.F]:in[u.F];
	}
}

void outdfs(int v,int p)
{
	for(pii u : graph[v])
	{
		if(u.F==p)
			continue;
		out[u.F] += isLucky(u.S)?(cnt[1]-cnt[u.F]):(in[v]+out[v]-in[u.F]);
		outdfs(u.F,v);
	}
}

int32_t main() {
	fastIO
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		graph[a].pb({b,w});
		graph[b].pb({a,w});
	}

	cntdfs(1,-1);
	indfs(1,-1);
	outdfs(1,-1);

	int ans = 0;
	for(int i=1;i<=n;i++)
	{
		ans += in[i]*(in[i]-1) + out[i]*(out[i]-1) + 2*in[i]*out[i];
	}
	
	cout<<ans<<endl;
	
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
