// https://www.beecrowd.com.br/judge/en/problems/view/2727

#include <iostream>

using namespace std;
    
int main(int argc, char** argv) {
	int N, space, c, count;
	string str;

	while (cin >> N) {
		getline(cin,str);
		while(N--) {
			getline(cin,str);
			space = 0;

			for (int i = 0 ;i < str.length(); i++) {
				if(str[i]== ' ')
                    space++;
			}
			count = 96;

			for (int i = 0; i < str.length(); i++) {
				if (str[i]==' ')
                    break;
				else 
                    count++;
			}

			if(space == 0)
			    printf("%c\n",count);
			else {
				if (space == 1) 
                    c = 3;
				else if (space == 2) 
                    c = 6;
				else if (space == 3)
                    c = 9;
                else if (space == 4)
                    c = 12;
                else if (space == 5)
                    c = 15;
                else if (space == 6)
                    c = 18;
                else if (space == 7)
                    c = 21;
				else if (space == 8)
                    c = 24;

				printf("%c\n",c+count);	
			}
		}
	}
	return 0;
}