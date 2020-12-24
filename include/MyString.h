#include <iostream>
using namespace std;

class MyString
{
    friend ostream& operator<<(ostream &out, MyString &s);
    friend istream& operator>>(istream &in, MyString &s);
public:
    MyString(int len = 0);
    MyString(const char *p);
    MyString(const MyString& s);
    ~MyString();

public:
    MyString& operator=(const char *p);
    MyString& operator=(const MyString& s);
    char& operator[](int index);

public:
    bool operator==(const char *p) const;
    bool operator==(const MyString& s) const;
    bool operator!=(const char *p) const;
    bool operator!=(const MyString& s) const;

public:
    int operator>(const char *p);
    int operator>(const MyString& s);
    int operator<(const char *p);
    int operator<(const MyString& s);

public:
    char *c_str()
    {
        return m_p;
    }
    const char *c_str2()
    {
        return m_p;
    }
    int length()
    {
        return m_len;
    }

private:
    unsigned int m_len;
    char *m_p;
};