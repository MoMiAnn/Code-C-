//Bai 21: Tinh tong tat ca cac "uoc so" cua so nguyen duong n
#include <iostream>
#include <math.h> 
using namespace std;

int tongUS(int n){
	int tong = 1;
	for(int i=1; i<=sqrt(n); i++){
		if(n % i == 0){
			tong*=i;
			if(i != n/i){
			    tong*=n/i; 
		    } 
		}  
	} 
	return tong; 
} 

int main(){
	int n;
	cout << "Nhap so nguyen duong n: "; cin >> n; 
	cout << "Tich tat ca cac \"uoc so\" cua so nguyen duong n: " << tongUS(n) << endl; 
} 
