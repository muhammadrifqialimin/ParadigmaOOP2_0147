#include <iostream>
using namespace std;

class AbstraksiKlas {
    private: string x, y;

public:

    //method unutk mengisi nilai
    //private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
};