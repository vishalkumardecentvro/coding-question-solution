#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
class Emp
{
public:
    int Eno;
    char Ename[30];
};
int main()
{
    FILE *fp;
    Emp e;
    int ch, count, no;
    long int pos;
    cout << "\n1.Addrecord\n2.Direct Access\n3.Exit\n";
    do
    {
        cout << "\nEnter your choice:\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            fp = fopen("d1.txt", "rb+");
            if (!fp)
            {
                fp = fopen("d1.txt", "wb+");
                if (!fp)
                {
                    cout << "\nSorry Insufficient Space";
                }
            }
            count = 0;
            while (fread(&e, sizeof(e), 1, fp))
                count++;
            e.Eno = ++count;
            cout << "\nEmployee number:" << e.Eno;
            cout << "\nEnter name:";
            cin >> e.Ename;
            fwrite(&e, sizeof(e), 1, fp);
            fclose(fp);
            break;
            exit(1);
        case 2:
            fp = fopen("d1.txt", "rb+");
            cout << "\nEnter a EMP number for direct access:";
            cin >> no;
            count = 0;
            while (fread(&e, sizeof(e), 1, fp))
                count++;
            if (no > count)
            {
                cout << "\nInvalid EMP number";
                break;
            }
            pos = (no - 1) * sizeof(e);
            fseek(fp, pos, 0);
            fread(&e, sizeof(e), 1, fp);
            cout << e.Eno << e.Ename;
            break;
        default:
            cout << "\nAborting from the execution\n";
        }
    } while (ch != 3);
    return (0);
}