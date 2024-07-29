//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
#include <iostream>
using namespace std;

double tong_S(int n){
	double tong;
	for(int i=1; i<=n; i++){
		tong+=1/(2*(double)i);
	} 
	return tong; 
} 

int main(){
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Tong = " << tong_S(n) << endl; 
} 
