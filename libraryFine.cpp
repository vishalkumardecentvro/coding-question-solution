#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int d, m, y, d1, m1, y1;
    cin >> d >> m >> y >> d1 >> m1 >> y1;
    int dFine = 0, mFine = 0, yFine = 0;

    if (y - y1 > 0)
    {
        yFine = y - y1;
        cout << 10000;
        return ;
    }

    if ((m - m1 > 0 && yFine > 0) || (m - m1 > 0 && y - y1 == 0))
        mFine = m - m1;

    if ((d - d1 > 0 && mFine > 0 && yFine > 0) || (d - d1 > 0 && m - m1 == 0 && y - y1 == 0))
        dFine = d - d1;

    cout << "day= " << dFine << "month= " << mFine << "year= " << yFine << endl;

    int totalFine = (15 * dFine) + (500 * mFine) + (10000 * yFine);
    cout << totalFine;
}