// 1.(A.jika elemen pertama lebih besar dari kedua maka mereka akan bertukar posisi.B.Proses ini akan terus diulang dari awal hingga akhir sampai arraynya sudah tersusun berurutan)
// 2.(pengurutan berdasarkan "mengurangi Jarak" untuk melakukan pertukaran elemen-elemen yang jauh,kemudian  secara bertahap mengurangi jarak tersebut hingga mencapai 1 akhirnya array berurutan0
// 3.(Insertion sort karena ketika membandingkan setiap elemen sebelumnya dan menyisipkan ke posisi yang tepat ketika data sudah terurut maka jumlah pertukaran yang diperlukan akan sangat sedikit sehingga membuatnya menjadi pilihan yang sangat efisien)
// 4.

#include <iostream>
using namespace std;

int fatan[34];
int n;

void input() {
	while (true) {
		cout << "masukkan banyaknya element array = ";
		cin >> n;
		if (n <= 34)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 34 elemen.\n";
		}
	}
	cout << endl;
	cout << "===========" << endl;
	cout << "Masukkan Nickname" << endl;
	cout << "===========" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke berapa-" << (i + 1) << ": ";
		cin >> fatan[i];
	}
}


void bublesSortArray() {
	int i, min_index, j, n;

	do {
		for (j = 0; j <= n - 2 ; j++) {
			if (fatan[j] < fatan[min_index]) {
				int temp;
				min_index = fatan[j];
				fatan[j] = fatan[n-1];
				fatan[j] = min_index;
			}
		}
		min_index = j;
	} while (min_index <= n - 1);
}

void display() {
	cout << endl;
	cout << "===========" << endl;
	cout << "element array yang telah disusun" << endl;
	cout << "===========" << endl;
	for (int j = 0; j < n; j++) {
		cout << "Jumlah Data Pass = " << n - 1 << endl;
		cout << endl;

	}
}

int main() {

	input();
	bublesSortArray();
	display();
	system("pause");

	return 0;
}

