#include <iostream>
using namespace std;

int main(){
    int votos[1000];
    int quantidade, k = 0, j = 0;
    
    cin>>quantidade;
    for(int i = 0; i < quantidade; i++){
        cin>>votos[i];
        if(votos[i] == 1){
            j++;
        }else if(votos[i] == -1){
            k++;
        }
    }
    if( j == k){
        cout<<"Deu empate"<<endl;
    }else if(j > k ){
        cout<<"A maioria gostou"<<endl;
    }else{
        cout<<"A maioria nao gostou"<<endl;
    }
    return 0;
}

