#include <iostream>
using namespace std;

void bubleSort(int sir[], int marime) {
	for (int i = 0; i < marime; i++) {
		for (int j = 0; j < marime - 1; j++) {
			if (sir[j] > sir[j + 1]) {
				int temp = sir[j];
				sir[j] = sir[j + 1];
				sir[j + 1] = temp;
			}
		}
	}
}

int main() {
	int sir[12] = { 4, 6, 24, 16, 98, 144, 1, 9, 26, 72, 8, 21 };
	bubleSort(sir, 12);
	for (int i = 0; i < 12; i++) {
		cout << sir[i] << " ";
	}
	return 0;

}