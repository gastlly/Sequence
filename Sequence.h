#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>
#include <fstream>
using namespace std;

class Sequence
{
public:
    Sequence(string filename)
     : file(filename)
    {}
    int length();
    int numberOf(char base);
    string longestConsecutive();
    string longestRepeated();
private:
    string file;
    ifstream f;
};
#endif
