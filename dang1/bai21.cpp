#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
	
	if(n <= 0){
    	cout << "so(" << n << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
	
//	10^4 = 10000
	if(n >= 10000){
    	cout << "so(" << n << ") so nguyen duong phai nho hon 10^4 " << endl;
    	return 0;
	};
//	tinh tong cac chu so cua n vd 1234 =  1+2+3+4

	int s =0;	
	
    char str[20];
    sprintf(str, "%d", n);
//	chuyen doi no thanh arr 
	for(int i = 0 ;i < strlen(str) ; i++){
//		chuyen char sang int
		int a = str[i] - '0';
//		tim ra so chan
		if(a%2 == 0){
			s += a;
		}

	}
	
//	ket qua
    cout << "tong cac chu so chan cua n la " << s << endl;
    return 0;
}
