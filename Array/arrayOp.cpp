
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x[100];
    int y[100];
    char op[100];
    float z[100];
    int i;
    int n; 
    
    cin>>n;
    
    for(i = 0; i < n; i++){
        cin>>x[i];
    }
    for(i = 0; i < n; i++){
        cin>>y[i];
    }
    for(i = 0; i < n; i++){
        cin>>op[i];
    }
    
    for(i = 0; i < n; i++){
        if(op[i] == '*') {
            z[i] = x[i]*y[i];
            cout<<fixed<<setprecision(0);
            cout<<x[i]<<" "<<op[i]<<" "<<y[i]<<" = "<<z[i]<<endl;
        }else if(op[i] == '-'){
             z[i] = x[i]-y[i];
             cout<<fixed<<setprecision(0);
             cout<<x[i]<<" "<<op[i]<<" "<<y[i]<<" = "<<z[i]<<endl;
        }else if(op[i] == '+'){
             z[i] = x[i]+y[i];
             cout<<fixed<<setprecision(0);
             cout<<x[i]<<" "<<op[i]<<" "<<y[i]<<" = "<<z[i]<<endl;
        }else{
             z[i] = (float)x[i]/y[i];
             cout<<fixed<<setprecision(2);
             cout<<x[i]<<" "<<op[i]<<" "<<y[i]<<" = "<<z[i]<<endl;
        }  
    }
    return 0;
}