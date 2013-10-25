#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    string firstword;
    string secondword;
    cout << "Enter the first part (In the 2___4___ sequence, it would be after the 2)" << endl;
    cin >> firstword;
    cout << "Enter the second part (In the 2___4___ sequence, it would be after the 4)" << endl;
    cin >> secondword;
    for(int i=0; i<100; i++) {
        cout << 2+i << firstword << 4+i << secondword << endl;
    }
    system("pause");
}
