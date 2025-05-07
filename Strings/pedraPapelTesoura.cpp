#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t; //num de testes
    string jogadorA;
    string jogadorB;
    
    cin >> t;
    
    for(int i = 0; i < t; i ++){
        cin >> jogadorA;
        cin >> jogadorB;
    
        if(jogadorA == jogadorB){
            cout << "Empate" << endl;
        }else if(jogadorA == "pedra" && jogadorB == "tesoura" || jogadorA == "tesoura" &&
        jogadorB == "papel" || jogadorA == "papel" && jogadorB == "pedra"){
            cout << "Jogador A" << endl;
        }else{
            cout << "Jogador B" << endl;
        }
    }
    return 0;
}