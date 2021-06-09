#include<iostream>

using namespace std;

void nhapNgayThangNam(int &iDay, int &iMonth, int &iYear){
	cout << "nhap vao ngay thang nam: ";
	cin >> iDay >> iMonth >> iYear;
}

//tim nam nhuan
bool leapYearTest(int iYear){
	return (((iYear % 4) && !(iYear % 100)) || (iYear % 400)) ? true : false;
}

//tim ngay cuoi cung cua thang.
int findLastDayOfMonth(int iMonth, int iYear){
	int iLastDayOfMonth;
	if ((iMonth == 4) || (iMonth == 6) || (iMonth == 9) || (iMonth == 11)){
		iLastDayOfMonth = 30;
	}
	else if (iMonth == 2){
		if (leapYearTest(iYear)){
			iLastDayOfMonth = 29;
		}
		else{
			iLastDayOfMonth = 28;
		}
	}
	else{
		iLastDayOfMonth = 31;
	}
	return iLastDayOfMonth;
}

int ngayThuMayTrongNam(int iDay, int iMonth, int iYear){
	int iNgayCanBiet = iDay;
	for (int i = 1; i < iMonth; i++){
		iNgayCanBiet += findLastDayOfMonth(i, iYear);
	}
	return iNgayCanBiet;
}

int main(){
	cout << "ahiihi, do ngoc :3";
	cout << endl;

	int iDay;
	int iMonth;
	int iYear;
	nhapNgayThangNam(iDay, iMonth, iYear);

	cout << "ngay vua nhap la ngay thu " << ngayThuMayTrongNam(iDay, iMonth, iYear);
	cout << endl;

	system("pause");
	return 0;
}