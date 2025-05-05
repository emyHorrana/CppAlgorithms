#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno{
    int matricula;
    float nota1, nota2;
    float media;
};

int main(){
    
    Aluno aluno;
    
    cin>>aluno.matricula>>aluno.nota1>>aluno.nota2;
    
    aluno.media = ((aluno.nota1*2) + (aluno.nota2 *3))/5.0;
    cout<<fixed<<setprecision(2);
    cout<<"Matricula do aluno: "<<aluno.matricula<<endl;
    cout<<"Nota da primeira prova: "<<aluno.nota1<<endl;
    cout<<"Nota da segunda prova: "<<aluno.nota2<<endl;
    cout<<"Media: "<<aluno.media;
    
    return 0;
}