#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool snt = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0) {
                snt = false;
                break;
            }
        }
        if (snt) {
            cout << i << " ";
        }
    }

    return 0;
}