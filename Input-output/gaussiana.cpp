/*🧩 Problem: Gaussian Distribution

The Gaussian distribution is one of the most important distributions, as it models several 
physical phenomena of interest, such as channel noise, error estimation, and more.

It has two parameters:
- The mean (m)
- The standard deviation (s)

The Gaussian distribution can be calculated using the formula:
f(x) = (1 / √(2π * s²)) * e^(-(x - m)² / (2 * s²))

📤 Output:
The program should output the value of f(x) based on the provided formula.

*/
#include <iostream>
#include <iomanip>
#include <cmath>                                            
using namespace std; 
int main(){ 
    double x, m, s, base, expo, f_x; 
    const float pi = 3.14159;
    
    cin>>x>>m>>s;
    base = 1/sqrt(2*pi*(s*s));
    expo = -((x-m)*(x-m))/(2*s*s);
    f_x =  base * exp(expo);
    cout<<fixed<<setprecision(4)<<f_x<<endl;
    
    return 0;
}