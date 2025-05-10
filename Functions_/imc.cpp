#include <iostream> 
#include <iomanip>
using namespace std;

float ideal(float h, char sexo){
    if(sexo == 'M'){
        return (72.7 * h -58);
    }else{
        return (62.1 * h - 44.7);
    }
}

int main(){
    char sexo;
    float h;
    cin >> h; 
    cin >> sexo;
    
    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << ideal(h,sexo) << " kg";

    return 0;
}