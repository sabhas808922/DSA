#include <iostream>
using namespace std;

int main(){
    int char;

    cout << "program to check if the char is uppercase or lowercase\n" <<"enter a character of english alphabet";
    
    cin >> char;
    if (char >= 'A' && char <= 'Z'){
        cout << "the character is uppercase\n";
    }elseif(char >= 'a' && char <= 'z'){
        cout << "the character is lower case";
    }
        
}
