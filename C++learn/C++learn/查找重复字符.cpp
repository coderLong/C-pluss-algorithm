#include"head.h"
char findFisrtRepeatChar(string s, int n) {
	cout << s << endl;
	map<char, int>charmap;
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << endl;
		charmap[s[i]]++;
		cout << s[i] << " " << charmap[s[i]] << endl;
		if (charmap[s[i]]>1)
			return s[i];
	}
	
}
