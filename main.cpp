#include <iostream>
#include <string>

using namespace std;
int main() {
    string var;
    cout << "Введите число: ";
    cin >> var;

    int index = var.find(".");

    int full_part =  stoi( var.substr(0, index) );
    int fractional_part = 0;
    
    if (index != string::npos)
    {
        fractional_part = stoi( var.substr(index + 1) );
    }

    cout << "Целая часть: " << full_part << endl;
    cout << "Дробная часть: " << fractional_part << endl;

    return 0;
}