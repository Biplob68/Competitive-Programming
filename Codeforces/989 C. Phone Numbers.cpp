#include<bits/stdc++.h>

using namespace std;


bool compare(string s1, string s2)
{
    return s1.size() < s2.size();
}


// function to check if a string ends with another string
bool cmp(string s1, string s2)
{
    int len1, len2, i;
    len1 = s1.size();
    len2 = s2.size();

    for(i=0; i<len1; i++){
        if(s1[len1-1-i] != s2[len2-1-i] ) return false;
    }
    return true;
}

int main()
{
    int n, m, i, j;

    string name, number;

    map < string , vector <string> > phone_book;
    map < string , vector<string> > ::iterator it;

    scanf("%d", &n);

    // for input name and number into map
    for(i=0; i<n; i++){

        cin >> name;
        cin >> m;

        while(m--){
            cin >> number;
            phone_book[name].push_back(number);
        }
    }

    // output total distinct name into map
    cout << phone_book.size() << endl;


    vector < string > v;

    // iterator that point start address of the map
    //it = phone_book.begin();

    for(it=phone_book.begin(); it!=phone_book.end(); it++){

            v.clear(); // delete all elements of vector

            v = it->second; // copy vector elements into another vector
            sort(v.begin(), v.end(), compare); // sort element as length

            for(i=0; i<v.size()-1; i++){
                for(j=i+1; j<v.size(); j++){
                    if( cmp(v[i], v[j]) ){
                        //v.erase(v.begin()+i);
                        // if a string ends with another string
                        // then set the string as 0
                        v[i] = "#" ;
                        break;
                    }
                }
            }

            // print name of the friend
            cout << it->first << " " ;

            int cnt = 0;

            // count total distinct phone number
            for(i=0; i<v.size(); i++){
                if(v[i] != "#") cnt++;
            }

            // print total distinct phone number
            cout << cnt << " ";

            // print all distinct phone number
            for(i=0; i<v.size(); i++){
                if(v[i] != "#") cout << v[i] << " ";
            }
            printf("\n");
    }

    return 0;
}
