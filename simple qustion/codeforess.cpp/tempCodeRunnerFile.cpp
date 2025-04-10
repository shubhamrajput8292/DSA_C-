#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int count = 0; 

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        int sure = 0; 

        if (petya == 1) {
            sure++;
        }
        if (vasya == 1) {
            sure++;
        }
        if (tonya == 1) {
            sure++;
        }

        
        if (sure >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}