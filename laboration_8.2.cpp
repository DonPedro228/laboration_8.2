#include <iostream>
#include <cstring>

using namespace std;

void Modificate(char* str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' && (str[i + 1] == '.' || str[i + 1] == ',' || str[i + 1] == ':' || str[i + 1] == ';' || str[i + 1] == '-')) {
            int k = i;
            while (str[k] == ' ') {
                memmove(&str[k], &str[k + 1], strlen(&str[k + 1]) + 1);
            }
            i--;
        }
        else if ((str[i] == '.' || str[i] == ',' || str[i] == ':' || str[i] == ';' || str[i] == '-') && str[i + 1] == ' ') {
            int j = i + 1;
            while (str[j] == ' ') {
                memmove(&str[j], &str[j + 1], strlen(&str[j + 1]) + 1);
            }
           
        }
        else {
            i++;
        }
    }
}

int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "Original string:" << endl;
    cout << str << endl;

    Modificate(str);

    cout << "Modified string:" << endl;
    cout << str << endl;

    return 0;
}