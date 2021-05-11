#include<iostream> 
//#include<conio.h>
using namespace std;

int main()
{
	int arr[5], i;
	int *p = arr;
	cout << "Nhap 5 so:";
	cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
	cout << "Cac so ban vua nhap la:\n";
	//*p = arr[6];
	for (i = 0; i < 6; i++)
		cout << *(p+i) << endl;


	return 0;

}