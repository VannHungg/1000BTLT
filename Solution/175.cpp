#include<iostream>
#include<cmath>
#define MAX 100

using namespace std;

void nhapN(int &iN);

float timMax(float fArr[], int iN);

void nhapMang(int iArr[], int iN);

void xuatMang(int iArr[], int iN);

int soDuong(int iArr[], int iN);

int isprime(int n);

int timMax(int iArr[], int iN);

int timViTriMax(int iArr[], int iN);

int timSoNguyenTo(int iArr[], int iN);

int bcnn(int iArr[], int iN);

int timMin(int iArr[], int iN);

int ucln(int iA, int iB);

bool kiemTraChiaHet(int iArr[], int iN, int iDoiSo);

int uclnTrongMang(int iArr[], int iN);

void sapXep(int iArr[], int iN);

int demSoLanXuatHien(int iArr[], int iN);

void soXuatHienItNhat(int iArr[], int iN);

void capGiaTriGanNhau(int iArr[], int iN);

int DemSoLuongCacGiaTriPhanBiet(int a[], int n);

void tanSo(int iArr[], int iN);

int motTrongHai(int iArr[], int iBrr[], int iA, int iB);

int trungMang(int iArr[], int iA, int iBrr[], int iB);

int timTanSoMax(int iArr[], int iN);

bool kiemTraTrung(int iArr[], int iN, int iVitri);

int timTanSo(int iArr[], int iN, int index);

void lietKeTanSoMax(int iArr[], int iN);

int soLuongSoNguyenTo(int iArr[], int iN);

bool kiemTra(int iArr[], int iA, int iBrr[], int iB);

void themPhanTu(int iArr[], int &iN, int iGiaTri, int iVitri);

void vuaThemVuaNhap(int iArr[], int iN);

void xoaPhanTu(int iArr[], int &iN, int iVitri);

void xoaPhanTuTrung(int iArr[], int &iN);

void doiCho1(int iArr[], int iN, int iVitri);

void doiCho2(int iArr[], int iN, int iVitri);

void chuyenCho(int iArr[], int iN);

void theoYeuCau(int iArr[], int iN);

void daoMang(int iArr[], int iN);

void daoSoChan(int iArr[], int iN);

void dichTrai(int a[], int n, int k);

void dichtrai(int iArr[], int iN, int iSoLan);

void daoChanLe(int iArr[], int iN);

void lietKeMangCon(int iArr[], int iN);

void lietKeMangConTangDan(int iArr[], int iN);

int main(){
	int iN;
	nhapN(iN);

	int iArr[MAX];
	nhapMang(iArr, iN);
	xuatMang(iArr, iN);
	cout << endl;

	/*int iB;
	nhapN(iB);

	int iBrr[MAX];
	nhapMang(iBrr, iB);
	xuatMang(iBrr, iB);

	int iGiaTri = 20;
	int iVitri = 2;
	themPhanTu(iArr, iN, iGiaTri, iVitri);
	cout << "sau khi them: ";
	xuatMang(iArr, iN);*/

	lietKeMangConTangDan(iArr, iN);

	cout << endl;
	system("pause");
	return 0;
}

void LietKeMangConTangDan(int iArr[], int iN){
	int max = timMax(iArr, iN);

	for (int i = 0; i < iN; i++){
		if (iArr[i] == max){
			int iStart;
			int k = i;
			while (iArr[k - 1] > iArr[k]){
				iStart = k;
			}
			//da co iStart.

			for (int iChieuDai = 1; iChieuDai <= (i - iStart + 1); iChieuDai++){
				int iDem = 0;
				while (iDem != iChieuDai){
					cout << iArr[] << " ";	
				}
			}
		}
	}
}

