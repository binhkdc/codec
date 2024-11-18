#include <iostream>
#include <cmath>
using namespace std;

int main() {
//	dung int tranh nguoi dung nhap so thap phan khien cho vong lap bi loi
	int n;
	//	khoi tao tong
    double s = 0;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
	
//	so nguyen duong la so 1,2,3,4,5... khong bao gom so 0
	if(n <= 0){
    	cout << "so(" << n << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
	
//	vong lap

	for(int i = 1 ;i <= n ; i++){
//		thay vi s = s + ... thi ta co phuong thuc gan +=
		s += pow(-1,i+1)*(2*i-1);
	}

    cout << "tong cua day so tren la " <<s << endl;
    return 0;
}
