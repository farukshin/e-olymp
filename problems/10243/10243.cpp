//https://www.e-olymp.com/ru/problems/10243
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct Book
{
    int  book_id;
    string title;
    string author;
    string subject;
};

void solve()
{
    int n;
    cin >> n;
    map<int, Book> mp;
    for(int i = 0; i < n; i++)
    {
        Book b;
        string s;
        int id;
        cin >> id;
        b.book_id = id;
        getline(cin, s);
        getline(cin, s);
        b.title = s;
        getline(cin, s);
        b.author = s;
        getline(cin, s);
        b.subject = s;
        //cin>>b.book_id >> b.title >> b.author >> b.subject;
        mp[b.book_id] = b;
    }
    //cout<<"~\n";
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int cur;
        cin >> cur;
        if(!mp.count(cur))
            cout << "Book not found\n";
        else
            cout << mp[cur].title << " by " << mp[cur].author << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}