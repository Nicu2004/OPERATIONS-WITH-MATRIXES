This project provides a set of functions to perform various operations on an n x n matrix. The operations include reading a matrix, displaying the matrix, showing elements based on specific conditions, and finding the maximum or minimum values in the matrix.

Features
Read Matrix: Read an n x n matrix from user input.

Display Matrix: Display the entire matrix.

Show Elements on Even Rows: Display elements located on even rows.

Show Elements on Odd Columns: Display elements located on odd columns.

Show Elements Divisible by a Given Value: Display elements that are divisible by a user-specified value.

Find Maximum Value: Find and display the maximum value in the matrix.

Find Minimum Value: Find and display the minimum value in the matrix.

Functions
void read_matrix(int n, int v[101][101])
Reads an n x n matrix from user input.

void show_on_p(int n, int v[101][101], int p, int s)
Displays elements of the matrix based on the specified parameters:

p == 0 && s == 1: Display the entire matrix.

p == 1 && s == 3: Display elements on odd columns.

p == 2 && s == 2: Display elements on even rows.

p == 0 && s == 5: Display the maximum value in the matrix.

p == 0 && s == 6: Display the minimum value in the matrix.

p != 0 && s == 4: Display elements divisible by the value p.

License
This project is my property, however feel free to use, instead you shoul use my name at the end of code @Nicu2004.
