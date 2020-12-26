#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    string result="";
    int months;
    if(year<=1917){// JULIAN CALENDAR
        if(year%4==0){// leap year
            months=31+29+31+30+31+30+31+31; // 256/30=8 months(244 days)
            result=to_string(256-months)+".09."+to_string(year); // 256-244=12
        }else{// non-leap year
            months=31+28+31+30+31+30+31+31; // 256/30=8 months(243 days)
            result=to_string(256-months)+".09."+to_string(year);// 256-243=13
        }
    }else if (year==1918) {// JULIAN->GREGORIAN
        // months=31+15+31+30+31+30+31+31=230
        // 256-230=26
        result+="26.09.1918";
    }else{ // GREGORIAN CALENDAR
        if(year%400==0 || (year%4==0 && year%100!=0)){// leap year
            months=31+29+31+30+31+30+31+31; // 256/30=8 months(244 days)
            result=to_string(256-months)+".09."+to_string(year); // 256-244=12
        }else{//NON-leap year
            months=31+28+31+30+31+30+31+31;// 256/30=8 months(243 days)
            result=to_string(256-months)+".09."+to_string(year);// 256-243=13
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