void lietKeMangConTangDan(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		//tim chieu dai lon nhat cua tung i.
		int iChieuDaiMax = 1;
		for (int k = i; k < iN; k++){
			if (iArr[k] <= iArr[k + 1]){
				iChieuDaiMax++;
			}
			else{
				break;//dung chay vong lap.
			}
		}

		
		for (int iChieuDai = 1; iChieuDai <= iChieuDaiMax; iChieuDai++){
			for (int j = i; j < (i + iChieuDai); j++){
				cout << iArr[j] << " ";
			}
			cout << "   ";
		}
		cout << endl;
		
	}
}

//HAY.
void lietKeMangCon(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		for (int iChieuDai = i + 3; iChieuDai <= iN; iChieuDai++){
			for (int j = i; j < iChieuDai; j++){
				cout << iArr[j] << " ";
			}
			cout << "   ";
		}
		cout << endl;
	}
}

//HAY
void daoChanLe(int iArr[], int iN){
	for (int i = 0; i < iN ; i++){
		for (int j = (i + 1); j < iN; j++){
			if ((iArr[i] % 2 && iArr[j] % 2) || (!(iArr[i] % 2) && !(iArr[j] % 2))){
				int iTemp = iArr[i];
				iArr[i] = iArr[j];
				iArr[j] = iTemp;
			}
		}
	}
}

void dichtrai(int iArr[], int iN, int iSoLan){
	for (int i = 0; i < iSoLan; i++){
		doiCho2(iArr, iN, 0);
	}
}

void dichTrai(int a[], int n, int k)
{
	while (k--)
	{
		int tam = a[0];
		for (int i = 0; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		a[n - 1] = tam;
	}
}

//HAY
void daoSoChan(int iArr[], int iN){
	for (int i = 0, j = (iN - 1); i < j; i++, j--){
		if (!iArr[i] && !iArr[j]){
			int iTemp = iArr[i];
			iArr[i] = iArr[j];
			iArr[j] = iTemp;
		}
	}
}

void daoMang(int iArr[], int iN){
	for (int i = 0; i < (iN / 2); i++){
		//doiCho1(iArr, iN, (iN - 1));
		int iTemp = iArr[i];
		iArr[i] = iArr[iN - i - 1];
		iArr[iN - i - 1] = iTemp;
	}
}

void theoYeuCau(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		if (!(iArr[i] % 2) && (iArr[i])){//nho so 0 cung la so chan.
			doiCho1(iArr, iN, i);
		}
		else if (iArr[i] % 2){
			doiCho2(iArr, iN, i);
		}
	}
}

void chuyenCho(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		if (!(iArr[i] % 3)){
			doiCho1(iArr, iN, i);
		}
	}
}

void doiCho2(int iArr[], int iN, int iVitri){//dua ve cuoi mang
	int iTemp = iArr[iVitri];
	for (int i = iVitri; i < (iN - 1); i++){
		iArr[i] = iArr[i + 1];
	}
	iArr[(iN - 1)] = iTemp;
}

void doiCho1(int iArr[], int iN, int iVitri){//dua ve dau mang
	int iTemp = iArr[iVitri];
	for (int i = iVitri - 1; i >= 0; i--){
		iArr[i + 1] = iArr[i];
	}
	iArr[0] = iTemp;
}

//HAY
void xoaPhanTuTrung(int iArr[], int &iN){
	for (int i = 0; i < iN; i++){
		bool bCheck = false;
		for (int j = (i + 1); j < iN; j++){
			if (iArr[i] == iArr[j]){
				xoaPhanTu(iArr, iN, j);
				j--;
				bCheck = true;
			}
		}
		if (bCheck){
			xoaPhanTu(iArr, iN, i);
			i--;
		}
	}
}

void xoaPhanTuLe(int iArr[], int &iN){
	for (int i = 0; i < iN; i++){
		if (iArr[i] % 2){
			xoaPhanTu(iArr, iN, i);
			i--;//doi lai 1 don vi de xet phan tu ke tiep.
		}
	}
}

void xoaPhanTu(int iArr[], int &iN, int iVitri){
	for (int i = iVitri; i < iN; i++){
		iArr[i] = iArr[i + 1];
	}
	iN--;
}

