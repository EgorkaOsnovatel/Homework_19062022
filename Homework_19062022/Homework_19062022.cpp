#include <iostream>

using namespace std;

void firstNumber()
{
    int scaleF = 5;
    int** arr = new int*[scaleF];
    for (int i = 0; i < scaleF; i++) 
    {
        arr[i] = new int[3];
    }

    for (int i = 0; i < scaleF-2; i++)
    {
        for (int s = 0; s < 1+i; s++)
        {
            arr[i][s] = 10 * i + 1 + s;
            cout << arr[i][s] << ' ';
        }
        cout << endl;
    }

    for (int i = 1; i < 3; i++)
    {
        for (int s = 0; s < 3 - i; s++)
        {
            arr[i][s] = (10 * (2 - i)) + 1 + s;
            cout << arr[i][s] << ' ';
        }
        cout << endl;
    }
}

void twoNumber()
{
    int arrF[3] = { 1, 74, 23 };
    int arrS[4] = { 2, 32, 84, 91 };
    int res;
    int *ptrRes = &res;
    int arrAll[7];
    int* ptrTransp = arrAll;
    for (int i = 0; i < 3; i++)
    {
        ptrTransp[i] = arrF[i];
    }

    for (int i = 0; i < 4; i++)
    {
        ptrTransp[i+3] = arrS[i];
    }

    for (int i = 0; i < 7 - 1; i++) 
    {
        for (int j = 0; j < 7 - i - 1; j++) 
        {
            if (arrAll[j] > arrAll[j + 1]) 
            {
                *ptrRes = arrAll[j];
                arrAll[j] = arrAll[j + 1];
                arrAll[j + 1] = *ptrRes;
            }
        }
        cout << arrAll[i] << ' ';
    }
}

void threeNumber()
{
    int arrF[3] = { 1, 74, 32 };
    int arrS[4] = { 2, 32, 84, 91 };
    int all[7], notDifferent[2];
    int count;
    int* ptrCount = &count;
    int* ptrTransp = all;
    int* ptrDiff = notDifferent;

    int arrAll[19];
    int* ptrTransp = arrAll;
    for (int i = 0; i < 3; i++)
    {
        ptrTransp[i] = arrF[i];
    }

    for (int i = 0; i < 4; i++)
    {
        ptrTransp[i + 3] = arrS[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arrF[i] == arrS[j])
            {
                ptrTransp[*ptrCount] = arrS[j];
                ptrDiff[*ptrCount] = arrS[j];
                *ptrCount += 1;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (arrF[i] != ptrDiff[i])
        {
            ptrTransp[*ptrCount] = arrF[i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (arrS[i] != ptrDiff[i])
        {
            ptrTransp[*ptrCount] = arrS[i];
        }
    }
}

int main()
{
    firstNumber();
    twoNumber();
    threeNumber();
}