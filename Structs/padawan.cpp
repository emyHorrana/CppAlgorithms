#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Padawan{
    int pontos;
    char nome[20];
};

int main(){
   
   Padawan padawan;
   int n;
   int soma = 0;
   char nomeGanhador[20];
   int pontosGanhador = 0;
   float media;
   
   cin>>n;
   
    for(int i = 0; i < n; i++){
        cin>>ws; //Limpar
        cin.getline(padawan.nome, 20);
        cin>>padawan.pontos;

        soma += padawan.pontos;
        if(padawan.pontos > pontosGanhador){
            strcpy(nomeGanhador, padawan.nome);
            pontosGanhador = padawan.pontos;
        }
    }
    media = (float)soma/n;
    cout<<"Padawan com mais pontos: "<<nomeGanhador<<endl<<"Pontos: "<<pontosGanhador<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Media da turma: "<<media<<" pontos"<<endl;
    
    return 0;
}