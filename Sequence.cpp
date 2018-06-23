#include "Sequence.h"

int Sequence::length()
{
    f.open(file.data());
    int length=0;
    char dna;
    while( f >> dna )
{
    length++;
}
    cout <<"The length of dna is : " <<  length <<endl;
    f.close();
    return length;
}

int Sequence::numberOf(char base)
{
    f.open(file.data());
    if((base!='A')&&(base!='C')&&(base!='T')&&(base!='G'))
    cout << "The input is error." << endl;
    int number=0;
    char dna;
    char b = base;
    while( f >> dna )
   {
      if(b == dna) 
     number++;
   }
    cout << "The dna has " << number << " " << base <<endl;
    f.close();
    return 0;
}

string Sequence::longestConsecutive()
{


