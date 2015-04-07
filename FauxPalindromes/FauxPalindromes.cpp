#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <set>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define VIT(i, v) for (i = 0; i < v.size(); i++) 
#define IT(it, ds) for (it = ds.begin(); it != ds.end(); it++)
#define FUP(i, n) for (i = 0; i < n; i++)

#define O1(v) cout << v << endl
#define O2(v1, v2) cout << v1 << " " << v2 << endl
#define O3(v1, v2, v3) cout << v1 << " " << v2 << " " << v3 << endl

class FauxPalindromes {
	public:
		string classifyIt(string word);
		string Freverse (string word);
		string Fsimple (string word);
};

string FauxPalindromes::classifyIt(string word)
{


	string simplex;
	string rev;

 //case1 reverse is same as word
	if (Freverse(word) == word){
		return "PALINDROME";
	}
//case2: simplify word so that repeated letters are gone
	simplex = Fsimple(word);
	if (Freverse(simplex) == simplex){
		return "FAUX";
	} 

//case3: every other case
	return "NOT EVEN FAUX";

}

string FauxPalindromes::Freverse(string word)
{
	int i;
	string s;
	int j=0;
	for ( i = word.size()-1 ; i>=0; i--) {
		s +=word[i];
		j++;
	}

	return s.c_str();
}

string FauxPalindromes::Fsimple(string word)
{
	int i;
	string s="";
	char last = 'a';
	int j=0;
	for ( i = 0; i <word.size();  i++) {
 

		if (last != word[i]){
			s +=word[i];
			j++;
			last=word[i];
		}
	}
  
	return s.c_str();
}
