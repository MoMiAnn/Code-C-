//Bài 3: Tính S(n) = 1 + 1/2 + 1/3 + … + 1/n
#include <iostream>
using namespace std;

double tong_S(int n){
	double tong = 0;
	for(int i=1; i<=n; i++){
		tong+=1/(double)i; 
	}
	return tong; 
} 

int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Tong = " << tong_S(n) << endl; 
} 
