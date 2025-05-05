#include <iostream>
#include <string>
#include <iomanip>
#include <string.h>
using namespace std;

int main(){
    int quantidade;
    string nome;
    float nota1, nota2, nota3, nota4, media;
    
    cin>>quantidade;
    while(quantidade != 0){
        cin.ignore();  // Limpa o buffer de entrada antes de usar getline
        getline(cin, nome);  // Lê o nome do aluno
        cin >> nota1 >> nota2 >> nota3 >> nota4; 

        media = (nota1 + (2 * nota2) + (3 * nota3) + (4 * nota4)) / 10.0;

        cout << nome << ": " << fixed << setprecision(2) << media << endl;
        
        quantidade--;
    }
    
    
    return 0;
}