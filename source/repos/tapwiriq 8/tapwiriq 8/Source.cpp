#include <iostream> 
#include <time.h> 
#include <iomanip>
using namespace std;

void main() {
	// 1
	/*const int size = 5;
	int arr[size][size]{};
	srand(time(0));
	int min = 1;
	int max = 100;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			int random = min + rand() % (min - max + 1);
			arr[i][k] = random;
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			cout << setw(3) << arr[i][k] << "  ";
		}cout << endl;*/
	//}

	// 2
	//const int size = 5;
	//int arr[size][size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		arr[i][k] = (i + 1) * (k + 1);
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout << setw(3) << arr[i][k] << "  ";
	//	}cout << endl;
	//}

	// 3
	/*const int size = 5;
	int arr[size][size]{};
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			arr[i][k] = (i + 1) * (k + 1);
			sum += arr[i][k];
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			cout << setw(5) << arr[i][k] << "  ";
		}cout << endl;
	}
	cout << "Sum is :" << sum;*/

	// 4
	//const int size = 5;
	//int arr[size][size]{};
	//srand(time(0));
	//int min = 1;
	//int max = 100;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		int random = min + rand() % (min - max + 1);
	//		arr[i][k] = random;
	//	}
	//}
	//int sum_even = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (i % 2 == 0) {
	//			sum_even += arr[i][k];
	//		}
	//	}
	//}

	//int sum_odd = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (k % 2 == 0) {
	//			sum_odd += arr[i][k];
	//		}
	//	}
	//}

	//int sum_plus = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (i == (size - 1) / 2 || k == (size - 1) / 2) {
	//			sum_plus += arr[i][k];
	//		}
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout << setw(5) << arr[i][k] << "  ";
	//	}cout << endl;
	//}
	//cout << "Sum even     :" << sum_even << endl;
	//cout << "Sum odd      :" << sum_odd << endl;
	//cout << "Sum all      :" << sum_plus << endl;
	//

	// 5
	/*const int size = 20;
	int arr[size][size]{};
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			if (i == 0 || i == size-1 || k == 0 || k == size - 1) {
				arr[i][k] = 1;
			}
			else {
				arr[i][k] = 0;
			}
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			cout << setw(3) << arr[i][k];
		}cout << endl;
	}*/
}	
	// 6
//	const int size = 21;
//	int arr[size][size]{};
//	for (size_t i = 0; i < size; i++)
//	{
//		int count = 1;
//		for (size_t k = 0; k <= i; k++)
//		{
//			arr[i][k] = count;
//			count++;
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			cout << setw(3) << arr[i][k];
//		}cout << endl;
//	}
//}

//1. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
//doldurun.Massivdəki ədədlərin cəmini tapın.

//void main() {
//	const int size = 5;
//	int arr[size][size]{};
//	srand(time(0));
//	int min = 0;
//	int max = 20;
//	int sum = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		for	(size_t k = 0; k < size; k++)
//		{
//			int random = min + rand() % (min - max + 1);
//			arr[i][k] = random;
//		}
//	}
//	
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			sum += arr[i][k];
//		}
//	}
//
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			cout << setw(3) << arr[i][k] << "  ";
//		}cout << endl;
//	}
//	cout << "Sum is :" << sum << endl;
//}

//2. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
//doldurun.Əsas və əks dioqanalda yerləşən rəqəmlərin cəmini
//hesablayan program yazın.

//void main() {
//	const int size = 5;
//	int arr[size][size]{};
//	srand(time(0));
//	int min = 0;
//	int max = 20;
//	for (size_t i = 0; i < size; i++) {
//		for (size_t k = 0; k < size; k++) {
//			int random = min + rand() % (max - min + 1);
//			arr[i][k] = random;
//		}
//	}
//	int sum = 0;
//	for (size_t i = 0; i < size; i++) {
//		if (i == 0 || i == size - 1) {
//			sum += arr[i][i];
//			sum += arr[i][size - 1 - i];
//		}
//		else { 
//			sum += arr[i][i];
//			sum += arr[i][size - 1 - i];
//		}
//	}
//	for (size_t i = 0; i < size; i++) {
//		for (size_t k = 0; k < size; k++) {
//			cout << setw(3) << arr[i][k] << "  ";
//		}
//		cout << endl;
//	}
//	cout << "Total :" << sum << endl;
//}

//3. 5x5 ölçüsündə ikiölçülü massivi(-100) və(100) aralığında random
//ədədlərlə doldurun.Massivdəki minimal və maksimal elementləri
//tapan program yazın.

//void main() {
//	const int size = 5;
//	int arr[size][size]{};
//	srand(time(0));
//	int min = -100;
//	int max = 100;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			int random = min + rand() % (max - min + 1);
//			arr[i][k] = random;
//		}
//	}
//
//	int max_digits = 0;
//	int min_digits = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			if (arr[i][k] < 0) {
//				if (arr[i][k] < min_digits) { 
//					min_digits = arr[i][k];
//				}
//			}
//			if (arr[i][k] > 0) {
//				if (arr[i][k] > max_digits) {
//					max_digits = arr[i][k];
//				}
//			}
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			cout << setw(5) << arr[i][k] << "  ";
//		}cout << endl;
//	}
//	cout << "Max digits :" << max_digits << endl;
//	cout << "Min digits :" << min_digits << endl;
//}

