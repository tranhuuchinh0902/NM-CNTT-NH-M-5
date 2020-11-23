#include<iostream>
using namespace std;
int main()
{
	int a, kt1, kt2;
	bool i = false, j=false;
	cout << "nhap a=";
	cin >> a;
	kt1 = a % 10;//lấy ra chữ số cuối 
	a = a / 10;
	while (a)//so sánh 2 chữ số kề nhau
	{
		
		kt2 = a % 10;
		if (kt1 < kt2)
			 i = true;
		if (kt1 > kt2)
			j = true;
		kt1 = kt2;
		a = a / 10;
	}
	if (i == true && j == true)//số được nhập đang tăng rồi giảm và ngược lại
		cout << "khong tang khong giam";
	if (i == true && j == false)//vì i= true và j = false nên các số từ phải qua trái tăng dần mà đề bài lại yêu cầu từ phải sang trái nên là số giảm dần
		cout << "giam dan ";
	if (i == false && j== true)// vì i= false va j =true nên các số từ phải qua trái giảm dần mà đề bài lại yêu cầu từ trái sang phải nên là số tăng dần
		cout << "tang dan ";
	if (i == false && j == false)
		cout << "khong tang khong giam ";//số được nhập đang tăng rồi giảm và ngược lại
}