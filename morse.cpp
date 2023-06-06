#include <iostream>

using namespace std;

int main()
{
    int f[28][2] = 
    {
        {5, 20}, {18, 23}, {27, 27}, {27, 27}, {2, 24}, {9, 1}, {27, 27},
        {26, 17}, {27, 27}, {19, 21}, {27, 27}, {3, 25}, {27, 27}, {7, 15},
        {4, 11}, {27, 27}, {27, 27}, {27, 27}, {12, 27}, {8, 22}, {14, 13},
        {6, 27}, {27, 27}, {16, 10}, {27, 27}, {27, 27}, {27, 27}, {27, 27}
    };
    int q;
    char c;
    char temp;
    string input = "";
    string output = "";
    string morse = "";

    do
    {
        cout << endl << "==================================================" << endl;
        cout << "KODE MORSE : " << input;
        cin >> c;
        input += c;

        if (c == 'C')
        {
            input.clear();
            output.clear();
            morse.clear();
            temp = '!';
            cout << "DEKRIPSI   : " << endl;
            cout << "==================================================" << endl;
            continue;
        }
        else if (c == '\'' || c == '"')
        {
            morse = "";
            output += temp;
            if (c == '"') output += ' ';
            temp = '!';
            cout << "DEKRIPSI   : " << output << endl;
            cout << "==================================================" << endl;
            continue;
        }
        else
        {
            morse += c;
        }

        q = 0;
        for(char m : morse)
        {
            if (m == '.')
            {
                q = f[q][0];
            }
            else if (m == '-')
            {
                q = f[q][1];
            }
            else
            {
                q = 27;
            }
        }

        if (q == 27)
        {
            temp = '?';
        }
        else
        {
            temp = (char)(64 + q);
        }

        cout << "DEKRIPSI   : " << output;
        if (temp != '!') cout << temp;
        cout << endl << "==================================================" << endl;
    }
    while (0 < 1);
    
    return 0;
}