void vuaThemVuaNhap(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		cout << "iArr[" << i << "]: ";
		cin >> iArr[i];

		//tim vi tri them vao.
		for (int j = 0; j < i; j++){
			if (iArr[i] < iArr[j]){//j la vi tri can them vao.
				int iTemp = iArr[i];
				for (int k = i; k >= j; k--){
					iArr[k + 1] = iArr[k];
				}
				iArr[j] = iTemp;
				break;//gap truong hop dau tien la cho dung vong lap.
			}
		}
	}
}

void themPhanTu(int iArr[], int &iN, int iGiaTri, int iVitri){
	for (int i = iN - 1; i >= iVitri; i--){
		iArr[i + 1] = iArr[i];
	}
	iArr[iVitri] = iGiaTri;
	iN++;
}

void tronHaiMangThanhMot(int iArr[], int iA, int iBrr[], int iB, int iCrr[], int &iC){
	iC = iA + iB;
	int iVitriA = (iA - 1);
	int iVitriB = (iB - 1);

	sapXep(iArr, iA);
	sapXep(iBrr, iB);

	for (int i = 0; i < iC; i++){
		if (iVitriA >= 0 && iVitriB >= 0){
			if (iArr[iVitriA] > iBrr[iVitriB]){
				iCrr[i] = iArr[iVitriA--];
			}
			else{
				iCrr[i] = iBrr[iVitriB--];
			}
		}
		else if (iVitriA < 0){
			iCrr[i] = iBrr[iVitriB--];
		}
		else{
			iCrr[i] = iArr[iVitriA--];
		}
	}
}

bool kiemTra(int iArr[], int iA, int iBrr[], int iB){
	bool bCheck = true;
	for (int i = 0; i < iB; i++){
		int iVitri;
		if (iBrr[i] == iArr[0]){
			iVitri = i + 1;
			for (int j = 1; j < iA; j++){
				if (iArr[j] != iBrr[iVitri]){
					bCheck = false;
					break;
				}
				else{
					iVitri++;
					bCheck = true;
				}
			}
		}
		if (bCheck){
			return bCheck;
		}
	}
	return bCheck;
}

int soLuongSoNguyenTo(int iArr[], int iN){
	int count = 0;
	for (int i = 0; i < iN; i++){
		if (isprime(iArr[i])){//kiem tra so nguyen to.
			if (!kiemTraTrung(iArr, iN, i)){//neu no khong trung thi cong vao.
				count++;
			}
		}
	}
	return count;
}

void lietKeTanSoMax(int iArr[], int iN){
	int max = timTanSoMax(iArr, iN);

	for (int i = 0; i < iN; i++){
		if (!kiemTraTrung(iArr, iN, i)){
			int tanSo = timTanSo(iArr, iN, i);//tan so tai vi tri i.
			if (max == tanSo){
				cout << iArr[i] << " ";
			}
		}
	}
}

int timTanSo(int iArr[], int iN, int index){
	int tanso = 1;
	for (int i = index + 1; i < iN; i++){
		if (iArr[i] == iArr[index]){
			tanso++;
		}
	}
	return tanso;
}

bool kiemTraTrung(int iArr[], int iN, int iVitri){
	for (int i = iVitri - 1; i >= 0; i--){
		if (iArr[iVitri] == iArr[i]){
			return true;
		}
	}
	return false;
}

int timTanSoMax(int iArr[], int iN){
	int max = 1;
	for (int i = 0; i < iN; i++){
		int iTanSo = 1;
		for (int j = (i + 1); j < iN; j++){//xet tu phan tu i tro ve cuoi mang.
			if (iArr[i] == iArr[j]){
				iTanSo++;
			}
		}
		max = (max < iTanSo) ? iTanSo : max;//moi phan tu trong mang deu ss voi max.
	}
	return max;
}

