#include <iostream>
#include <iomanip>

using namespace std; 
int main(){ 
  int a,b,c,d;
  cin>>a>>b>>c>>d;

   // Check if all conditions are satisfied
  if(b > c && d > a && (c+d) > (a+b) && c >= 0 && d >= 0 && (a%2) == 0 ){
      cout<<"Accepted values"<<endl;
  }else{
      cout<<"Not accepted values"<<endl;
  }
  return 0;
}
