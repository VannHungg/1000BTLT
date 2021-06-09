#include<iostream>

using namespace std;

void inHinh(int iRow, int iCol){
	for (int i = 0; i < iRow; i++){
		for (int j = 1; j <= (iRow + i); j++){
			if (j < (iRow - i)){
				cout << "   ";
			}
			else{
				cout << " * ";
			}
		}
		cout << endl;
	}
}

void inHinhCaub(int iRow, int iCol){
	for (int i = 0; i < iRow; i++){
		if (i == (iRow - 1)){
			for (int j = 1; j <= iCol; j++){
				cout << " * ";
			}
		}
		else{
			for (int j = 1; j <= (iRow + i); j++){
				if ((j == (iRow - i)) || (j == (iRow + i))){
					cout << " * ";
				}
				else{
					cout << "   ";
				}
			}
			cout << endl;
		}
	}
}

void inHinhCauc(int iRow, int iCol){
	for (int i = 1; i <= iRow; i++){
		for (int j = 1; j <= i; j++){
			cout << " * ";
		}
		cout << endl;
	}
}

void inHinhCaud(int iRow, int iCol){
	for (int i = 1; i <= iRow; i++){
		if (i == iRow){
			for (int j = 1; j <= iRow; j++){
				cout << " * ";
			}
		}
		else{
			for (int j = 1; j <= i; j++){
				if ((j == 1) || (j == i)){
					cout << " * ";
				}
				else{
					cout << "   ";
				}
			}
			cout << endl;
		}
	}
}

int main(){
	cout << "ahiihi, do ngoc :3";
	cout << endl;


	int iRow = 4;
	int iCol = 7;

	cout << "in hinh: " << endl;
	inHinhCaub(iRow, iCol);
	cout << endl;

	system("pause");
	return 0;
}
© 2021 GitHub, Inc.