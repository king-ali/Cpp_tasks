#include <iostream>
#include <math.h>
using namespace std;

void even_odd()
{
    int n;

    cout << "Enter integer ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is even ";
    else
        cout << n << " is odd ";
}

void vowel()
{

    char c;

    cout << "Enter alphabet: ";
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << c << " is a vowel ";
    }
    else
        cout << c << " is a consonant ";
}

void quadtric()
{

    float a, b, c, x1, x2, discri, realP, imagP;
    cout << "Enter a, b and c ";
    cin >> a >> b >> c;
    discri = b * b - 4 * a * c;

    if (discri > 0)
    {
        x1 = (-b + sqrt(discri)) / (2 * a);
        x2 = (-b - sqrt(discri)) / (2 * a);
        cout << "Roots are " << endl;
        cout << "x1 is" << x1 << endl;
        cout << "x2 is " << x2 << endl;
    }

    else if (discri == 0)
    {
        x1 = -b / (2 * a);
        cout << "Roots are " << x1 << endl;
    }

    else
    {
        realP = -b / (2 * a);
        imagP = sqrt(-discri) / (2 * a);
        cout << "Roots are " << endl;
        cout << "x1 = " << realP << "+" << imagP << "i" << endl;
        cout << "x2 = " << realP << "-" << imagP << "i" << endl;
    }
}

void sum_no()
{
    int n;
    int sum = 0;
    cout << "Enter no ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum = sum + i;
    }

    cout << "Sum is " << sum;
}

void leap_y()
{
    int year;

    cout << "Enter year ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " leap year";
            }
            else
            {
                cout << year << " not leap year.";
            }
        }
        else
        {
            cout << year << " not leap year.";
        }
    }
    else
    {
        cout << year << " not leap year.";
    }
}

void multi()
{
    int n;

    cout << "Enter no. ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
}

void reverse_no()
{
    int n, r;
    int s = 0;
    cout << "Enter no ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }

    cout << "Sum is " << s;
}

void armstrong()
{
    int n = 0, r = 0, s = 0, t = 0;
    cout << "Enter no. ";
    cin >> n;
    t = n;

    while (n != 0)
    {
        r = n % 10;
        s = s + r * r * r;
        n = n / 10;
    }
    if (s == t)
    {
        cout << "Armstrong " << s << endl;
    }
    else
    {
        cout << " Not Armstrong " << s << endl;
    }
}

void palimdrom()
{
    int n = 0, r = 0, s = 0, t = 0;
    cout << "Enter no." << endl;
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    if (s == t)
    {
        cout << "Palimdrom " << s << endl;
    }
    else
    {
        cout << "Not Palimdrom " << s << endl;
    }
}

void calculator()
{

    char p;
    float n1, n2;

    cout << "Enter operation ";
    cin >> p;

    cout << "Enter two numbers ";
    cin >> n1 >> n2;

    switch (p)
    {

    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;

    case '*':
        cout << n1 * n2;
        break;

    case '/':
        cout << n1 / n2;
        break;

    default:
        cout << "Operation not correct";
        break;
    }
}

void pyramid_pattern()
{
    int n;

    cout << "Enter number ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void fictorial()
{
    int n = 0;
    cout << "Enter no. ";
    cin >> n;
    int f;
    f = n;
    for (int i = 1; i < n; i++)
    {
        f = f * i;
    }
    cout << f << endl;
}

void fibonacci()
{
    int n1 = 0, n2 = 1, n3, i;
    cout << n1 << " " << n2 << " ";
    for (i = 0; i <= 10; i++)
    {

        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}

int main()
{

    // even_odd();
    // vowel();
    // quadtric();
    // sum_no();
    // leap_y();
    // multi();
    // reverse_no();
    // armstrong();
    // pyramid_pattern();
    // calculator();
    // fictorial();
    // fibonacci();
    palimdrom();

    return 0;
}