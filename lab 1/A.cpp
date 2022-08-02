#include <iostream>
#include <fstream>

int main()
{
    int a, b;
    ifstream fin("a+b.in");
    ofstream fout("a+b.out");
    fin >> a >> b;
    fout << a + b << endl;
    fin.close();
    fout.close();
    return 0;
}
