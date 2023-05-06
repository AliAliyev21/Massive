#include <iostream> 
#include <cmath>
#include <time.h>
using namespace std;



//1. Ədədin kubunu qaytaran funksiya yazın.

//int GetCube(int num) {
//	int cube = pow(num, 3);
//	return cube;
//}
//
//void main() {
//	cout << "Enter the number :";
//	int number = 0;
//	cin >> number;
//	cout << GetCube(number);
//}

//2. İki ədəddən böyüyünü tapan funksiya yazın.

//int GetLargeNumber(int num1, int num2) {
//	if (num1 > num2) {
//		return num1;
//	}
//	return num2;
//}

//void main() {
//	cout << "Enter the num1 :";
//	int num1;
//	cin >> num1;
//	cout << "Enter the num2 :";
//	int num2;
//	cin >> num2;
//	cout << GetLargeNumber( num1, num2 );
//}

//3. Ədəd müsbətdirsə doğru, mənfidirsə yanlış qaytaran funksiya yazın.

//bool IsPositive(int num) {
//	if (num > 0) {
//		return true;
//	}
//	return false;
//}
//void main() {
//    int number;
//    cout << "Enter the number: ";
//    cin >> number;
//    if (number == 0) {
//        cout << "Zero" << endl;
//    }
//    else {
//        bool positive = IsPositive(number);
//        if (positive) {
//            cout << "Dogru" << endl;
//        }
//        else {
//            cout << "Yanlis" << endl;
//        }
//    }
//}

//4. İstifadəçinin seçimindən asılı olaraq Toplama, Çıxma, Vurma, Bölmə
//funksiyalarından birini çağıran, funksiya yazın.

//int GetSum(int num1, int num2) {
//	int sum = num1 + num2;
//	return sum;
//}
//int GetSubt(int num1, int num2) {
//	int subt = num1 - num2;
//	return subt;
//}
//int GetMult(int num1, int num2) {
//	int mult = num1 * num2;
//	return mult;
//}
//int GetDiv(int num1, int num2) {
//	if (num2 == 0) {
//		cout << "Error.Division by Zero";
//	}
//	int div = num1 / num2;
//	return div;
//}
//
//void main() {
//	int num1, num2, choice;
//	cout << "Enter the num1 :";
//	cin >> num1;
//	cout << "Enter the num2 :";
//	cin >> num2;
//	cout << "1. Toplama " << endl;
//	cout << "2. Cixma " << endl;
//	cout << "3. Vurma " << endl;
//	cout << "4. Bolme " << endl;
//	cout << "Enter the option :";
//	cin >> choice;
//	if (choice == 1) {
//		cout << "Result :" << GetSum(num1, num2);
//	}
//	else if (choice == 2) {
//		cout << "Result :" << GetSubt(num1, num2);
//	}
//	else if (choice == 3) {
//		cout << "Result :" << GetMult(num1, num2);
//	}
//	else if (choice == 4) {
//		cout << "Result :" << GetDiv(num1, num2);
//	}
//	else {
//		cout << "Invalid selection";
//	}
//}

//5. Parametr kimi tərfinin uzunluğunu qəbul edən, və ekrana həmin
//ölçüdə kvadrat çıxaran funksiya yazın.

//void GetSquare(int length) {
//    for (int i = 0; i < length; i++) {
//        for (int j = 0; j < length; j++) {
//            cout << "* ";
//        }cout << endl;
//    }
//}
//
//void main() {
//    int size = 0;
//    cout << "Enter the size: ";
//    cin >> size;
//    GetSquare(size);   
//}

//6. Göndərilən rəqəmin sadə olub olmadığını yoxlayan funksiya yazın.

//bool IsSimple(int num) {
//	int counter = 0;
//	for (int i = 1; i <=num; i++)
//	{
//		if (num % i == 0) {
//			counter++;
//		}
//	}
//	return counter == 2;
//}
//
//void main() {
//	int number;
//	cout << "Enter the number :";
//	cin >> number;
//	if (IsSimple(number)) {
//		cout << number << " Is prime number" << endl;
//	}
//	else {
//		cout << number << " Is not prime number" << endl;
//	}
//}

//7. Ədədin faktorialını qaytaran funksiya yazın.

//int GetFact(int num) {
//    int fact = 1;
//    for (int i = 1; i <= num; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//void main() {
//    int number;
//    cout << "Enter the number :";
//    cin >> number;
//    int result = GetFact(number);
//    cout << "Factorial is " << result << endl;
//}


//8. İki parametr qəbul edən : Üst və Qüvvət, və ədədin qüvvətini
//qaytaran funksiya yazın.

//int GetPower(int ust, int quvvet) {
//	return pow(ust, quvvet);
//}

//void main() {
//	cout << "Ustu daxil edin :";
//	int ust;
//	cin >> ust;
//	cout << "Quvveti daxil edin :";
//	int quvvet;
//	cin >> quvvet;
//	cout << "Result :" << GetPower(ust, quvvet);
//}

//9. Funksiya 2 ədəd qəbul edir və bunlar arasındakı bütün ədədləri
//toplayıb qaytarır.

//int GetSumDigits(int start, int end) {
//	int sum = 0;
//	for (int i = start; i <=end; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//void main() {
//	int start, end;
//	cout << "Enter the start :";
//	cin >> start;
//	cout << "Enter the end :";
//	cin >> end;
//	cout<<GetSumDigits(start, end);
//}

//10. Massivdəki ən böyük ədədi qaytaran funksiya yazın

//int GetInitArray(int arr[], int size) {
//    srand(time(0));
//    int random = 0;
//    int min = 1;
//    int max = 100;
//    int max_digits = 0;
//    for (size_t i = 0; i < size; i++) {
//        random = min + rand() % (max - min + 1);
//        arr[i] = random;
//        if (arr[i] > max_digits) {
//            max_digits = arr[i];
//        }
//    }
//    return max_digits;
//}
//
//void PrintArray(int arr[], int size) {
//    for (size_t i = 0; i < size; i++) {
//        cout << arr[i] << "  ";
//    }
//    cout << endl;
//}
//
//void main() {
//    const int size = 10;
//    int arr[size]{};
//    GetInitArray(arr, size);
//    PrintArray(arr, size);
//    cout << "Largest digits: " << GetInitArray(arr, size) << endl;
//}