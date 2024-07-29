//Bai 79: Hay dem so luong chu so cua so nguyen duong n
#include <iostream>
using namespace std;

int so_ChuSo(int n){
	int dem = 0;
	if(n == 0) return 1; 
	while(n != 0){
		dem++; 
		n /= 10; 	 
	} 
	return dem; 
} 

int main(){
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if(n < 0){
		cout << "Vui long nhap so nguyen duong!\n"; 
	}
	else{
		cout << "So luong chu so cua so nguyen duong n: " << so_ChuSo(n) << endl; 
	} 
	return 0; 
} 
