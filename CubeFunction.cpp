#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    cout << "Enter a number and the result will be cubed > ";
    cin >> x;

    if (x != 0) {
        int cubed = (x * x * x);
        cout << cubed << endl;
    }
   return 0;
}