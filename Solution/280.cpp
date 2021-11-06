#include <iostream>
#include <math.h>
#define MAX 100

using namespace std;

void nhapSoLuong(int &iN){
	do{
		cout << "nhap vao so luong phan tu: " << endl;
		cout << "iN = ";
		cin >> iN;

		if ((iN <= 0) || (iN > MAX)){
			system("cls");
			cout << "ban da nhap sai, vui long nhap lai iN :v" << endl;
			cout << "iN = ";
			cin >> iN;
		}
	} while ((iN <= 0) || (iN > MAX));
}

void nhapMang(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		cout << "iArr[" << i << "] = ";
		cin >> iArr[i];
	}
}

void xuatMang(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		cout << iArr[i] << " ";
	}
}

void themPhanTu(int iArr[], int &iN, int iViTriThem, int iPhanTuThem){
	for (int i = (iN - 1); i >= iViTriThem; i--){
		iArr[i + 1] = iArr[i];
	}
	iArr[iViTriThem] = iPhanTuThem;
	iN++;
}

void xoaPhanTu(int iArr[], int &iN, int iViTriXoa){
	for (int i = iViTriXoa; i < iN; i++){
		iArr[i] = iArr[i + 1];
	}
	iN--;
}
void HoanVi(int &iA, int &iB){
	int iTemp = iA;
	iA = iB;
	iB = iTemp;
}

void sapXep(int iArr[], int iN, char cKyTu){
	for (int i = 0; i < (iN - 1); i++){
		for (int j = (i + 1); j < iN; j++){
			if (cKyTu == 't'){
				if (iArr[i] > iArr[j]){
					HoanVi(iArr[i], iArr[j]);
				}
			}
			else if (cKyTu == 'g'){
				if (iArr[i] < iArr[j]){
					HoanVi(iArr[i], iArr[j]);
				}
			}
		}
	}
}

void duaMotSoVeDauMang(int iArr[], int iN, int iSo){
	for (int i = 0; i < iN; i++){
		int iBatDau = 0;
		if (iArr[i] == iSo){
			for (int j = (i - 1); j >= iBatDau; j--){
				iArr[j + 1] = iArr[j];
			}
			iArr[iBatDau] = iSo;
		}
	}
}

int main(){
	int iN;
	nhapSoLuong(iN);
	/*int iB;
	nhapSoLuong(iB);*/

	int iArr[MAX];
	int iBrr[MAX];

	nhapMang(iArr, iN);
	xuatMang(iArr, iN);
	cout << endl;
	duaMotSoVeDauMang(iArr, iN, 1);
	xuatMang(iArr, iN);
	//nhapMang(iBrr, iB);
	//xuatMang(iBrr, iB);
	cout << endl;

	/*cout << "mang sau khi sap xep la: ";
	SapXepViTriLeTangDan(iArr, iN);
	xuatMang(iArr, iN);*/

	cout << endl;
	system("pause");
	return 0;
}