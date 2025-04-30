#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){                                            
    double x1, y1, x2, y2, r1, r2, raioMaior, raioMenor, auxConta1, auxConta2, auxConta3, d, area; //d = distância entre os centros dos císculos
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    
    if(r1> r2){ //verificar o maior raio.
        raioMaior = r1;
        raioMenor = r2;
    }else{
        raioMaior = r2;
        raioMenor = r1;
    }
    //definindo a diatância entre os centros dos círculos.
    d = sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));
    if(d > r1 + r2 || d < raioMaior - raioMenor){  //Sem interseção;
        cout<<0;
        
    }else{
        auxConta1 = (raioMenor*raioMenor*acos((d*d + raioMenor*raioMenor - raioMaior*raioMaior)/(2*d*raioMenor)));
        auxConta2 =  (raioMaior*raioMaior*acos((d*d + raioMaior*raioMaior - raioMenor*raioMenor)/(2*d*raioMaior)));
        auxConta3 = (0.5*sqrt((- d+ raioMenor + raioMaior)*(d + raioMenor - raioMaior)*(d - raioMenor + raioMaior)*(d + raioMenor + raioMaior)));
        area = auxConta1 + auxConta2 - auxConta3;
        cout<<fixed<<setprecision(2)<< area;
    }

    return 0;
}