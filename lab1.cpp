#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned long address = 0;
    char c;
    cout << hex << setfill('0');
    while (cin.good())
    {
        int nread;
        char buf[16];
        for (nread = 0; nread < 16 && cin.get(buf[nread]); nread++)
            if (nread == 0)
                cout << setw(8) << address;
        for (int i = 0; i < 16; i++)
        {
            if (i % 8 == 0)
                cout << ' ';
            if (i < nread)
                cout << ' ' << setw(2) << (unsigned)buf[i];
            else
                cout << " ";
        }
        cout << "";
        for (int i = 0; i < nread; i++)
        {
            if (buf[i] < 32)
                cout << ':';
            else
                cout << buf[i];
        }
        cout << "\n";
        address += 16;
    }
}