#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    string p1,p2,p3; //Palavra 1, 2 e 3 respectivamente
    cin>>p1>>p2>>p3;
    
    if(p1 == "vertebrado"){
        if(p2 == "ave"){
            if(p3 == "carnivoro"){
                cout<<"aguia";
            }else{
                cout<<"pomba";
            }
        }else{
            if(p3 == "onivoro"){
                cout<<"homem";
            }else{
                cout<<"vaca";
            }
        }
    }else if(p2 == "inseto"){
        if(p3 == "hematofago"){
            cout<<"pulga";
        }else{
            cout<<"lagarta";
        }
    }else if(p3 == "hematofago"){
        cout<<"sanguessuga";
    }else{
        cout<<"minhoca";
    }

    return 0;
}