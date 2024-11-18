#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
    double s = 0;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
	
	if(n <= 0){
    	cout << "so(" << n << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
	
	for(int i = 1 ;i <= n ; i++){

		s += pow(i,2);
	}

    cout << "tong cua day so tren la " <<s << endl;
    return 0;
}
