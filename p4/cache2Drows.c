/* Name: Chang Won Choi
 * CS login: cchoi
 * Section(s): 001
 */

int arr2D[3000][500];
// create 2D array

int main() {
	for (int row = 0; row < 3000; row++) {
		for (int col = 0; col < 500; col++) {
			arr2D[row][col] = row + col;
		}
	} // go through the arrays in column wise order
	
	return 0;
}
