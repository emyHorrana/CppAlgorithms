#include <iostream>
#include <cstring>
#include <algorithm> // para usar a fun sort(inicio, fim)
using namespace std;

int main(){
    string palavras[3];
    
    for(int i = 0; i < 3; i ++){
        cin >> palavras[i];
    }
    sort(palavras, palavras +3);
    
    for(int i = 0; i < 3; i++){
        cout << palavras[i]; 
         if(i < 2) { //Pois estava imprimindo um espaço a mais;
            cout << " ";
        } 
    }
    
    return 0;
}