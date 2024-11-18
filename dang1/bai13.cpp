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
	    
	for(int i = 1 ;i <= n ; i++){	
//		ep sang kieu 1.0 de lay so thap phan
		s += 1.0/i;
	}
    cout << "tong cua day so tren la " << s << endl;
    return 0;
}
