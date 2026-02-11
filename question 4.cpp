#include <iostream>
using namespace std;

int main()
 {
    int matrix[3][3]; 

    
    cout << "Enter values for 3x3 matrix:\n";
    for (int row = 0; row < 3; row++)
	 {
        for (int col = 0; col < 3; col++)
		 {
            cout << "Enter value for element [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }

    cout << "\nThe 3x3 matrix is: \n";
    for (int row = 0; row < 3; row++) 
	{
        for (int col = 0; col < 3; col++)
		 {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
