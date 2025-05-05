#include <iostream>

using namespace std;

int main(){
    int matriz[3][3];
    int masc[3][3] = {
        {1, 1, 1},
        {0,1,0},
        {0,0,1}
    };
    bool aux;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j]; 
            if(masc[i][j] == matriz[i][j]){
                aux = true;              
            }else{
                aux = false;
            }
        }   
    }
    if(aux == true){
        cout << "MASCULINO";
    }else{
        cout << "FEMININO";
    }
    return 0;
}