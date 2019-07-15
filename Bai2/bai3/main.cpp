
#include <iostream>
#include "math.h";
using namespace std;


struct Diem {
	float x;
	float y;
};

float dodai(Diem A, Diem B) {
	return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}

 



int main()
{
	Diem A, B, C;
	cout << "Nhap vao toa do diem thu nhat : ";
	cin >> A.x >> A.y;
	cout << endl << "Nhap vao toa do diem thu hai ";
	cin >> B.x >> B.y;
	cout << endl << "Nhap vao toa do diem thu ba ";
	cin >> C.x >> C.y; 
	

	cout << "\nTrong tam la (" << (A.x + B.x + C.x) / 3 << ";" << (A.y + B.y + C.y) / 3 << ")";

	float canhA = dodai(A, B), canhB = dodai(B, C), canhC = dodai(C, A);
	float nuachuvi = (canhA + canhB + canhC) / 2;
	cout << "chu vi : " << nuachuvi * 2;
	cout << "dien tich : " << sqrt(nuachuvi*(nuachuvi - canhA)* (nuachuvi - canhB)*(nuachuvi - canhC));

	system("pause");
}