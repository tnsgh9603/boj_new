#include <iostream>  
#include <vector> 
#include <string>  
#include <sstream>  
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int plus_x[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    int plus_y[8] = {2, 1, -1, -2, -2, -1, 1, 2};

    int T;
    cin >> T;
    cin.ignore();  
    for (int t = 0; t < T; t++) {
        vector<string> board(5);
        for (int j = 0; j < 5; j++) {
            getline(cin, board[j]);
        }

        bool valid = true;
        int knight = 0;
        for (int y = 0; y < 5; y++) {
            if (!valid) break;

            for (int x = 0; x < 5; x++) {
                if (!valid) break;

                if (board[y][x] == 'k') {
                    knight++;

                    for (int i = 0; i < 8; i++) {
                        int nx = x + plus_x[i];
                        int ny = y + plus_y[i];

                        if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;

                        if (board[ny][nx] == 'k') {
                            valid = false;
                            break;
                        }
                    }
                }
            }
        }

        if (valid && knight == 9) cout << "valid\n";
        else cout << "invalid\n";

        if (t != T - 1) cin.ignore();  
    }

    return 0;
}
