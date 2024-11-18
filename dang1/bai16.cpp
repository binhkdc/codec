#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	double x,temp;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    
    cout << "Nhap vao so thuc x: "; 
    cin >> x;
	
	if(n <= 0){
    	cout << "so(" << n << ") khong phai la nguyen duong " << endl;
    	return 0;
	};
	
//	nho cho tong bang 1 truoc :))
	double s = 1;
	    
	for(int i = 1 ;i <= n ; i++){	
//		gan bien temp de tinh x^i
		temp = pow(-1,i)*pow(x,i);
		s += temp;
	}
    cout << "tong cua day so tren la " << s << endl;
    return 0;
}
