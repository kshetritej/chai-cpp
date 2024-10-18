#include <iostream>

using namespace std;


int totalChaiServed (int chai[], int size){
    int total = 0;
    for (int i = 0; i < size; i++){
        total += chai[i];
    }
    return total;
}


int main() {
   int chaiServed[7] = {2, 4, 8, 16, 32, 64, 128};

    cout << "Chai served on day 1: " << chaiServed[0] << endl;
    cout << "Chai served on day 7: " << chaiServed[6] << endl;

    int total = totalChaiServed(chaiServed, 7);

    cout << "Total Chai Served: " << total  << endl;
    return 0;
}
