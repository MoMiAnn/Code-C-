//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include <iostream>
#include <math.h> 
using namespace std;

int tong_S(int n){
	int tong = 0;
	for(int i=1; i<=n; i++){
		tong+=pow(i, 2); 
	} 
	return tong; 
} 

int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Tong cua n so binh phuong: " << tong_S(n) << endl; 
} 
