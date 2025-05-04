#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int largura, comprimento, raio1, raio2, cilindroMaior, diagonal;
    cin>>largura>>comprimento>>raio1>>raio2;
    
    diagonal = sqrt(largura*largura+comprimento*comprimento);
    if(raio1 > raio2){
        cilindroMaior = raio1;
    }else{
        cilindroMaior = raio2;
    }
    if((largura >= (raio1*2 + raio2*2) && comprimento >= cilindroMaior) 
    || (comprimento >=  (raio1*2 + raio2*2) && largura >= cilindroMaior || diagonal > (raio1*2 + raio2*2))){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    return 0;
}