// Project1.cpp : 
// Your names: Group 2: Dominic Le / Quan Le / Minh Le
//
#include <string>
#include <set>
using std::string;
/*
   You must complete the function countWords, which will count words in a string(s).

   Word separator: 
	   Words can be separated by space(s), punctuation, new line ('/n').
	   If a word is finished by '-' and is followed by a new line, 
	   the next word is part of the last word on the previous line 
	   and count only as one(hyphenated).

	uniqueWord: if true, only unique word are counted. 
	            A repeated word, will only count once.

	caseSensitive: if true, when comparing word for uniqueWord, the comparaison is
				   case sensitive, otherwise it is not.

	Project1.cpp : you must implement the funciton countWords, you cannot change its signature

	Project1.h    : the declaration of countWords

	Project1Test  : unit tests to test countWords
	                you must add 4 additional unit tests(implemented in yourTests).  Each test must verify 
					additional logic that was not covered in the previous tests. Comment what specifically
					each of your additionnal tests is testing for.

	Grading       : 11 unit tests - EmptyString(already implemented) = 10 units test
	                10 unit tests x 7 pts each           = 70
					4 additional unit tests x 5 pts each = 20
					program structure                    = 10
					total                                = 100
	Your grade will be calculated on the last test your program manage to successfully execute, based on the 
	order in Project1Test.
	
	Program that do not compile will receive a grade of 0.

	Submission    : one submission per team
*/

bool isWordSeparator(char & c) {
	if ('A'<=c && c<='Z') return false;
	if ('a'<=c && c<='z') return false;
	return true;
}
void lowerCase( char &x){
	if (x>'Z' || x<'A') return;
	x= (x-'A'+'a');
}
string clearHyphenate(string s){
	static string hyphen("-\n");
	while (s.find(hyphen)!=string::npos)
	{
		unsigned i=s.find(hyphen);
		s.erase(i,2);
	}
	return s;
}
unsigned int countWords(string s, bool caseSensitive=false, bool uniqueWord=false) {

	int wordCount = 0;
	s+=' '; // this is to cover if there is a word at the end
	bool isWord = false;
	bool ishyphenate = false;
	int startWord=0;
	std::set<string> uniqueWords;
	if (s.empty()) {
		return 0;
	}
	if (!caseSensitive)
	for (unsigned int x = 0; x < s.length(); x++) lowerCase(s[x]);
	for (unsigned int x = 0; x < s.length(); x++) {
		if ( isWordSeparator( s.at( x ) ) ) {
			if (x!=s.length()-1 && s.at(x)=='-' && s.at(x+1)=='\n' && !ishyphenate)
			{
				if (isWord) ishyphenate=true;
				continue;
			}
			if (ishyphenate && s.at(x)=='\n'&& s.at(x-1)=='-') {
				continue;
			}
			if (isWord)
			{
				if (uniqueWord) 
					uniqueWords.insert( clearHyphenate(s.substr(startWord,x-startWord)));
				isWord=false;
			}
		}
		else
		{
			if (!isWord)
			{
				isWord=true;
				wordCount++;
				startWord=x;
			}
		}
		ishyphenate=false;
	}
	return (uniqueWord)?(uniqueWords.size()):wordCount;
}


