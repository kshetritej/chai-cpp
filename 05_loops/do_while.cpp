#include <iostream>
#include <string>
using namespace std;


int main () {
    string response;
    do{
        cout << "Do you want more tea? (yes/no) \n ";
        getline(cin, response);
        cout << "Here is your tea.\n";
    }while(response != "no" &&  response != "No" && response != "NO");

    cout << "Goodbye!";

    return 0;
}
