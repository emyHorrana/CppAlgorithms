#include <iostream>
using namespace std;

int main(){
    
    int n, i, j, maior = 0;
    int ciclo, inicio, fim;
    
    cin >> i >> j;
    n = i;
    
    if (i < j) {
        inicio = i;
        fim = j;
    } else {
        inicio = j;
        fim = i;
    }
    
    for(int k = inicio; k <= fim; k++){
        ciclo = 1;
        n = k;
        while(n != 1){
            if(n % 2 == 0){
                n = n/2;
            }else{
                n = n * 3 + 1;
            }
            ciclo ++;
        }
        if(ciclo > maior){
            maior = ciclo;
        }
    }
        
    cout << i <<" " << j << " " << maior << endl; 
    
    return 0;
}