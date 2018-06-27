#include "Sequence.h"

int main()
{
    Sequence a("dna.txt");
    a.length();
    a.numberOf('A');
    a.numberOf('T');
    a.numberOf('C');
    a.numberOf('G');
    a.longestConsecutive();
    a.longestRepeated();
    return 0;
}
