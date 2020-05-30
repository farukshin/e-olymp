#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ll N, tekN;
    ll k = 0;
    cin >> N;
    tekN = N;
    do
    {
        k = tekN - (tekN / 5 + tekN / 3 - tekN / 15);
        if(k > N)
            tekN -= (k-N);
        if (k<N)
            tekN += (N-k);
    } while (k != N);
    cout << tekN << endl;
    return 0;
}
