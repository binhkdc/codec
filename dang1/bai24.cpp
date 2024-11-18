#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int a,b;
    cout << "Nhap vao so nguyen duong a: ";
    cin >> a;
    
	cout << "Nhap vao so nguyen duong b: ";
    cin >> b;
	
	if(a <= 0 && b <= 0){
    	cout << "so(" << a << "," << b << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
		
	if(a <= 0){
    	cout << "so(" << a << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
	
	if(b <= 0){
    	cout << "so(" << b << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
	
//	UCLN la gi? la so lon nhat 2 so do co the chia het


	while(b!=0){
		int temp = a % b;
//		phep chia lay so du
        a = b;
        b = temp;
//      gan a=b va b = so du o tren
//		lap lai cho toi khi b = 0 chung to a la ucln
	}
	

	
//	ket qua
    cout << "UCLN cua 2 so a và b la " << a << endl;
    return 0;
}

