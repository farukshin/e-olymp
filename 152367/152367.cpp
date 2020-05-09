#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ll N;
    ll i = 0, k = 0;
    cin >> N;
    do
    {
        k++;
        if(k%3 !=0 && k%5 != 0){
            i++;
        }
    } while (i != N);
    cout << k << endl;
    return 0;
}
