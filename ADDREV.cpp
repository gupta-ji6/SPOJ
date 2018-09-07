// Problem ID = ADDREV
// Adding Reversed Numbers

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int num1,num2;
		cin >> num1 >> num2;
		int r1,r2,rev1=0,rev2=0,sum=0;
		while(num1) {
			r1 = num1 % 10;
			rev1 = rev1*10 + r1;
			num1 /= 10;
		}
		while(num2) {
			r2 = num2 % 10;
			rev2 = rev2*10 + r2;
			num2 /= 10;
		}
		sum = rev1 + rev2;
		r2 = 0;
		while(sum) {
			r1 = sum % 10;
			r2 = r2*10 + r1;
			sum /= 10;
		}
		cout << r2 << endl;
	}
	return 0;
}