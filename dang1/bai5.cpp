#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, f_x;
//    khai bao so e
    double e = M_E;

    cout << "Nhap vao so thuc x: ";
    cin >> x;
    
    if (x <= 1) {
        f_x = 2*pow(x,2) + 3;
    }
	
	if(1 < x < 2) {
        f_x = 2*cos(x) - pow(e,x);
    } 
	
	if(x>=2){
    	f_x = 5*x + 1;
	}

    cout << "Gia tri cua ham so f(" << x << ") la: " << f_x << endl;
    return 0;
}
