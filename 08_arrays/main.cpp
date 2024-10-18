#include <iostream>
using namespace std;

int main () {
    int chaiTemps[5] = {12, 23, 12, 23, 43};

    // for(int chai : chaiTemps){ cout << "Temp: " <<  chai << endl; }

    for(int i=0; i < 6; i++) {
        cout << "Temp " << i << ": " << chaiTemps[i] << endl;
    }

    cout << "hello " << endl;
    return 0;
}
