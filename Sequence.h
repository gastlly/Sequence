#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <algorithm>
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
    string sequence;
    string file;
    ifstream f;
};
#endif
