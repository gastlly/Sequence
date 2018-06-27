#include "Sequence.h"
#include <vector>
#include <cstdio>
#include <cstdlib>
#include "string.h"
#define MAXN 1200000

int pstrcmp(const void *a,const void *b)
{
    return strcmp((char*)*(int*)a,(char*)*(int*)b);
} 

int comlen(char *p,char *q)
{
    int i = 0;
    while(*p && (*p++ == *q++))
         i++;
    return i;
}

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
    f.open(file.data());
    string tmp;
    getline(f,sequence);
    while(getline(f,tmp))
   {
     sequence+=tmp;
   }
    char lon = sequence[0];
    char longest = sequence[0];
    int lon1 = 1;
    int lon2 = 1;
    for(int i=1;i<sequence.length();i++)
   {
     if(lon == sequence[i])
        lon1++;
     else
     {
        if(lon1>lon2)
        {
           lon2 = lon1;
           longest = lon;
        }
      lon = sequence[i];
      lon1 = 1;
     }
   }
    cout << "The longest sequence is " << lon2 << longest << endl;    
    for( ;lon2>0;lon2--)
   {
    cout << longest;
   }
    cout << endl;       
    f.close();
    return sequence;
}

string Sequence::longestRepeated()
{
    f.open(file.data());
    char *a[MAXN];
    char ch;
    char c[MAXN];
    int i,temp;
    int n=0;
    int maxlen = 0,maxi =0;
    while(f >> ch)
    {
     a[n]=&c[n];
     c[n++]=ch;
    }//建立后置数组
    c[n]='\0';
    qsort( a, n, sizeof(char*),pstrcmp);
    for(i = 0; i<n-1; ++i)
    {
     temp = comlen( a[i],a[i+1]);
     if( temp>maxlen )
      {
        maxlen = temp;
        maxi = i;
      }
    }
    cout << maxlen << a[maxi] << endl;
    f.close();
    return 0;
} 
