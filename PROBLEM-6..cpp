#include<iostream>
#include<vector>
using namespace std;

class Matrix {
public:
    vector<vector<int>> a;
    
    Matrix operator+(const Matrix& other) {
        Matrix result;
        int rows = a.size(), cols = a[0].size();
        result.a.resize(rows, vector<int>(cols));
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.a[i][j] = a[i][j] + other.a[i][j];
            }
        }
        return result;
    }
};

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int rows, cols;
        cin >> rows >> cols;
        
        Matrix m1, m2;
        m1.a.resize(rows, vector<int>(cols));
        m2.a.resize(rows, vector<int>(cols));
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> m1.a[i][j];
            }
        }
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> m2.a[i][j];
            }
        }
        
        Matrix result = m1 + m2;
        
        for (const auto& row : result.a) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
