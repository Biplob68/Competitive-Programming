#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


//function to find maximum XOR

int maximizingXor(int l, int r) {
    int val, max_val = 0;
    
    for(int i=l; i<=r; i++){
        for(int j=l; j<=r; j++){
            val = i ^ j;
            
            if(val > max_val) max_val = val;
        }
    }
    
    return max_val;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string r_temp;
    getline(cin, r_temp);

    int r = stoi(ltrim(rtrim(r_temp)));

    int result = maximizingXor(l, r);

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
