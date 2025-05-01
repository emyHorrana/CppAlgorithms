#include <iostream>
#include <iomanip>
using namespace std;

struct Stormtrooper{
    int id;
    float indiceMaldade, forcaAbate, grauAptidao; //Entre 0 e 1
};

int main(){
    
    float maiorGa = -1;
    int idMaior = 0;
    Stormtrooper stormtrooper;
    cin>>stormtrooper.id;
    while(stormtrooper.id != 0){
        cin>>stormtrooper.indiceMaldade>>stormtrooper.forcaAbate;
        stormtrooper.grauAptidao = (stormtrooper.indiceMaldade + stormtrooper.forcaAbate)/2;
        if(stormtrooper.grauAptidao > maiorGa){
            idMaior = stormtrooper.id;
            maiorGa = stormtrooper.grauAptidao;
        }
        cin>>stormtrooper.id;
    }
    cout<<"Stormtrooper escolhido: "<<idMaior<<endl<<"GA = "<<maiorGa;
    return 0;
}