#include <iostream>

using namespace std;

int main() {
    int resul;
    int n, termo1 = 0, termo2 = 1;
    cin >> n;
    
    for(int i = 0; i < n; i ++){
        cout << termo1 << " ";
        resul = termo1 + termo2;
        termo1 = termo2;
        termo2 = resul;
    }
    return 0;
}
