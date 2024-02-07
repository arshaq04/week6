#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    cout << "Enter a number and the result will be cubed > ";
    cin >> x;

    if (x != 0) {
        int times = (x * x * x);
        cout << times << endl;
    }
   return 0;
}