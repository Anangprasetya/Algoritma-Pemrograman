#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
// int main() {
 
// string s("ABCDEF");
// do {
//     cout << s << endl;
// } while (next_permutation(s.begin(), s.end()));
 
// 	return 0;
// }

int main(){
	string s[3] = {"a", "b", "c"};
	string baru;
	int n = 3;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (s[i] == s[j] || s[j] == s[k] || s[i] == s[k])
					continue;

				baru = s[i] + s[j] + s[k];
				cout << baru << endl;
			}
		}
	}
	return 0;
}
