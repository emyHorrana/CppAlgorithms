#include <iostream>

using namespace std;

int main(){
    int mat1[100][100];
    int mat2[100][100];
    int mat3[100][100];
    int i, j, n, m;
    
    cin >> n >> m;
    
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> mat1[i][j];    
        }   
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> mat2[i][j];
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j]; 
            cout << mat3[i][j] << " ";    
        } 
        cout << endl;
    }
    
    return 0;
}