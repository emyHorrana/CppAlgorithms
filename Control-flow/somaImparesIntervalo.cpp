#include <iostream>
using namespace std;

int main() {
    int x, y, aux;
    int soma = 0;
    
    cin >> x >> y;
    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }
    
    for(int i = x + 1; i < y; i ++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    cout << soma << endl;
    
    return 0;
}
