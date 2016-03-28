#include"head.h"
void find_repeat_substr(string s) {
	
	
	//cin >> s;
	int n = s.length();
	vector<int> tag(n,0);
	for (int i = 0; i < n-1; i++)
	
		if (s[i] == s[i + 1])
		{
			tag[i] = 1;
			tag[i + 1] = 1;
		}

	cout << s << endl;
	string tems = "";
	for (int i = 0; i < n; i++)
	{
		
		if (tag[i] == 1)
			cout << s[i];
			
	}

}