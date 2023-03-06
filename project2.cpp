#include <iostream> 
#include <string> 
#include <ctime> 

using namespace std;

int main() {
    srand(time(NULL));
    const int size = 10;
    int matrix[size][size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = rand() % 10;
        }

    }

    cout << "Sum of elements of secondary diagonal: " << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << "    ";  //output
            if (i + j == size - 1) {
                sum += matrix[i][j];
            }

        }
        cout << endl;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}