int trungMang(int iArr[], int iA, int iBrr[], int iB){
	int iSoLan = 0;
	for (int i = 0; i <= (iB - iA); i++){//cho i chay den (iB - iA) vi i chi co the chay den do.
		int iStart;
		if (iBrr[i] == iArr[0]){
			iStart = i + 1;//danh dau vi tri bat daau xet duyet.
			bool bCheck = true;
			for (int j = 1; j < iA; j++){
				if (iBrr[iStart++] != iArr[j]){
					bCheck = false;
					break;
				}
			}
			if (bCheck){//bCheck khong doi, van la true thi ms cong vao.
				iSoLan++;
			}
		}
	}
	return iSoLan;
}

//HAY. TU NGHI RA
int motTrongHai(int iArr[], int iBrr[], int iA, int iB){
	int iN = iA + iB;
	for (int i = 0; i < iA; i++){
		bool bCheck = false;
		for (int j = 0; j < iB; j++){
			if (iArr[i] == iBrr[j]){
				bCheck = true;
				iN--;
			}
		}
		if (bCheck){
			iN--;
		}
	}
	return iN;
}

bool kiemTraSoDauChan(int iN){//c1
	/*int iSoMu = log10(iN);
	int iSoDau = iN / pow(10, iSoMu);
	return (iSoDau % 2) ? false : true;*/

	//c2
	return true;

}

void tanSo(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		int dem = 0;
		for (int j = 0; j < iN; j++){
			if (iArr[i] == iArr[j]){
				if (i <= j){
					dem++;
				}
				else{
					break;
				}
			}
		}
		if (dem > 1){
			cout << "gia tri " << iArr[i] << " lap lai: " << dem;
		}
	}
}

int DemSoLuongCacGiaTriPhanBiet(int a[], int n)
{
	int dem = 0;
	int flag;

	for (int i = 0; i < n; i++){
		flag = 1;
		for (int j = (i + 1); j < n; j++){
			if (a[i] == a[j]){
				flag = 0;
				break;
			}
		}
		if (flag){
			dem++;
		}
	}
	return dem;
}

void capGiaTriGanNhau(int iArr[], int iN){
	sapXep(iArr, iN);
	int iMangTam[MAX];
	int iSoPhanTu = (iN - 1);

	for (int i = 0; i < (iSoPhanTu); i++){
		iMangTam[i] = abs(iArr[i] - iArr[i + 1]);
	}

	int iViTri = timViTriMax(iMangTam, iSoPhanTu);
	cout << "hai gia tri can tim la: " << iArr[iViTri] << " & " << iArr[iViTri + 1] << endl;
}

void soXuatHienItNhat(int iArr[], int iN){
	int iMangTanSo[10] = { 0 };

	for (int i = 0; i < iN; i++){
		int iTemp = iArr[i];
		int iSoCuoiCung;

		while (iTemp){
			iSoCuoiCung = iTemp % 10;
			iMangTanSo[iSoCuoiCung]++;
			iTemp /= 10;//xet dk  ket thuc vong lap.
		}
	}
	cout << "... ";
	xuatMang(iMangTanSo, 10);
}

int demSoLanXuatHien(int iArr[], int iN){
	sapXep(iArr, iN);
	//mang da duoc sap xep tu be den lon.
	int iMangGiaTri[MAX];//khai bao mang chua gia tri.
	int iMangTanSo[MAX] = { 1 };
	int iSoPhanTu = 0;

	int iViTri = 0;

	for (int i = 0; i < iN; i++){
		if (iArr[i] == iArr[i + 1]){
			iMangTanSo[iSoPhanTu]++;
			iMangGiaTri[iSoPhanTu] = iArr[i];
		}
		else{
			iMangGiaTri[iSoPhanTu] = iArr[i];
			iSoPhanTu++;
		}
	}
	cout << "mang tan so: ";
	xuatMang(iMangTanSo, iSoPhanTu);
	cout << endl;

	cout << "mang giatri: ";
	xuatMang(iMangGiaTri, iSoPhanTu);

	//tim phan tu xuat hien nhieu nhat
	int timPhanTuPhuHop = timMax(iMangTanSo, iSoPhanTu);

	for (int i = 0; i < iSoPhanTu; i++){
		if (iMangTanSo[i] == timPhanTuPhuHop){
			iViTri = i;
		}
	}

	return iMangGiaTri[iViTri];
}

