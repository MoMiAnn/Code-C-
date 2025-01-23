#include <iostream>

using namespace std;

bool isNamNhuan(int n) {
	return (n % 4 == 0 && n % 100 != 0) || n % 400 == 0;
} 

int main() {
	int n;
	cin >> n;
	
	cout << (isNamNhuan(n) ? "YES" : "NO") << endl;
	
	
	return 0; 
} 
