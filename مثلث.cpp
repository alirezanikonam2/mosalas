#include<iostream>
using namespace std;
int main(){
	int temp = 0;
	int A[3];
	for (int i = 0; i < 3; i++){
		cout << "please enter  zlee "<<i<<"=";
		cin >> A[i];
	}



	if (A[0] + A[1] < A[2] && A[0] + A[2] < A[1] && A[2] + A[1] < A[0]){
		cout << "yes";
	}
	else{
		cout << "no";
	}


	system("pause");
	return 0;
}