void sapXep(int iArr[], int iN){
	for (int i = 0; i < (iN - 1); i++){
		for (int j = (i + 1); j < iN; j++){
			if (iArr[i] > iArr[j]){
				int iTemp = iArr[i];
				iArr[i] = iArr[j];
				iArr[j] = iTemp;
			}
		}
	}
}

int uclnTrongMang(int iArr[], int iN){
	int min = timMin(iArr, iN);

	while (min > 1){
		if (kiemTraChiaHet(iArr, iN, min)){
			return min;
		}
		min--;
	}

	return 1;
}

bool kiemTraChiaHet(int iArr[], int iN, int iDoiSo){
	for (int i = 0; i < iN; i++){
		if (iArr[i] % iDoiSo){
			return false;
		}
	}
	return true;
}

int timMin(int iArr[], int iN){
	int min = iArr[0];

	for (int i = 1; i < iN; i++){
		min = (min < iArr[i]) ? min : iArr[i];
	}

	return min;
}

int ucln(int iA, int iB){
	if (iA == 0 || iB == 0){
		return (iA + iB);
	}
	while(iA != iB){
		if (iA < iB){
			iB -= iA;
		}
		else if (iA > iB){
			iA -= iB;
		}
	}
	return iA;
}

int bcnn(int iArr[], int iN){
	int boiSo = timMax(iArr, iN);

	for (int i = 0; i < iN; i++){
		if (boiSo % iArr[i]){
			boiSo += timMax(iArr, iN);
			i = -1;
		}
	}

	return boiSo;
}

int timSoNguyenTo(int iArr[], int iN){
	int max = timMax(iArr, iN);
	int soCanTim = max + 1;
	while (!isprime(soCanTim)){
		soCanTim += 1;
	}
	return soCanTim;
}

int timViTriMax(int iArr[], int iN){
	int max = 0;

	for (int i = 1; i < iN; i++){
		max = (iArr[max] < iArr[i]) ? i : max;
	}

	return max;
}

int timMax(int iArr[], int iN){
	int max = iArr[0];

	for (int i = 1; i < iN; i++){
		max = (max < iArr[i]) ? iArr[i] : max;
	}

	return max;
}



int soDuong(int iArr[], int iN){
	int soCanTim = -1;
	for (int i = 0; i < iN; i++){
		if (iArr[i] > 0){
			soCanTim = iArr[i];
			break;
		}
	}
	return soCanTim;
}

void xuatMang(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		cout << iArr[i] << " ";
	}
}

int isprime(int n){
	//flag = 0 => không phải số nguyên tố
	//flag = 1 => số nguyên tố

	int flag = 1;

	if (n <2) return flag = 0; /*Số nhỏ hơn 2 không phải số nguyên tố => trả về 0*/

	/*Sử dụng vòng lặp while để kiểm tra có tồn tại ước số nào khác không*/
	int i = 2;
	while (i <n){
		if (n%i == 0) {
			flag = 0;
			break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
		}
		i++;
	}

	return flag;
}

void nhapMang(int iArr[], int iN){
	for (int i = 0; i < iN; i++){
		cout << "iArr[" << i << "]: ";
		cin >> iArr[i];
	}
}

float timMax(float fArr[], int iN){
	float max = fArr[0];

	for (int i = 1; i < iN; i++){
		max = (max < fArr[i]) ? fArr[i] : max;
	}

	return max;
}

void nhapN(int &iN){
	do{
		cout << "nhap vao so n ";
		cin >> iN;

		if (iN <= 0){
			cout << "nhap sai, vui long nhap lai";
			cin >> iN;
			system("cls");
		}
	} while (iN <= 0);
}