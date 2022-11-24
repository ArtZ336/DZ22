#include <iostream>
#include "function.h"
#define num 10
using namespace std;

int main()
{
	#define INTEGER
	int ar[num];
	fill(ar, num);
	show(ar, num);
	cout << "\n";
	min(ar, num);
	max(ar, num);
	cout << "\n";
	sort(ar, num);
	show(ar, num);
	edit(ar, num);
	#undef INTEGER
	#define FLOAT
	float ar1[num];
	fill(ar1, num);
	show(ar1, num);
	cout << "\n";
	min(ar1, num);
	max(ar1, num);
	cout << "\n";
	sort(ar1, num);
	show(ar1, num);
	edit(ar1, num);
	#undef FLOAT
	#define CHAR
	char ar2[num];
	fill(ar2, num);
	show(ar2, num);
	cout << "\n";
	min(ar2, num);
	max(ar2, num);
	cout << "\n";
	sort(ar2, num);
	show(ar2, num);
	edit(ar2, num);
	#undef CHAR
}
