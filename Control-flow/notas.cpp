#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    float nota1 = -1;
    float nota2 = -1;
    float nota;
    float media = 0;
    int x = 0;
        
    while(x != 2){
        x = 0;
        while(nota1 == -1){
            cin>>nota;
            if(nota >= 0 && nota <=10){ //Verifica se nota está no intervalo desejado;
               nota1 = nota;
            }else{
                 cout<<"nota invalida"<<endl;
            }
        }
        while(nota2 == -1){
            cin>>nota;
            if(nota >= 0 && nota <=10){
                nota2 = nota;
            }else{
                cout<<"nota invalida"<<endl;
            }
        }
        media = (nota1 + nota2)/2;
        cout<<"media = "<<fixed<<setprecision(2)<<media<<endl;
        
        while(x != 1 && x != 2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>x;
        }
        nota1 = -1;
        nota2 = -1;
        media = 0;
    }
    return 0;
}