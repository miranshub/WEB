#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    vector<string> strs;
    string str11 = ".img-";
    string str12 = " {";
    string str21 = "\tbackground: url(./images/image-";
    string str22 = ".jpg);\n}";

    for (int i = 0; i < 100; i++)
    {
        cout << str11 << i + 6 << str12 << endl;
        cout << str21 << i + 6 << str22 << endl;
    }
    

    return 0;
}