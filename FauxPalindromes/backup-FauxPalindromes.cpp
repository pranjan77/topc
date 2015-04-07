// BEGIN CUT HERE
// PROBLEM STATEMENT
// A word is a palindrome if it can be read the same forwards and backwards. For example, the strings "ANA", "AAXAA", "Z" and "XYYYYYX" are palindromes (quotes for clarity).

A word is a faux palindrome if, after replacing every group of consecutive equal letters with a single instance of the letter, the resulting word is a palindrome. For example, the string "AAAAANNAA" is a faux palindrome. A detailed explanation why this is a faux palindrome is given below in Example 1.
Other examples of faux palindromes are the strings "AAAAAAAAAAAAAAAXA and "XYX". Note that every palindrome is also a faux palindrome.

You are given a string word. You are asked to classify it.
If word is a palindrome, return "PALINDROME" (quotes for clarity, returned values are case sensitive).
If word is not a palindrome but is a faux palindrome, return "FAUX".
In case word is not a faux palindrome, return "NOT EVEN FAUX".



DEFINITION
Class:FauxPalindromes
Method:classifyIt
Parameters:string
Returns:string
Method signature:string classifyIt(string word)


CONSTRAINTS
-word will contain between 1 and 50 characters, inclusive.
-The characters in word will be upper case letters between 'A' and 'Z', inclusive (quotes for clarity).


EXAMPLES

0)
"ANA"

Returns: "PALINDROME"

"ANA" reads the same from left to right and right to left.

1)
"AAAAANNAA"

Returns: "FAUX"

This is obviously not a palindrome. Now suppose that we replace each group of consecutive equal letters by a single copy of that letter. That is, we change "AAAAA" to "A", "NN" to "N", and "AA" to "A". In this way we will obtain the new string "ANA", which is a palindrome. Hence the original string is a faux palindrome.

2)
"LEGENDARY"

Returns: "NOT EVEN FAUX"

The word "LEGENDARY" already does not contain any group of consecutive equal letters and it is not a palindrome.

3)
"XXXYTYYTTYX"

Returns: "FAUX"

After replacing the groups of consecutive equal letters with a single letter, the string becomes "XYTYTYX". "XYTYTYX" is a palindrome.

4)
"TOPCOODEREDOOCPOT"

Returns: "PALINDROME"

This word contains some groups of consecutive equal letters, but it is already a palindrome without replacing them by single letters.

5)
"TOPCODEREDOOCPOT"

Returns: "FAUX"



6)
"XXXXYYYYYZZXXYYY"

Returns: "NOT EVEN FAUX"



// END CUT HERE
#line 81 "FauxPalindromes.cpp"
#include <string>
#include <vector>
class FauxPalindromes {
	public:
	string classifyIt(string word) {
		
	}
};
