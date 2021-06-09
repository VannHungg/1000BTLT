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
void hoanVi(int &iA, int &iB){
	int iTemp = iA;
	iA = iB;
	iB = iTemp;
}

void sapXep(int iArr[], int iN, char cKyTu){
	for (int i = 0; i < (iN - 1); i++){
		for (int j = (i + 1); j < iN; j++){
			if (cKyTu == 't'){
				if (iArr[i] > iArr[j]){
					hoanVi(iArr[i], iArr[j]);
				}
			}
			else if (cKyTu == 'g'){
				if (iArr[i] < iArr[j]){
					hoanVi(iArr[i], iArr[j]);
				}
			}
		}
	}
}

int demPhanBiet(int iArr[], int iN){
	int iSoLuong = iN;

	for (int i = 1; i < iN; i++){
		for (int j = 0; j < i; j++){
			if (iArr[i] == iArr[j]){
				iSoLuong--;
				break;
			}
		}
	}

	return iSoLuong;
}

bool kiemTraTrung(int iArr[], int iViTriKiemTra){
	for (int i = 0; i < iViTriKiemTra; i++){
		if (iArr[i] == iArr[iViTriKiemTra]){
			return true;
		}
	}
	return false;
}
//c1
void lietKe(int iArr[], int iN){
	int iMangChuaGiaTri[MAX];
	int iSoLuong = 0;

	for (int i = 0; i < iN; i++){
		if (!kiemTraTrung(iArr, i)){
			iMangChuaGiaTri[iSoLuong++] = iArr[i];
		}
	}
	//xuatMang(iMangChuaGiaTri, iSoLuong);

	for (int i = 0; i < iSoLuong; i++){
		int iTemp = 0;
		for (int j = 0; j < iN; j++){
			if (iArr[j] == iMangChuaGiaTri[i]){
				iTemp++;
			}
		}
		cout << iMangChuaGiaTri[i] << " lap lai " << iTemp;
		cout << endl;
	}
}

//c2
void lietKeC2(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		if (!kiemTraTrung(iArr, i)){
			int iTemp = 1;
			for (int j = (i + 1); j < iN; j++){
				if (iArr[j] == iArr[i]){
					iTemp++;
				}
			}
			cout << iArr[i] << "lap lai: " << iTemp << endl;
		}
	}
}

int main(){
	int iN;
	nhapSoLuong(iN);
	/*int iX;
	nhapSoLuong(iX);*/

	int iArr[MAX];

	nhapMang(iArr, iN);
	xuatMang(iArr, iN);
	cout << endl;

	cout << "so luong phan tu phan biet: " << demPhanBiet(iArr, iN) << endl;

	cout << "pb : ";
	lietKeC2(iArr, iN);

	cout << endl;
	system("pause");
	return 0;
}