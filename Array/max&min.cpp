#include <iostream>
using namespace std;

int main(){
    
    int numFriends[1000];
    int users, i, max = -1, min = 9999;
    
    cin>>users;
    for(i = 0; i < users; i ++){
        cin>>numFriends[i];
        if(numFriends[i] > max){
            max = numFriends[i];
        }
        if(numFriends[i] < min){
            min = numFriends[i];
        }
    }
    cout<<"Menor numero de contatos: "<<min<<endl;
    cout<<"Maior numero de contatos: "<<max<<endl;
    
    return 0;
}