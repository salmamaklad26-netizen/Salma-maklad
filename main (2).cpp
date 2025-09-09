/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n <= 0 || m <= 0) break;

        int start, end, sum = 0;
        if (n < m) {
            start = n;
            end = m;
        } else {
            start = m;
            end = n;
        }

        for (int i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }
    return 0;
}