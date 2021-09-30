#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int number, temp, remainder, flag = 0;
        cin >> number;
        number++; // incrementing this because question says "minimum number which is strictly larger than the given one " so no need to check given number

        while (flag == 0)
        {
            temp = number;
            remainder = 0;
            int hashArr[10] = {0};
            while (temp != 0)
            {
                remainder = temp % 10;
                hashArr[remainder]++;
                temp = temp / 10;
            }

            for (int i = 0; i < 10; i++)
            {
                //cout<<hashArr[i];
                if (hashArr[i] > 1)
                {
                    number++;
                    flag = 0;
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
        }
        cout << number << endl;
    }
}