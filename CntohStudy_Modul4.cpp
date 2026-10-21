#include <iostream>
using namespace std;

int main(){
	float IPK = 3.6;
	int penghasilan = 3000000;
	
	if (IPK >= 3.5){
		if (penghasilan < 3000000){
			cout << "Lolos Beasiswa Penuh";
		} else{
			cout << "Lolos Beasiswa Parsial";
		}
	} else {
		cout << "Tidak Lolos Beasiswa";
	}
	return 0;
}
