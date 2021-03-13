#include<iostream>
#include<string>
using namespace std;

class nhanvien {
private:
	string hoten;
	int sonamcongtac;
	string chucvu;
public:
	void set() {
		cout << "\nNhap ho ten ";
		getline(cin, this->hoten);
		cout << "\nChucvu ";
		getline(cin, this->chucvu);
		do {
			cout << "\nNhapsonamcongtac ";
			cin >> this->sonamcongtac;
			if (sonamcongtac < 0) {
				cout << "Nhap lai";
			}
		} while (sonamcongtac<0);

	}
	void get() {
		cout << "\n\nHo ten: " << this->hoten << endl;
		cout << "\n\nSonamcongtac: " << this->sonamcongtac << endl;
		cout << "\n\nChucvu: " << this->chucvu<<endl;
	}
	void tinh() {
		float hesocv;
		double hsct = sonamcongtac / 3;
		cout << "\n\t\t\tHe so chuc vu \n";
		cout << "\tNhanvien =1\nPhophong=1.2\nTruongphong=1.5\nPhogiamdoc=1.8\nGiamdoc=2\n";
		cout << "Nhap he so chuc vu: ";
		cin >> hesocv;
		cout << "\nHe so cong tac\n :"<<hsct;
		cout << "He so = " << hsct * hesocv;
		

	}
};
int main() {
	nhanvien obj;
	obj.set();
	obj.get();
	obj.tinh();
}
