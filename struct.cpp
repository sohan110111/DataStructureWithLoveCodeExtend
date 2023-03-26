#include <iostream>
using namespace std;

int main(void) {

    /* cout << "Testing" <<endl; */
    struct myStruct {
        string name;
        int age;
        string countryName;
    };

    struct myStruct struct1, struct2;
    struct1.name = "Ali";
    struct1.age = 100;
    struct1.countryName = "Bangladesh";int a = 45;
    cout << struct1.name << endl << struct1.age << endl << struct1.countryName + "\nNewLine " << a << endl;


    return 0;
}