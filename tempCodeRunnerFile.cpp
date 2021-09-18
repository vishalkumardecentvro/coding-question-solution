#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int d, m, y, d1, m1, y1;
    cin >> d >> m >> y >> d1 >> m1 >> y1;
    int dFine = 0, mFine = 0, yFine = 0;

    if (d - d1 > 0)
        dFine = d - d1;

    if (m - m1 > 0)
        mFine = m - m1;

    if (y - y1 > 0)
        yFine = y - y1;

    int totalFine = (15 * dFine) + (500 * mFine) + (10000 * yFine);
    cout<<totalFine;
}