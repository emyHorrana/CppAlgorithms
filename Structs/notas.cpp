#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    struct{
        int matricula;   
        float nota1;
        float nota2;
    }aluno;
    
    cin>>aluno.matricula>>aluno.nota1>>aluno.nota2;
    cout<<fixed<<setprecision(2);
    cout<<"Matricula do aluno: "<<aluno.matricula<<endl;
    cout<<"Nota da primeira prova: "<<aluno.nota1<<endl;
    cout<<"Nota da segunda prova: "<<aluno.nota2<<endl;
    
    return 0;
}