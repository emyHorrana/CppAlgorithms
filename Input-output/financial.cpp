#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    double initial_capital, interest_rate, amount, profit;
    int months;
    
    cin >> initial_capital >> interest_rate >> months;
    
    amount = initial_capital * pow(1 + interest_rate / 100, months);
    profit = amount - initial_capital;

    cout << "PROFIT = " << fixed << setprecision(2) << profit << endl;
    
    return 0;
}
