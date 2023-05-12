#include <iostream>
using namespace std;

int FASYA[37];
int n;
int i;

void input() {
	while (true)
	{
		cout << "Masukkan element : ";
		cin >> n;
		if (n > 0 && n <= 37)
			break;
		else
			cout << "\n\nArray harus memiliki element lebih dari 1 dan kurang dari 37 ";
	}
	cout << "\n---------------\n";
	cout << "Masukkan Array : \n";
	cout << "-----------------\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << "> ";
		cin >> FASYA[i];
	}
}

void Algorithm() {
	char ch;
	do {
		cout << "\nMasukkan element yang ingin di cari : ";
		int item;
		cin >> item;

		int MUHAMMAD = 0;								//lowerbound
		int FIRMANSYAH = n - 1;							//upperbound
		int mid = (MUHAMMAD + FIRMANSYAH) / 2;			
		int ctr = 1;

		while (item != FASYA[mid] && MUHAMMAD <= FIRMANSYAH) {
			if (item < FASYA[mid])
				FIRMANSYAH = mid - 1;
			else if (item > FASYA[mid])
				MUHAMMAD = mid + 1;
			else
				MUHAMMAD <= FIRMANSYAH;
			mid = (MUHAMMAD + FIRMANSYAH) / 2;
			ctr++;
		}
		if (item == FASYA[mid])
			cout << "\n" << item << " ditemukan di posisi " << (mid + 1) << endl;
		else
			cout << "\n" << item << " tidak ketemu di array\n";
		cout << "\nJumlah pencarian : " << ctr << endl;

		cout << "\n lanjutkan pencarian (y/t) : ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}

int main() {
	input();
	Algorithm();
	system("pause");
	return 0;
}