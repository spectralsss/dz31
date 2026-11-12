#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
void printTypeName(T value) {
    cout << typeid(value).name() << endl;
}

void printChar(int n) {
    char* c = reinterpret_cast<char*>(&n);
    cout << *c << endl;
}

int main() {
    printTypeName(10);
    printTypeName(3.14);

    printChar(65);

}