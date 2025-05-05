/* A seguinte cifra não é a de César, mas o que os criptógrafos chamam de "cifra de transposição colunar" ou "Caixa de César", apesar de ser incerto se o código foi de fato usado por César.

Nela, a mensagem a ser criptografada é escrita em uma matriz por colunas, e depois é lida por linhas. Assim, para codificar a mensagem "To de boa na lagoa", podemos usar uma matriz 3x5, e inserir a mensagem desta forma:


T	E	A	L	O
O	B	N	A	A
D	O	A	G	X

 e a mensagem criptografada ficaria assim: "TEALOOBNAADOAGX".

Para decriptografar a mensagem é só inserir a mensagem por linhas na matriz, e mostrar a matriz por colunas.

*/
#include <iostream>

using namespace std;

int main(){
    char matriz[100][100];
    int i , j, n, m;
    cin >> n >> m;
    
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> matriz[i][j];    
        }   
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << matriz[j][i];
        }
    }
    return 0;
}