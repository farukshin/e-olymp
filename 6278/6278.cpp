#include <iostream>
using namespace std;

int main(){         
    int a = 0, b=0;
    cin >> a >> b;
    if(a%2 == b%2)
        cout << '1' << endl;
    else
        cout << '0' << endl;    
    return 0;
}
