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
//	tong cung bat dau =2 nhe
	double s = 2;
	int fac;
	    
//	cau hoi bat dau tu 2! nen vong lap se bat dau tu 2
	for(int i = 2 ;i <= n ; i++){
//		su dung them 1 vong lap de tinh giai thua
		fac = 1;
        for (int j = 2; j <= i; j++) {
            fac *= j;
        }
		s += 2.0 / fac;
	}
//	ket qua
    cout << "tong cua day so tren la " <<s << endl;
    return 0;
}
