
#include <iostream>
using namespace std;

int main() {
    cout << "Introdu marimea sirului de numere: ";
    int N;
    cin >> N;

    int v[100];
    int i;
    for (i = 1; i <= N; i++)
        cin >> v[i];

    int j;
    for (i = 1; i <= N - 1; i++) {
        for (j = i + 1; j <= N; j++) {
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (i = 1; i <= N; i++)
        cout << v[i] << " ";
    return 0;

}