#include <fstream>

int main()
{
    std::ofstream ofile("4_Streams/test.txt", std::ios::out);

    if (ofile.is_open())
    {
        ofile << "Hello, world!";
    }

    return 0;
}