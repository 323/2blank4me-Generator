#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    string firstword;
    string secondword;
    string m_Or_A;
    int iterations;
    cout << "Enter the first word." << endl;
    cin >> firstword;
    cout << "Enter the second word." << endl;
    cin >> secondword;
    cout << "How many iterations would you like to generate?" << endl;
    cin >> iterations;
    cout << "Would you like to count by multiplication or addition?" << endl;
    cout << "(2spooky4me -> 3spooky5me = addition)" << endl;
    cout << "(2spooky4me -> 4spooky8me = multiplication)" << endl;
    cout << "Enter \"m\" for multiplication or \"a\" for addition" << endl;
    cin >> m_Or_A;
    if (m_Or_A == "a") {
        for(int i=0; i<iterations; i++) {
            cout << 2+i << firstword << 4+i << secondword << endl;
        }
    } else if (m_Or_A == "m") {
        for(int i=1; i<iterations; i++) {
            cout << 2*i << firstword << 4*i << secondword << endl;
        }
    } else {
        cout << "Incorrect Input. Closing..." << endl;
    }
    system("pause");
}
