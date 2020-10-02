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
int n;
string ans[1001];
deque<string> q;
deque<string> q2;
pii arr[1001];
int32_t main() {
	fastIO
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif

	cin>>n;

	for(int i=1 ; i <= n ; ++i )
	{
		cin>>arr[i].F;
		arr[i].S=i;
		
	}

	sort(arr+1,arr+n+1);

	q.push_back("0");
	q.push_back("1");
	int rem = n;
	int curr=1;

	while(!q.empty() && rem>0)
	{
	//	cout<<curr<<endl;
		for(int i=1;i<=n;i++)
		{
			if(arr[i].F==curr)
			{
				if(q.empty())
				{
					cout<<"NO"<<endl;
					return 0;
				}
				ans[arr[i].S]=q.front();
			//	cout<<q.front()<<" "<<curr<<endl;
				q.pop_front();
				rem--;

			}
			if(arr[i].F>curr)
				break;
		}

		while(!q.empty() and q2.size()<rem)
		{
			string t = q.front();
			q2.push_back(t+"0");
			q2.push_back(t+"1");
			q.pop_front();
		}
		while(!q.empty())
		q.pop_back();
		while(!q2.empty())
		{
			q.push_back(q2.front());
			q2.pop_front();
		}
		curr++;
	}


	if(rem!=0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	//cout<<n<<endl;
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<endl;



	
	
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
