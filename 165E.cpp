#include <bits/stdc++.h>
using namespace std;
int arr[1000009];
int dp[(1<<22)],tmp[1<<22];


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
	#endif

	int n;
	cin  >> n;


	
		for(int j=0;j<(1<<22);j++)
		{
			dp[j] = -1;
		}

	for(int i=0;i<n;i++) 
	{
		cin >> arr[i];
		dp[arr[i]] = arr[i];
	}


	for(int i=1;i<=22;i++)
	{
		int ind = i-1;
		for(int i=0;i<(1<<22);i++)
		{
			tmp[i] = dp[i];
		}
		for(int j=0;j<(1<<22);j++)
		{
			int bit = ((j>>ind)&1);
			int alter = j | (1<<ind);
			int alter2 = j ^ (1<<ind);
			
			if(bit==0)
			{
				dp[j] = max(dp[j],max(tmp[j],tmp[alter]));
			}
			else
				dp[j] = tmp[alter2];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout << dp[arr[i]] << " ";
	}

	return 0;
}
