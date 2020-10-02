#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MODMUL(a,b) (((1LL)*(a)*(b))%MOD)
#define MODADD(a,b) (((a)+(b))%MOD)
#define MODSUB(a,b) ((MOD+(a)-(b))%MOD)
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
#define all(x) (x).begin(), (x).end()
#define endl "\n"

//////////////////////TEMPLATE ENDS///////////////////////////////////////////////////////////////////////
ll power(ll,ll);
ll mpower(ll,ll);
int BIT[MAX];
int query(int );
void update(int ,int);
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve()
{
	
}

int32_t main() {
	fastIO
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif

	int t = 1;

	//cin >> t;

	while(t--)
	{
		solve();
	}
	
	
	return 0;
}







/*_________________________________________________Utility Functions HERE_______________________________*/

void update(int x, int delta)
{
      for(; x < MAX; x += x&-x)
        BIT[x] += delta;
}
int query(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += BIT[x];
     return sum;
}

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
