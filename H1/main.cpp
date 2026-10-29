#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b) {
    int summa = a+b;
    cout << "Summa: " << summa <<endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakajaa ei voi olla nolla!";
    } else {
        double jako = static_cast<double>(a) / b;
        cout << "Jako: " << jako <<endl;
    }
}

int retSum(int a, int b){
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    } else{
        return static_cast<float>(a) / b;
    }

}

int main() {
    int a, b;
    cout << "Anna kokonaisluku a: ";
    cin >> a;
    cout << "Anna kokonaisluku b: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);


    int summa = retSum(a, b);
    cout << "Palautettu summa: " << summa << endl;

    float jako;

    try {
        jako = retDiv(a, b);
        cout << a << "/" << b << " = " << jako << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
