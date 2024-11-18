#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, f_x;

    cout << "Nhap vao so thuc x: ";
    cin >> x;

	if(x>=2){
    	f_x = 2*x + cos(x);
	}else{
		f_x = 5*x + 1;
	}

    cout << "Gia tri cua ham so f(" << x << ") la: " << f_x << endl;
    return 0;
}
