#include <bits/stdc++.h>
using namespace std;

int ptrn1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int ptrn4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int ptrn5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int ptrn7(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn8(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn11(int n)
{
    int num1 = 1;
    for (int i = 1; i <= n; i++)
    {
        int num2 = 1;
        for (int j = 0; j < i; j++)
        {
            num2 = (i + j) & 1;
            cout << num2 << " ";
        }
        cout << endl;
    }
}

int ptrn12(int n)
{
    int spaces = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        spaces -= 2;
    }
}

int ptrn13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int ptrn14(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

int ptrn15(int n)
{

    for (int i = n; i >= 1; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

int ptrn16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}

int ptrn17(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int bp = (2 * i + 1) / 2;

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= bp)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int ptrn18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int ptrn19(int n)
{
    int inis = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
        inis += 2;
    }

    inis = (2 * n - 2);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
        inis -= 2;
    }
}

int ptrn20(int n)
{

    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int star = i;

        if (i > n)
        {
            star = 2 * n - i;
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
        if (i < n)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
    }
}

int ptrn21(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int ptrn22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            int t = i;
            int b = j;
            int r = (2 * n - 2) - j;
            int l = (2 * n - 2) - i;

            cout << (n - min(min(t, b), min(l, r)));
        }
        cout << endl;
    }
}

int main()
{
    int a = 5;
    ptrn21(a);

    return 0;
}