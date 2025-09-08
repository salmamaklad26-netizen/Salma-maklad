/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    cout << "floor " << A << " / " << B << " = " << floor(A / B) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(A / B) << endl;
    cout << "round " << A << " / " << B << " = " << round(A / B) << endl;

    return 0;
}