#include <bits/stdc++.h>
using namespace std;
bool iIn1,iIn2,iIn3,iIn4;
int main()
{
	cin >> iIn1 >> iIn2 >> iIn3 >> iIn4;
	cout << (((iIn1 ^ iIn2) && (iIn3 || iIn4)) ^ ((iIn2 && iIn3) || (iIn1 ^ iIn4))) << endl;
	return 0;
}
