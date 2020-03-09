#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int j=0;
    string s;
    vector<char> v;

    getline(cin, s);

    for(int i=0; s[i]; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            v[j] = s[i];
            j++;
        }
    }

    int l = v.size();

    for(int i=0, j=l-1; i < l; i++, j--)
    {
        if(v[i] != v[j])
        {
            cout << "N";
            return 0;
        }
    }
    cout << "S";

    return 0;
}