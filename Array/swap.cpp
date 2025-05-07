#include <iostream>
#include <algorithm>    // Para usar swap -> swap(a, b);
                        // a = 5; b = 10; -> swap(a, b) -> a = 10; b = 5;
using namespace std;

int main(){
    float tempos[100];
    int indices[100];
    int n = 0; 
    
    cin>>tempos[n];
    while(tempos[n] != -1){
        indices[n] = n;
        n++;
        cin>>tempos[n];
        
    }
    // Ordena os tempos e mantém os índices em sincronia
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(tempos[j] < tempos[i]) {
                swap(tempos[i], tempos[j]);
                swap(indices[i], indices[j]);
            }
        }
    }
    cout<< "Classificacao:" <<endl;
    for(int i = 0; i < n; i ++){
        cout<<indices[i]<<endl;
    }
    
    return 0;
}