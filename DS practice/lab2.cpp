#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin>>s;

    int vowels = 0;
    for (char ch : s) {
        char c = tolower(ch);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            vowels++;
    }

    cout << "Number of vowels = " << vowels << endl;
    return 0;
} AMI PAGOL
