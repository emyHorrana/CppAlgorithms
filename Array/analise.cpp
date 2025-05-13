#include <iostream>
using namespace std;

int main(){
    
    int matriz[100][100];
    int n, m, areaTotal, pixel, ferida = 0;
    
    cin >> n >> m;
    cin >> pixel;
    
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                ferida ++;
            }
        }
    }
    areaTotal = (pixel * pixel * ferida);
    
    cout << "AREA = " << areaTotal << " mm^2" << endl;

    return 0;
}