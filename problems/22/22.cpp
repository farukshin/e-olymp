//https://www.e-olymp.com/ru/problems/22
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void eratosfen(int &n, vector<bool> &prime)
{
	prime.resize(n+1);
	fill(prime.begin(), prime.end(), true);
	
	prime[0] = prime[1] = false;
	for (int i=2; i<=n; ++i)
		if (prime[i])
			if (i * 1ll * i <= n)
				for (int j=i*i; j<=n; j+=i)
					prime[j] = false;
}

int rev(int n)
{
	int ans=0;
	while(n)
	{
		ans= ans *10 + (n%10);
		n /=10;
	}
	
	return ans;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
	int a,b;
	//cin>>a>>b;
	vector<bool> prime;
	int mx = 1e5;
	
	eratosfen(mx, prime);
	
	int ans=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
		if(prime[i] && prime[rev(i)])
			ans++;
			
	cout<< ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}