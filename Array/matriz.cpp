#include <iostream>
using namespace std;

int main(){
    int matriz [10][10];
    int n, m;
    
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];    
        }   
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matriz[i][j] << " ";    
        } 
        cout << endl;
    }
    
    return 0;
}