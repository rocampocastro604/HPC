#include <iostream>
#include <string>
#include <time.h>
#include <omp.h>

using namespace std;

string pass;
string temporal;
string cracked;
int length;
int r = 0;
time_t t0;
bool cancel = false;
char chars[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string Crack (string pass) {
    length = sizeof(chars);
    #pragma omp parallel for private (cracked) schedule (static)
    for(int i = 0; i <= length; i++) {
        if(pass == temporal) exit;
        cracked = cracked + chars[i];
        for(int j = 0; j <= length; j++) {
            if (pass == temporal) break;
            cracked = cracked + chars[j];
            for(int k = 0; k <= length; k++) {
                if(pass == temporal) break;
                cracked = cracked + chars[k];
                for(int z = 0; z <= length; z++) {
                    if(pass == temporal) break;
                    cracked = cracked + chars[z];
                    cout << "[" << cracked << "]" << endl;
                    if(pass == cracked) {
                        temporal = cracked;
                    }
                    cracked.erase (3,1);
                }
                cracked.erase (2,1);
            }
            cracked.erase (1,1);
        }
        
        cracked.erase (0,1);
    }
    return temporal;
}

int main()
{
	cout << "Enter a string: " << endl;
    cin >> pass;
    t0 = time(0);
	Crack(pass);
    cout << "The pass is: " << temporal << endl;
    double seconds_since_start = difftime( time(0), t0);
    cout << "Time: " << seconds_since_start << " seconds"<< endl;
}