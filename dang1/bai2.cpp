#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//khai bao double de thoa man bat ki so nao
    double x, f_x;

    // nhap gia tri x
    cout << "Nhap vao so thuc x: ";
    // ham cin de nhap du lieu
    cin >> x;
    
    	// neu lon hon hoac bang 1 thi tinh can bac 2
    if (x >= 1) {
        f_x = sqrt(2*x + 1);
    } else {
    	//con lai thi tinh cos
        f_x = x + cos(x);
    }

    // in ket qua
    cout << "Gia tri cua ham so f(" << x << ") la: " << f_x << endl;
	//return 0 la ket thuc truong trinh 
    return 0;
}
