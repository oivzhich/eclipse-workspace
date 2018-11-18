#include <iostream>
using namespace std;

/***
 * Function is used to fill array with random integers
 * arr - array
 * n - size of array
 * a, b - range of values
 */
void fill_array(int *arr, const int &n, const int &a, const int &b) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (b - a + 1) + a;
	}
}

/***
 * Function is used to print array
 * arr - array
 * n - size of array
 */
void print_arr(const int *arr, const int &n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

/***
 * Function is used to exclude even array members
 * Returns new size of array
 * arr - array
 * n - size of array
 */
int exclude_even_num(int *arr, const int &n) {
	int new_size = n;
	for (int i = 0; i < new_size; i++) {
		if (arr[i] % 2 == 0) {
			for (int j = i; j < new_size; j++) {
				arr[j] = arr[j + 1];
			}
			new_size--;
			i--;
		}
	}
	return new_size;
}

/***
 * Function is used to input integer and verify it
 * Program will ask you to enter valid integer untill cin encourage any error
 * num - integer where input should be stored
 */
void enter_int(int &num) {
	bool valid = false;
	while (!valid) {
		valid = true; //Assume the cin will be an integer.
		cin >> num;

		if (cin.fail()) //cin.fail() checks to see if the value in the cin
						//stream is the correct type, if not it returns true,
						//false otherwise.
		{
			cin.clear(); //This corrects the stream.
			cin.ignore(); //This skips the left over stream data.
			cout << "Please enter an Integer only." << endl;
			valid = false; //The cin was not an integer so try again.
		}

	}
}

int main() {
	srand(time(NULL));
	int a, b, n;

	cout << "Enter a: ";
	enter_int(a);

	cout << "Enter b: ";
	enter_int(b);

	cout << "Enter array size n: ";
	enter_int(n);

	int *arr = new int[n];

	fill_array(arr, n, a, b);

	print_arr(arr, n);

	int new_size = exclude_even_num(arr, n);

	print_arr(arr, new_size);

	delete[] arr;
//	system("pause");
	return 0;
}
