#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, f_x;

    cout << "Nhap vao so thuc x: ";
    cin >> x;
    
    if (x < 1) {
        f_x = sqrt(2*pow(x,2) + 1);
    } else if(x == 1) {
        f_x = 4;
    } else{
    	f_x = 5*x + 2;
	}

    cout << "Gia tri cua ham so f(" << x << ") la: " << f_x << endl;
    return 0;
}
