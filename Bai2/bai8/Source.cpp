
#include <iostream>
#include "math.h";
using namespace std;


int main()
{
	int giobatdau, gioketthuc;
	do {
		cout << "Nhap gio bat dau va gio ket thuc : ";
		cin >> giobatdau >> gioketthuc;
	} while ((8 <= giobatdau && giobatdau <= gioketthuc && gioketthuc <= 24) == false);

	int sogio = gioketthuc - giobatdau;
	if (sogio <= 3) {
		cout << "tien = " << 30000 * sogio;
	}
	else {
		if (sogio < 8) {
			cout << "tien = " << 30000 * 3 + 21000 * (sogio - 3);
		}
		else {
			cout << "tien = " << (90/100) *(30000 * 3 + 21000 * (sogio - 3));
		}
	}



	cout << "\nket thuc";
	system("pause");
}