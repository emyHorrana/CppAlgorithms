#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float media  = 0.0, soma = 0.0, n;
    float notas[50];
    int i, j = 0, k = 0;
    cin>>n;
    
    for(i = 0; i < n; i++){
        cin>>notas[i];
        soma += notas[i];
    }
    media = soma/n;
    for(i = 0; i < n; i++){
        if(notas[i] < media){
            j++; //quantidade de alunos abaixo da média
        }else{
            k++;//quantidade de alunos acima da média
        }
    }
    cout<<fixed<<setprecision(2);
    cout<<"Media da turma: "<<media<<endl;//saida de dados
    cout<<"Alunos com nota acima da media: "<<k<<endl;
    cout<<"Alunos com nota abaixo da media: "<<j<<endl;
    
    return 0;
}