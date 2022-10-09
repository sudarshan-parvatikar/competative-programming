#include <iostream>

using namespace std;

int main() {
    int c;
    string s;
    cin >> c;      // not used as condn is: Let's consider a word too long, if its length is strictly more than 10 characters.
    while(cin >> s){
        if(s.length() <= 10){
            cout << s << endl;
            continue;
        }
        cout << s[0] << s.length() - 2 << s[s.length()-1] << endl;
    }
}