#include <iostream>
#include <string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fastio;

    int numRespondents;
    cin >> numRespondents;

    cin.ignore();

    int earthTeam = 0, i1c5lTeam = 0, anotherTeam = 0;
    for (int i = 1; i <= numRespondents; ++i) {
        string response;
        getline(cin, response);

        if (response.find("blue") != string::npos && response.find("black") != string::npos) 
            earthTeam += 1;
        else if (response.find("white") != string::npos && response.find("gold") != string::npos) 
            i1c5lTeam += 1;
        else 
            anotherTeam += 1;
    }

    cout << fixed;
    cout.precision(10);
    double percent = 100.0;
    cout << percent * earthTeam / numRespondents << '\n' 
         << percent * i1c5lTeam / numRespondents << '\n' 
         << percent * anotherTeam / numRespondents;
}