//4. 5x5 ölçüsündə ikiölçülü massivi - 5 və 5aralığında random ədədlərlə
//doldurun.Massivdəki mənfi, müsbət, və sıfır olan elementlərin sayını
//tapın.

//void main() {
//	const int size = 5;
//	int arr[size][size]{};
//	srand(time(0));
//	int min = -5;
//	int max = 5;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			int random = min + rand() % (min - max + 1);
//			arr[i][k] = random;
//		}
//	}
//
//	int positive_count = 0;
//	int negative_count = 0;
//	int zero_count = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{	
//			if (arr[i][k] > 0) 
//			{
//				positive_count += 1;
//			}
//			if (arr[i][k] < 0) 
//			{
//				negative_count += 1;
//			}
//			if (arr[i][k] == 0)
//			{
//				zero_count += 1;
//			}	
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			cout << setw(5) << arr[i][k] << "  ";
//		}cout << endl;
//	}
//	cout << "Positive count :" << positive_count << endl;
//	cout << "Negative count :" << negative_count << endl;
//	cout << "Zero count :" << zero_count << endl;
//}

//5. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
//doldurun.Hər bir sətirdəki elementlərin cəmini tapın.

//void main() {
//	const int size = 5;
//	int arr[size][size] = {};
//	srand(time(0));
//	int min = 0;
//	int max = 20;
//	for (size_t i = 0; i < size; i++) {
//		for (size_t k = 0; k < size; k++) {
//			int random = min + rand() % (max - min + 1);
//			arr[i][k] = random;
//		}
//	}
//	for (size_t i = 0; i < size; i++) {
//		int sum_rows = 0;
//		for (size_t k = 0; k < size; k++) {
//			sum_rows += arr[i][k];
//			cout << setw(4) << arr[i][k] << "  ";
//		}
//		cout <<"=" << " Total rows :" << sum_rows << endl;
//	}
//}

//6. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
//doldurun.Hər bir sütundakı elementlərin cəmini tapın.

//void main() {
//	const int size = 5;
//	int arr[size][size] = {};
//	srand(time(0));
//	int min = 0;
//	int max = 20;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size; k++)
//		{
//			int random = min + rand() % (max - min + 1);
//			arr[i][k] = random;
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		int sum_colms = 0;
//		for (size_t k = 0; k < size; k++)
//		{
//			sum_colms += arr[k][i];
//			cout << setw(4) << arr[i][k] << "  ";
//		}
//		cout << " Total colms :" << sum_colms << endl;
//	}
//}

//7. 5x5 ölçüsündə ikiölçülü massivi - 10 və 40 aralığında random
//ədədlərlə doldurun.Bütün sətirdə mənfi ədəd yoxdursa, bu sətirin
//cəmini toplayın.

//void main() {
//	const int size = 5;
//	int arr[size][size] = {};
//	srand(time(0));
//	int min = -10;
//	int max = 40;
//	for (int i = 0; i < size; i++) {
//		for (int k = 0; k < size; k++) {
//			int random = min + rand() % (max - min + 1);
//			arr[i][k] = random;
//		}
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		bool has_negative = false;
//		int sum_rows = 0;
//		for (int k = 0; k < size; k++)
//		{
//			cout << setw(5) << arr[i][k] << "  ";
//			if (arr[i][k] < 0) {
//				has_negative = true;
//				break;
//			}
//			sum_rows += arr[i][k];
//		}
//		cout << endl;
//		if (!has_negative) {
//			cout << "Sum of row " << sum_rows;
//		}cout << endl;
//	}
//}

//8. N x M ölçülü massivi elə ikirəqəmli ədədlərlə doldurun ki, birinci
//rəqəm sətirin, ikinci rəqəm sütuun nömrəsini göstərsin.
//void main()
//{
//	const int N = 5, M = 4;
//	int arr[N][M] = {};
//	srand(time(0));
//	int min = 10;
//	int max = 99;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			int first_digit = i + 1;
//			int second_digit = j + 1;
//			int random = first_digit * 10 + second_digit;
//			arr[i][j] = random;
//			cout << setw(3) << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//9. N xM ölçülü massivdə, birinci və sonuncu sütunun, ikinci və sondan
//əvvəlki sütunun və s.yerini dəyişin
//void main() {
//	const int N = 5, M = 4;
//	int arr[N][M] = {};
//	srand(time(0));
//	int min = 10;
//	int max = 99;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			int first_digit = i + 1;
//			int second_digit = j + 1;
//			int random = first_digit * 10 + second_digit;
//			arr[i][j] = random;
//			cout << setw(3) << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < N; i++) {
//		int temp = arr[i][0];
//		arr[i][0] = arr[i][M - 1];
//		arr[i][M - 1] = temp;
//	}
//	for (int i = 0; i < N; i++) {
//		int temp = arr[i][1];
//		arr[i][1] = arr[i][M - 2];
//		arr[i][M - 2] = temp;
//	}
//	cout << endl << "Changged array" << endl;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cout << setw(3) << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//10. 6 x 6 ölçülü massivdə, qonşu sətirlərin yerini dəyişin

