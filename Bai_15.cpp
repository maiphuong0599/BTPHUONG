#include <iostream>
using namespace std;

bool LaNamNhuan(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0) 
	{
		return true;
	}
	return false;
}


int TinhSoNgayTrongThang(int nMonth, int nYear)
{
	int nNumOfDays;
	switch (nMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: 
		nNumOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11: 
		nNumOfDays = 30;
		break;
	case 2:
		if (LaNamNhuan(nYear))
		{
			nNumOfDays = 29;
		}
		else
		{
			nNumOfDays = 28;
		}
		break;
	}

	return nNumOfDays;
}


bool LaNgayHopLe(int nDay, int nMonth, int nYear)
{
	bool bResult = true; 

	if (!(nYear > 0 && nMonth))
	{
		bResult = false; 
	}

	if (!(nMonth >= 1 && nMonth <= 12))
	{
		bResult = false; 
	}

	if (!(nDay >= 1 && nDay <= TinhSoNgayTrongThang(nMonth, nYear)))
	{
		bResult = false;
	}

	return bResult; 
}

int TinhSTTNgayTrongNam(int nDay, int nMonth, int nYear)
{
	int count = nDay;

	for (int i = 1; i <= nMonth - 1; i++)
	{
		count = count + TinhSoNgayTrongThang(i, nYear);
	}

	return count;
}
int main()
{
	int nDay, nMonth, nYear;
	cout << "Day: ";
	cin >> nDay;

	cout << "Month: ";
	cin >> nMonth;

	cout << "Year: ";
	cin >> nYear;

	if (LaNgayHopLe(nDay, nMonth, nYear))
	{
		int nCount = TinhSTTNgayTrongNam(nDay, nMonth, nYear);
		cout << "Ngay thu: " << nCount << endl;
	}
	else
	{
		cout << "Ngay khong hop le." << endl;
	}

	return 0;
}

