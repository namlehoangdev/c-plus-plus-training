
#include <iostream>
#include "math.h";
using namespace std;


struct Diem {
	float x;
	float y;
};

int main()
{
	Diem A, B;
	cout << "Nhap vao toa do diem thu nhat : ";
	cin >> A.x >> A.y;
	cout << endl << "Nhap vao toa do diem thu hai ";
	cin >> B.x >> B.y;

	cout << "Trung diem la (" << (A.x + B.x) / 2 << ";" << (A.y + B.y) / 2 << ")";

	cout << "\nDo dai la : " << sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));

	system("pause");
}