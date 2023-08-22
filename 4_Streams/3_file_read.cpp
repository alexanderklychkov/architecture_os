#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream ifile("4_Streams/test.txt", ios::in);

    if (ifile.is_open())
    {
        string line;
        while (ifile >> line)
        {
            cout << line << '\n';
        }
    }

    return 0;
}