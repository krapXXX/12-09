#include<iostream>
#include "Point.h"
#include "Time.h"
using namespace std;
int main ()
{
	srand(time(0));
	Point3D obj1;
	obj1.Input(1, 2,5);
	obj1.Show();

	Point3D rezS = obj1.Sum(10, 20,30);
	Point3D rezMul = obj1.Mult(10, 20,30);
	Point3D rezM = obj1.Min(10, 20,30);
	Point3D rezD = obj1.Div(10, 20,30);
	rezS.Show();
	rezMul.Show();
	rezM.Show();
	rezD.Show();
	obj1.Show();

	system("pause");
	return 0;
}
