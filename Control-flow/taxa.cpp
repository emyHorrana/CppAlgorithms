#include <iostream>
#include <iomanip>

using namespace std; 
int main(){ 
  float salario;
  cin>>salario;
  
  cout<<fixed<<setprecision(2);
  if(salario>= 0.00 && salario <= 2000.00){
      cout<<"Isento"<<endl;
  }else if(salario>2000.00 && salario <=3000.00){
      cout<<"R$ "<<(salario-2000.00)*0.08;
  }else if(salario>3000.00 && salario <= 4500.00){
      cout<<"R$ "<<80+(salario-3000.00)*0.18<<endl;
  }else if(salario > 4500.00){
      cout<< "R$ "<< (salario - 4500)*0.28 + 350.00<<endl;
  }
  
  return 0;
}
