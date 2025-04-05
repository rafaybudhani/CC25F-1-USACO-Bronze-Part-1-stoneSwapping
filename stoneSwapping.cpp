#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<char>> rotate90(const vector<vector<char>>& grid) {
    int n = grid.size();
    vector<vector<char>> rotated(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            rotated[j][n-1-i] = grid[i][j];
    return rotated;
}

vector<vector<char>> reflect(const vector<vector<char>>& grid) {
    int n = grid.size();
    vector<vector<char>> reflected(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            reflected[i][n-1-j] = grid[i][j];
    return reflected;
}

bool compare(const vector<vector<char>>& a, const vector<vector<char>>& b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;

    vector<vector<char>> original(n, vector<char>(n));
    vector<vector<char>> transformed(n, vector<char>(n));

    // Read input
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> original[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> transformed[i][j];

    // Check all transformations
    vector<vector<char>> rot90 = rotate90(original);
    vector<vector<char>> rot180 = rotate90(rot90);
    vector<vector<char>> rot270 = rotate90(rot180);
    vector<vector<char>> reflected = reflect(original);
    vector<vector<char>> ref_rot90 = rotate90(reflected);
    vector<vector<char>> ref_rot180 = rotate90(ref_rot90);
    vector<vector<char>> ref_rot270 = rotate90(ref_rot180);

    if (compare(transformed, rot90)) cout << "1" << endl;
    else if (compare(transformed, rot180)) cout << "2" << endl;
    else if (compare(transformed, rot270)) cout << "3" << endl;
    else if (compare(transformed, reflected)) cout << "4" << endl;
    else if (compare(transformed, ref_rot90) || compare(transformed, ref_rot180) || compare(transformed, ref_rot270)) cout << "5" << endl;
    else if (compare(transformed, original)) cout << "6" << endl;
    else cout << "7" << endl;

    return 0;
}
