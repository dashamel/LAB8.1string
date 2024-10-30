#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string> 
using namespace std;

int CountPairs(const string s) 
{
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find("aa", pos)) != -1 ||
        (pos = s.find("bb", pos)) != -1 ||
        (pos = s.find("cc", pos)) != -1) 
    {
        count++;
        pos += 2;  
    }
    return count;
}

string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find("aa", pos)) != -1)  
    {
        s.replace(pos, 2, "***"); 
        pos += 3; 
    }

    pos = 0; 
    while ((pos = s.find("bb", pos)) != -1)
    {
        s.replace(pos, 2, "***");
        pos += 3;
    }

    pos = 0; 
    while ((pos = s.find("cc", pos)) != -1) 
    {
        s.replace(pos, 2, "***");
        pos += 3;
    }

    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "String contained " << CountPairs(str) << " groups of 'aa', 'bb' or 'cc'" << endl;
    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}
 