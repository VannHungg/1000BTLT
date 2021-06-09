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

void findLastDayAndMonth(int iDay, int iMonth, int iYear){
	int iLastDay;
	int iLastMonth;
	int iLastYear;

	if (iDay == 1){
		if (iMonth == 1){
			iLastDay = 31;
			iLastMonth = 12;
			iLastYear = iYear - 1;
		}
		else{
			iLastDay = findLastDayOfMonth((iMonth - 1), iYear);
			iLastMonth = iMonth - 1;
			iLastYear = iYear;
		}
	}
	else{
		iLastDay = iDay - 1;
		iLastMonth = iMonth;
		iLastYear = iYear;
	}

	cout << iLastDay << " " << iLastMonth << " " << iLastYear;
	cout << endl;
}



int main(){
	cout << "ahiihi, do ngoc :3";
	cout << endl;

	int iDay;
	int iMonth;
	int iYear;
	nhapNgayThangNam(iDay, iMonth, iYear);

	cout << "ngay thang truoc do la: ";
	findLastDayAndMonth(iDay, iMonth, iYear);

	system("pause");
	return 0;
}