//void main() {
//	const int a = 6, b = 6;
//	int arr[a][b]{};
//	srand(time(0));
//	int min = 1;
//	int max = 50;
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t k = 0; k < b; k++)
//		{
//			int random = min + rand() % (min - max + 1);
//			arr[i][k] = random;
//		}
//	}
//	cout << "Orginal array" << endl;
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t k = 0; k < b; k++)
//		{
//			cout << setw(4) << arr[i][k] << "  ";
//		}cout << endl;
//	}
//
//	for (size_t i = 0; i < a - 1; i += 2)
//	{
//		for (size_t k = 0; k < b; k++)
//		{
//			int temp = arr[i][k];
//			arr[i][k] = arr[i + 1][k];
//			arr[i + 1][k] = temp;
//		}
//	}
//
//	cout << "Changged array" << endl;
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t k = 0; k < b; k++)
//		{
//			cout << setw(4) << arr[i][k] << "  ";
//		}cout << endl;
//	}
//
//}



//1.Task
//mueyyen indexdeki elementin silinmesi

//void main() {
//	const int size = 5;
//	int arr[size]{};
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//
//	for (int i = 0; i < size; i++) {
//		int random = min + rand() % (max - min + 1);
//		arr[i] = random;
//	}
//
//	cout << "Original array:" << endl;
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	int delete_index;
//	cout << "Enter the index to delete (0 to " << size - 1 << "): ";
//	cin >> delete_index;
//
//	if (delete_index >= 0 && delete_index < size) {
//		for (int i = delete_index; i < size - 1; i++) {
//			arr[i] = arr[i + 1];
//		}
//		arr[size - 1] = 0;
//		cout << "Changged array" << endl;
//		for (int i = 0; i < size - 1; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	else {
//		cout << "Invalid index!" << endl;
//	}
//}

//2.Task
//arr zip etmek
//meselen
//10 10 10 20 20 30 30 40 40 40 40
//netice
//10 20 30 40


//void main() {
//	int arr[] = { 10, 10, 10, 20, 20, 30, 30, 40, 40, 40, 40 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	cout << "Original array: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	int j = 0;
//	for (int i = 0; i < n - 1; i++) {
//		if (arr[i] != arr[i + 1]) {
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	arr[j] = arr[n - 1];
//	j++;
//
//	cout << "Zipped array: ";
//	for (int i = 0; i < j; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

//3.Task
//verilen araliq indexindeki elementlerin silinmesi
//meselen 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//3 den 6 ci index e qeder elementler silinmelidir
//netice : 1, 2, 3, 8, 9, 10


//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Original array: ";
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	int start_index, end_index;
//	cout << "Enter start index: ";
//	cin >> start_index;
//	cout << "Enter end index: ";
//	cin >> end_index;
//
//	int new_size = size - (end_index - start_index + 1);
//	int new_arr[new_size];
//	int j = 0;
//	for (int i = 0; i < size; i++) {
//		if (i < start_index || i > end_index) {
//			new_arr[j] = arr[i];
//			j++;
//		}
//	}
//
//	cout << "New array: ";
//	for (int i = 0; i < new_size; i++) {
//		cout << new_arr[i] << " ";
//	}
//	cout << endl;
//}

//4.Task
//20 dene 1 ve 1000 arasinda random elementlerle massivi
//doldurun.
//Eger reqemlerin cemin 7 ni kecirse onlari gosterin;

//void main() {
//	const int size = 20;
//	int arr[size];
//	srand(time(0));
//	int min = 1;
//	int max = 1000;
//	for (int i = 0; i < size; i++) {
//		int random = min + rand() % (max - min + 1);
//		arr[i] = random;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//	for (int i = 0; i < size; i++) {
//		int sum = 0;
//		int num = arr[i];
//		while (num != 0) {
//			sum += num % 10;
//			num /= 10;
//			if (sum >= 7) {
//				cout << arr[i] << " (Total :" << sum << ")" << endl;
//			}
//		}
//	}
//}
//

//TASK
// random ededler var 1-100 araliginda  20 dene
// hemen ededlerden hansi iki ededin cemi 50 ni kechirse onlari
//iki iki gosterin

//void main() {
//	const int size = 20;
//	int arr[size]{};
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//	for (size_t i = 0; i < size; i++)
//	{
//		int random = min + rand() % (max - min + 1);
//		arr[i] = random;
//	}
//
//	int arr2[size - 1];
//	for (size_t i = 0; i < size - 1; i++)
//	{
//		arr2[i] = arr[i];
//	}
//
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	for (size_t i = 0; i < size - 1; i++)
//	{
//		for (size_t k = i + 1; k < size; k++)
//		{
//			if (arr[i] + arr[k] > 50) {
//				cout << arr[i] << " + " << arr[k] << " = " << arr[i] + arr[k] << endl;
//			}
//		}
//	}
//}



