#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    ifstream ifile("4_Streams/Homework/coordinates.txt", ios::in);

    if (ifile.is_open())
    {
        string line;
        int min_lat = 50, max_lat = 80, min_lon = 20, max_lon = 45;
        double lat, lon;

        while (getline(ifile, line))
        {
            stringstream ss(line);
            ss.ignore(1); // skip '('
            ss >> lat;
            ss.ignore(2); // skip ", "
            ss >> lon;

            if (min_lat <= lat && lat <= max_lat
             && min_lon <= lon && lon <= max_lon)
            {
                cout << lat << ", " << lon << endl;
            }
        }
    }

    return 0;
}