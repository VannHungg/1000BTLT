#include<iostream>

using namespace std;

//nhap ngay thang nam
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

void findNextDayAndMonth(int iDay, int iMonth, int iYear){
	int iNextDay;
	int iNextMonth;
	int iNextYear;
	int iLastDayOfMonth = findLastDayOfMonth(iMonth, iYear);

	if (iDay == iLastDayOfMonth){
		if (iMonth == 12){
			iNextDay = 1;
			iNextMonth = 1;
			iNextYear = iYear + 1;
		}
		else{
			iNextDay = 1;
			iNextMonth = iMonth + 1;
			iNextYear = iYear;
		}
	}
	else{
		iNextDay = iDay + 1;
		iNextMonth = iMonth;
		iNextYear = iYear;
	}

	cout << "ngay thang ke tiep la: " << iNextDay << " " << iNextMonth << " " << iNextYear;
	cout << endl;
}

int main(){
	cout << "hom nay van con duoc nghi le ne :v";
	cout << endl;

	int iDay ;
	int iMonth;
	int iYear;
	nhapNgayThangNam(iDay, iMonth, iYear);

	cout << "ngay thang ke tiep la: ";
	findNextDayAndMonth(iDay, iMonth, iYear);

	system("pause");
	return 0;
}