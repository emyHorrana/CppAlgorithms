#include <iostream>
using namespace std;

int main(){
    int num[100];
    int i = 0, j, x;
    bool aux = false;
    
    cin>>num[i];
    while(num[i] != 0){ //Adiciona i numeros no vetor
        i++;
        cin>>num[i];
    }
    
    cin>>x;
    
    for(j = 0; j < i; j++){
        if(num[j] == x){
            cout<<"Elemento "<<x<<" encontrado na posicao "<<j;
            aux = true;
            break;
        }
    }
    if(aux == false){
        cout<<"Elemento "<<x<<" nao foi encontrado"<<endl;
    }
    return 0;
}