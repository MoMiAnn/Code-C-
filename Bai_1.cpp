//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
#include <iostream>
using namespace std;

int tong_S(int n){
	int tong = 0;
	for(int i=1; i < n; i++){
		tong+=i; 
	}
	return tong; 
} 

int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Tong cua n so tu nhien la: " << tong_S(n) << endl; 
} 
