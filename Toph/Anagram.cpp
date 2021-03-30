// C++ program to check whether two strings are anagrams

#include <bits/stdc++.h>
using namespace std;

// function to check whether two strings are anagram
bool Anagram(string str1, string str2)
{
	// Get lengths of both strings
	int l1 = str1.length();
	int l2 = str2.length();

	// If length of both strings is not same, then they
	// cannot be anagram
	if (l1 != l2)
		return false;

	// Sort both the strings
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	// Compare sorted strings
	for (int i = 0; i < l1; i++){
		if (str1[i] != str2[i]){
			return false;
		}
	}
	return true;
}

// Driver code
int main()
{
	string s1,s2;
	cin >> s1 >> s2;

	// Function Call
	if(Anagram(s1,s2)){

		cout<<"Yes"<<endl;
	}
	else{

		cout<<"No"<<endl;
	}

	return 0;
}
