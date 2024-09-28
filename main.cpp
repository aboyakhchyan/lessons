// Տրված է քառակուսային մատրից,գտնել գլխավոր անկյունագիծ ներքև տարրերի միջին թվաբանականը

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main (void) {
	int n, i, j, arr[50][50], *ptr;

	cin >> n;
	ptr = *arr;
	srand(time(0));

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			*(ptr + i * n + j) = rand() % 201 - 100;
			cout << setw(6) << *(ptr + i * n + j);
		}
		cout << endl;
	}
	
	int d = 0, s = 0;
	
	
	for(i = 0; i < n - 1; i++) {
	    for(j = i + 1; j < n; j++) {
	        s += *(ptr + i * n + j);
	        d++;
	    }
	}
	
	cout << float(s) / d << endl;

	return 0;
}




// Գտնել քառակուսային մատրիցի օժանդակ անկյունագծից ներքև գտնվող տարրերից մեծագույնը

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(void) {
	int n, i, j, arr[50][50], *ptr;

	cout << "Input n: ";
	cin >> n;

	ptr = *arr;
	srand(time(0));

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			*(ptr + i * n + j) = rand() % 201 - 100;
			cout << setw(6) << *(ptr + i * n + j);
		}
		cout << endl;
	}

	int max = *(ptr + 1 * n + (n - 1));

	for(i = 1; i < n; i++) {
		for(j = n - 1; j > n - i - 1; j--) {
			if(max < *(ptr + i * n + j)) {
				max = *(ptr + i * n + j);
			}
		}
	}

	cout << "Max = " << max << endl;

	return 0;
}


// Հաշվել գլխավոր անկյունագծից վերև տարրերից փոքրագույնը

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(void) {
	int n, i, j, arr[50][50], *ptr;

	cout << "Input n: ";
	cin >> n;

	ptr = *arr;
	srand(time(0));

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			*(ptr + i * n + j) = rand() % 201 - 100;
			cout << setw(6) << *(ptr + i * n + j);
		}
		cout << endl;
	}

	int min = *(ptr + 0 * n + 1);

	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if(min > *(ptr + i * n + j)) {
				min = *(ptr + i * n + j);
			}
		}
	}

	cout << "Min = " << min << endl;
}


// Հաշվել օժանդակ անկյունագծից վերև գտնվող տարրերի գումարը

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(void) {
	int n, i, j, arr[50][50], *ptr;

	cout << "Input n: ";
	cin >> n;

	ptr = *arr;
	srand(time(0));

	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			*(ptr + i * n + j) = rand() % 201 - 100;
			cout << setw(6) << *(ptr + i * n + j);
		}
		cout << endl;
	}

	int s = 0;

	for(i = 0; i < n; i++) {
		for(j = 0; j < n - i - 1; j++) {
			cout << *(ptr + i * n + j) << endl;
			s += *(ptr + i * n + j);
		}
	}

	cout << s << endl;

	return 0;
}