#include <iostream>
#include <math.h>
using namespace std;

bool can (int a, int b, int c){
	if (a == b || b == c || c == a){
		return 1;
	} else {
		return 0;
	}
}

bool vuong (int a, int b, int c){
	if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2)){
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int a, b ,c;
	cout << "Nhap cac canh tam giac: ";
	cin >> a >> b >> c;
	cout << "Tam giac da cho";
	if (a == b && b == c){
		cout << " deu";
		goto end;
	}
	if (vuong(a, b, c) == 1){
		cout << " vuong";
	}
	if (can(a, b, c) == 1){
		cout << " can";
	}
    else{
        cout << " la tam giac thuong";
    }
	
	end:
	return 0;
}
