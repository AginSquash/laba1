#include <iostream>
#include <string>

using namespace std;
int main() {
    double var;
    cout << "Введите число: " << endl;
    cin >> var;
    int full_part = int(var);
    double fraction_part = var - full_part;

    int SIZE_TO_CROP = 2;
    if (full_part < 0)
    {
        SIZE_TO_CROP = 3;
    }

    string new_fr_part = to_string(fraction_part).substr(SIZE_TO_CROP);

    int len = new_fr_part.length();
    while ( new_fr_part[len-1] == '0' ){
        len--;
        new_fr_part = new_fr_part.substr(0, len);
    }
    cout << "Целая часть: " ;
    cout << full_part << endl;
    cout << "Дробная часть часть: " ;
    cout << new_fr_part << endl;
    return 0;
}