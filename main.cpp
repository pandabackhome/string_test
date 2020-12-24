#define _CRT_SECURE_NO_WARNINGS

#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
    MyString s1;
    MyString s2("s2");
    MyString s3 = s2;
    MyString s4 = "s444444";

    s4 = s2;
    s4 = "s222";
    s4[1] = '4';
    cout << s4[1] << endl;
    cout << s4 << endl;

    if (s2 == "aa")
    {
        printf("s2 is not aa\n");
    }
    else
    {
        printf("s2 is aa\n");
    }

    if (s3 == s2)
    {
        printf("s2 equal s1\n");
    }
    else
    {
        printf("s3 not equal s2\n");
    }
    
    int tag = (s3 > "bbbb");
    if (tag > 0)
    {
        printf("s3 > bbbb\n");
    }
    else
    {
        printf("s3 < bbbb\n");
    }
    
    return 0;
}
