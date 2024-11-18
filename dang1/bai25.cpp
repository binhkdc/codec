#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n,s =0 ;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
	
	if(n <= 0){
    	cout << "so(" << n << ") khong phai la nguyen duong " << endl;
    	return 0;
	};

	for(int i = 1 ;i <= n ; i++){
//		tim so le
		if(i%2 != 0){
			s += i;
		}
		
	}
//	ket qua
    cout << "tong cac so le tu 1 den n la: " << s << endl;
    return 0;
}
