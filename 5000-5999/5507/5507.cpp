//https://www.e-olymp.com/ru/problems/5507
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

	vector<vector<string>> v;
	string s;
	int maxCountWorld =0;
	while(getline(cin, s))
    {
    	vector<string> curV;
    	bool push = false;
    	int countWorld =0;
    	string world = "";
    	for(auto ch : s)
    		if(ch==' ' && push == false)
    			continue;
    		else if(ch==' ' && push == true)
    			{
    				curV.push_back(world);
    				world ="", push = false;
    				countWorld++;
    			}
    		else if(ch!=' ')
    			world+=ch, push = true;
    			
    	if(world != "")
    		curV.push_back(world), countWorld++;
    	
    	if(maxCountWorld<countWorld)	
    		maxCountWorld = countWorld;
    		
    	v.push_back(curV);
    }
    
    vector<int> arr(maxCountWorld, 0);
    
    for(int i =0; i<v.size(); i++)
    	for(int j =0; j<v[i].size(); j++)
    		if(v[i][j].length() > arr[j])
    			arr[j] = v[i][j].length();
    
    for(int i =0; i<v.size(); i++)
    {
    	for(int j =0; j < v[i].size(); j++)
    		cout<< v[i][j] <<(j== v[i].size()-1 ? "": string(arr[j] - v[i][j].length() + 1, ' '));
    	cout<<endl;
	}
    
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