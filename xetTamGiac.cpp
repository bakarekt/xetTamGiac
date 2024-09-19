#include <iostream>
using namespace std;

bool can (double a, double b, double c){
	if (a == b || b == c || a == c){
		return 1;
	}
	return 0;
}

bool vuong (double a, double b, double c){
	if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
		return 1;
	}
		return 0;
}

int main() {
	double a, b ,c;
	cout << "Nhap cac canh tam giac: ";
	cin >> a >> b >> c;
	cout << "Tam giac da cho ";
	if (a == b && b == c){
		cout << "deu";
		goto end;
	}
	if (vuong(a, b, c) == 1){
		cout << "vuong ";
	}
	if (can(a, b, c) == 1){
		cout << "can";
	}else{
        cout << "la tam giac thuong";
    }
	
	end:
	return 0;
}
