#include <iostream>;
#include <math.h>;

using namespace std;
int main() {
	int n;
	do {
		cout << "\nNhap n duong : ";
		cin >> n;
	} while (n < 0);
	if (n == 1)
	{
		cout << n << " khong phai la so nguyen to";

	}
	else {
		int dem = 0;
		for (int i = 2; i < n; i++) {
			if (n%i == 0) {
				dem += 1;
				break;
			}
		}
		if (dem == 0) {
			cout << n << " la so nguyen to";
		}
		else {
			cout << n << " khong phai la so nguyen to";
		}
	}

	system("pause");
}