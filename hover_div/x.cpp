#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    vector<string> strs;
    string str11 = "\t\t\t<a href=\"./images/image-";
    string str12 = ".jpg\" target=\"_blank\">";
    string str21 = "\t\t\t\t<div class=\"image img-";
    string str22 = "\"></div>\n\t\t\t</a>\n";

    for (int i = 6; i < 100; i++)
    {
        cout << str11 << i + 1 << str12 << endl;
        cout << str21 << i + 1 << str22 << endl;
    }
    

    return 0;
}