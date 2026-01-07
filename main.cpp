#include <iostream>
using namespace std;

void riempivettore(int v[], int w[], int n) {
    int i;
    int q[n];

    i = 0;
    while (i < n) {
        if (q[i] % 2 == 0) {
            v = q[i];
        } else {
            w = q[i];
        }
        i = i + 1;
    }
}

int main() {

    int n, i;

    cout << "Quanti numeri?" << endl;
    cin >> n;
    int q[n];

    i = 0;
    while (i < n) {
        q[i] = rand() % (n * 10);
        i = i + 1;
    }
    riempivettore();
    return 0;
}








