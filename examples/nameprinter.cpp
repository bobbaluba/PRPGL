#include "PRPGL/namegen.h"

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
        for(int i=0; i<10; ++i)cout << NameGen::getName() << endl;
        getline(cin, line);
    }
    return 0;
}
