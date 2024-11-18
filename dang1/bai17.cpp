#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double n;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
	
	if(n <= 0){
    	cout << "so(" << n << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
	    double s = 0;
	    int fac = 1;
	    
//	tinh giai thua cua 5 tuong tu nhu 1*2*3*4*5 = 120
	for(int i = 1 ;i <= n ; i++){
//		tinh giai thua cua i theo cach tinh tren
		fac *= i;	
//		sau khi tinh xong giai thua thi cong vao tong
		s += 1.0 / fac;
	}
//	ket qua
    cout << "tong cua day so tren la " <<s << endl;
    return 0;
}
