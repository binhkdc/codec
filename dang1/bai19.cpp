#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
	
	if(n <= 0){
    	cout << "so(" << n << ") khong phai la nguyen duong " << endl;
    	return 0;
	};

	double temp,s = 1;

	for(int i = 1 ;i <= n ; i++){
		temp = i*2;
		s += 1.0 / temp;
	}
//	ket qua
    cout << "tong cua day so tren la " <<s << endl;
    return 0;
}
