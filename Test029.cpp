//more manipulators
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Default precision (6): " << 123.456789 <<endl;
    cout << "Fixed precision (2): " << fixed << setprecision(2)<<123.456789<<endl;
    cout << "Scientific precision (2): "<<scientific <<setprecision(4)<<123.456789<<endl;
    cout << "Hexadecimal: " <<hex<<255<<endl;
    cout << "Octal: " <<oct <<255<<endl;
    cout << "Decimal: " <<dec <<255<<endl;
    cout << "Width 10, filled with *: " <<setw(10)<< setfill('*')<<123<<endl;

    return 0;
}

