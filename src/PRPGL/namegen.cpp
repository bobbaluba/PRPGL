#include <PRPGL/namegen.h>

#include <cstdlib>
#include <string>

using namespace std;

char randAlpha(){
    return 'a'+rand()%26;
}

const int NUMVOCALS=6;
const char VOCALS[NUMVOCALS+1] = "aeiouy";

char randVocal(){
    return VOCALS[rand()%NUMVOCALS];
}

bool isVocal(char c){
    for(int i=0; i<NUMVOCALS; i++){
        if(c==VOCALS[i])return true;
    }
    return false;
}

bool isConsonant(char c){
    if(isVocal(c))return false;
    else return true;
}

namespace NameGen{
    string getName(){
        string name;
        name.push_back(randAlpha());
        for(int i=1; i<3 || rand()%10<7; i++){
            char c = '?';
            if(isConsonant(name[i-1])){
                c=randVocal();
            } else {
                c=randAlpha();
            }
            name.push_back(c);
        }
        return name;
    }
}
