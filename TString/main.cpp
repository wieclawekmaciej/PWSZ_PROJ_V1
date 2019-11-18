#include <iostream>
#include "tstring.h"
using namespace std;

TString fun(const char* s) {
    return TString(s);
}


auto main() {
    TString s1;
    TString s2("Dzien dobry");
    TString s3 = move(s2);
    s1 = fun("drugi obiekt w locie"); // move(s3);
    for ( auto c : s1 ) cout << c << "-";
    for (size_t i=0; i<s1.size(); ++i) cout << s1[i] <<"=";
    cout << endl;
    cout << "-------------------" << endl;
}