//Bai 26: Tinh tich tat ca cac "uoc so le" cua so nguyen duong n
#include <iostream>
#include <vector>
using namespace std;

int tich_UocSo_Le(int n){
	int tich = 1; 
	for(int i=1; i<=n; i++){
		if(n % i == 0 && i % 2 != 0){
			tich *= i; 
		} 
	} 
	return tich; 
} 

int main(){
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n; 
	cout << "Tich tat ca cac \"uoc so le\" cua so nguyen duong n: " << tich_UocSo_Le(n) << endl; 
	return 0; 	 
} 
