#include <iostream>
#include <cmath>
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

int giaTri(int iArr[], int iN, int iX){
	int iViTri = 0;

	for (int i = 1; i < iN; i++){
		if (abs(iArr[i] - iX) >  abs(iArr[iViTri] - iX)){
			iViTri = i;
		}
	}

	return iArr[iViTri];
}

bool soGanh(int iN){
	int iTemp = iN;
	int iSum = 0;

	while (iTemp){
		iSum = iSum * 10 + (iTemp % 10);
		iTemp /= 10;
	}

	return (iSum == iN) ? true : false;
}

bool soDangaMuk(int iN, int iCoSo){
	int iKiemTra = log10(iN) / log10(iCoSo);
	return (pow(iCoSo, iKiemTra) == iN) ? true : false;
}

int chuSoXuatHienNhieuNhat(int iArr[], int iN){
	int iMangPhu[10] = { 0 };

	for (int i = 0; i < iN; i++){
		int iTemp = iArr[i];
		while (iTemp){
			int iChuSoCuoi = iTemp % 10;
			iMangPhu[iChuSoCuoi]++;
			iTemp /= 10;
		}
	}

	int iViTriMax = 0;
	for (int i = 1; i < 10; i++){
		iViTriMax = (iMangPhu[i] >= iMangPhu[iViTriMax]) ? i : iViTriMax;
	}
	return iViTriMax;
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

	cout << "chu so co lan xuat hien nhieu nhat trong mang la: " << chuSoXuatHienNhieuNhat(iArr, iN);

	cout << endl;
	system("pause");
	return 0;
}