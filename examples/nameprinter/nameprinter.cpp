#include <PRPGL/namegen.h>

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    string line;
    srand(time(NULL));
    while(line!="quit"){
        cout << "Printing names, type quit to quit, press enter to continue\n";
        for(int i=0; i<10; ++i)cout << NameGen::getName() << endl;
        getline(cin, line);
    }
    return 0;
}
