#include <iostream>

using namespace std;

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    int factorial = 1;

    for (int i = 1; i < num; i++)
        factorial += factorial * i;
    
    cout << "The factorial of " << num << " is " << factorial << "." << endl;

    return 0;
}
