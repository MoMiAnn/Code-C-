//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
#include <iostream>
using namespace std;

double tong_S(int n){
	double tong = 0;
	for(int i=0; i<=n; i++){
		tong+=1/(2*(double)i+1); 
	} 
	return tong; 
} 

int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Tong = " << tong_S(n) << endl; 
} 
