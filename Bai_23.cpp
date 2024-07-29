//Bai 23: Dem so luong "uoc so" cua so nguyen duong n
#include <iostream>
#include <math.h> 
using namespace std;

int soUS(int n){
	int dem = 0;
	for(int i=1; i<=sqrt(n); i++){
		if(n % i == 0){
			dem++;
			if(i != n/i){
			    dem++; 
		    } 
		}  
	} 
	return dem; 
} 

int main(){
	int n;
	cout << "Nhap so nguyen duong n: "; cin >> n; 
	cout << "So luong \"uoc so\" cua so nguyen duong n " << soUS(n) << endl; 
} 
