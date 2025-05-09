#include <iostream>
using namespace std;

int main() {
    int hora0, horaF, d; // d = duaração
    
    cin >> hora0 >> horaF;
    
    if(hora0 == horaF){
        d = 24;
    }else if(hora0 < horaF){
        d = horaF - hora0;
    }else{
        hora0 = hora0 - 12;
        horaF = horaF + 12;
        d = horaF - hora0;
    }
    
    cout <<"O JOGO DUROU " << d <<" HORA(S)"<<endl;

    return 0;
}