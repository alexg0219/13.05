#include <iostream>

using namespace std;

int main()
{

    int x1, y1, x2, y2,x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if ((x1 == x2 && x1 == x3 && x1 == x4) || (y1 == y2 && y1 == y3 && y1 == y4))
    {
        cout << "YES";
        return 0;
    }

    double  k1 = (x2 - x1) / (double)(y2 - y1);
    double k2 = (x4 - x3) / (double)(y4 - y3);

    if (k1 == k2)   
    {
        cout << "NO";
        return 0;
    }
    else
    {
        int a = x2 - x1;
        int b = y2 - y1;
        int c = x4 - x3;
        int d = y4 - y3;

        if (c == 0 && x3 >= x1 && x3 <= x2 && (y3 <= y1 || y3 <= y2))
        {
            cout << "YES";
        }
        else
        {
            double  x = (b * c * x1 - a * c * y1 - a * d * x3 + a * c * y3) / (double)(b * c - a * d);
            double y = ((d * x - d * x3) + c * y3) / (double)c;
  
            if ((x >= x1 && x <= x2 && x >= x3 && x <= x4) && (((y >= y1 && y <= y2) || (y <= y1 && y >= y2)) && ((y >= y3 && y <= y4) || (y <= y3 && y >= y4))))
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
    }

}