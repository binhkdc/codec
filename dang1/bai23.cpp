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

	int total,s =0;	
    char str[20];
    double medium_total; 
    sprintf(str, "%d", n);
//	chuyen doi no thanh arr 
	for(int i = 0 ;i < strlen(str) ; i++){
//		chuyen char sang int
		int a = str[i] - '0';
//		tim ra so chan
		if(a%2 == 0){
//			neu la so chan thi total + 1
			total +=1;
			s += a;
		}
		
	}
//	tinh trung binh cong cua so chan
	medium_total = s / total;
//	ket qua
    cout << "trung binh cong cac chu so chan cua n la " << medium_total << endl;
    return 0;
}
