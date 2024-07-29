//Bai 25: Tinh tong tat ca cac "uoc so chan” cua so nguyen duong n
#include <iostream>
#include <vector>
using namespace std;

int tong_UocSo_Chan(int n){
	int tong = 0; 
	for(int i=1; i<=n; i++){
		if(n % i == 0 && i % 2 == 0){
			tong += i; 
		} 
	} 
	return tong; 
} 

int main(){
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n; 
	cout << "Tong tat ca cac \"uoc so chan\" cua so nguyen duong n: " << tong_UocSo_Chan(n) << endl; 
	return 0; 	 
} 
