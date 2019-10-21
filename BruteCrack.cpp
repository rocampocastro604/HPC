#include <iostream>
#include <string>
#include <time.h>

using namespace std;

string pass;
string temporal;
string cracked;
int length;
int r = 0;
time_t t0;
double seconds_since_start;
bool cancel = false;
char chars[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string Crack(string pass);

int main()
{
	cout << "Enter a string: " << endl;
    cin >> pass;
    t0 = time(0);
	Crack(pass);
    cout << "The pass is: " << cracked << endl;    
    seconds_since_start = difftime( time(0), t0);
    cout << "Time: " << seconds_since_start << " seconds"<< endl;
}

string Crack (string pass) {
    length = sizeof(chars);
    for(int i = 0; i <= length; i++) {
        cracked = cracked + chars[i];
        for(int j = 0; j <= length; j++) {
            cracked = cracked + chars[j];
            for(int k = 0; k <= length; k++) {
                cracked = cracked + chars[k];
                for(int z = 0; z <= length; z++) {
                    cracked = cracked + chars[z];
                    cout << "[" << cracked << "]" << endl;
                    if(pass == cracked) {
                        return cracked;
                    }
                    cracked.erase (3,1);
                }
                cracked.erase (2,1);
            }
            cracked.erase (1,1);
        }
        cracked.erase (0,1);
    }
}
