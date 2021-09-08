//
//  main.cpp
//  string to int
//
//  Created by Amir on 9/7/21.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Enter an integer to input into a string: ";
    string num;
    cin >> num;
    int sum = 0;
    if (num[0] != '-') {
        for (int i = 0; i < num.length(); ++i) {
            sum += int(num[i]-'0') * pow(10, num.length()-i-1);
        }
        cout << "Converted to integer: " << sum << '\n';
    } else {
        string newNum = num;
        newNum.erase(0, 1);
        for (int i = 0; i < newNum.length(); ++i) {
            sum += int(newNum[i]-48) * pow(10, newNum.length()-i-1);
        }
        cout << "Converted to integer: " << -1 * sum << '\n';
    }
}
