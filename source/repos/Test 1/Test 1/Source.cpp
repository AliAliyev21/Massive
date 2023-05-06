#include <iostream>
#include <time.h> 
using namespace std;

//void main() {
	/*const int Day_OF_2000 = 366;
	const int Day_Of_hour = 24;
	int result;
	result = Day_OF_2000 * Day_Of_hour;
	cout << result;*/

	/*İndi isə, həqiqi ədədləri praktikada işlədək.
	Alış - verişin qiymətini hesablayacaq proqram yazaq.
	Proqram, malın qiymətindən(Cost), alınan malın miqdarından
	(Count) istifadə edəcək və endirimi(Discount) nəzərə alaraq,
	alış dəyərini(Price) hesablayır.
	Gəlin yeni Shopping layihəsi yaradaq və aşağıdakı
	proqram kodunu daxil edək*/

	//float cost = 10.5;
	//int count = 5;
	//float discount = 0.5;
	//float price;

	//price = count * cost - count * cost * discount;
	//cout << price;
	//

	/*2. Televizorun diaqonalı düymlər ilə verilmişdir.Eyni
	diaqonalı santimetrlə təyin edən proqram yazın(1 düym
	= 2.54 santimetr).
	Aşağıda proqramın düzgünlüyünü yoxlamaq üçün
	nümunə təqdim edilmişdir.
	Giriş verilənlər :
	Televizor diaqonalı(inch) – > 42
		––––––––––––––––––––––––
	Çıxış verilənlər :
	Televizor diaqonalı : 107 sm.

	cout << "Enter the dioqanal :";
	float dioqinal;
	cin >> dioqinal;
	float duym = 2.54;
	float result;
	result = duym * dioqinal;
	cout << "Televizor dioqanali :" << result<<"sm";*/



	//3. Smartfonun batareyasının tutumu N mAh - dır.
	//Smartfonun 3 dəfə tam doldurulması lazımdırsa, portativ
	//şarj cihazının(powerbank) minimum tutumunu təyin
	//edən proqram yazın.Aşağıda proqramın düzgünlüyünü
	//yoxlamaq üçün nümunə təqdim edilmişdir
	//Giriş verilənlər :
	//Smartfon batareyasının tutumu(mAh.) – > 3000
	//––––––––––––––––––––––––––––
	//Çıxış verilənlər :
	//Minimum tutum : 9000 mAh.

	//cout << "Enter the smartfon :";
	//int smartfon;
	//cin >> smartfon;
	//int n_mah = 3000;
	//int result;
	//result = smartfon * n_mah;
	//cout << result;

	//4. Bir gün ərzində hamster K qram yem yeyir. 30 gün
	//ərzində kiloqram ilə nə qədər yemək almalı olduğunuzu
	//müəyyən edən proqram yazın.Aşağıda proqramın
	//düzgünlüyünü yoxlamaq üçün nümunə təqdim
	//edilmişdir.
	//Giriş verilənlər :
	//1 günlük yem miqdarı(г.) – > 20
	//	–––––––––––––––––––––––
	//	Çıxış verilənlər :
	//30 günlük yem miqdarı : 0.6 k

	/*int month = 30;
	int gunluk_yem = 0.02;
	float result;
	result = month * gunluk_yem;
	cout << result;
	*/

	//1. Klaviaturadan daxil edilən ədədin cüt olub olmadığını
	//	yoxlayan proqram yazın.
	//	2. Natural a(a < 100) ədədi verilmişdir.Bu ədəddəki
	//	rəqəmlərin sayını və bu rəqəmlərin cəmini ekrana
	//	çıxaran proqram yazın.


	/*cout << "Enter the number :";
	int number;
	cin >> number;
	if (number % 2 == 0) {
		cout << "Even";
	}
	else {
		cout << "Odd";
	}*/

	/*cout << "Enter the number :";
	int num;
	cin >> num;
	int sum = 0, count = 0, digit;
	while (num > 0) {
		digit = num % 10;
		sum += digit;
		count++;
		num /= 10;
	}
	cout << "Number of digits: " << count << endl;
	cout << "Sum of digits: " << sum << endl;*/

	//	3. Məlumdur ki, 1 düym 2, 54 sm - ə bərabərdir.Düymləri
		//	santimetrə və əksinə çevirən proqram hazırlayın.
		//	İstifadəçi ilə dialoq menyu sistemi vasitəsilə həyata
		//	keçirilsin.
	/*int choice;
	double lenght;
	while (true)
	{
		cout << "Select on option" << endl;
		cout << "1 . Convert inches to cantimetrs :" << endl;
		cout << "2 .Convert cantimetrs to inches :" << endl;
		cout << "Enter the choice :";
		cin >> choice;
		if (choice == 1) {
			cout << "Enter the lenght to inches :";
			cin >> lenght;
			cout << lenght << "-inches  " << lenght * 2.54 << " =cantimers" << endl;
		}
		else if (choice == 2) {
			cout << "Enter the lenght to cantimetrs :";
			cin >> lenght;
			cout << lenght << "-cantimers  " << lenght / 2.54 << " =inches" << endl;
		}
		else {
			cout << "Invalid selection";
		}


	}*/

	//	4. Kalkulyator proqramı yazın.İstifadəçi iki ədəd daxil
		//	edir və arifmetik əməliyyatı seçir(+, -, *, / , maksimum,
		//		minimum).Proqram nəticəsini ekrana çıxarın 

	/*double num1, num2, result;
	cout << "Enter the num1 :";
	cin >> num1;
	cout << "Enter the num2 :";
	cin >> num2;
	cout << "Select on option" << endl;
	cout << "1. '+' eger toplama isdeyirsense" << endl;
	cout << "2. '-' eger cixma isdeyirsense" << endl;
	cout << "3. '*' eger vurma isdeyirsense" << endl;
	cout << "4. '+' eger bolme isdeyirsense" << endl;
	int choice;
	cout << "Please one choice :";
	cin >> choice;
	switch (choice) {
		case 1: {
			result = num1 + num2;
			cout << "Result is :" << result << endl;
			break;
		}
		case 2: {
			result = num1 - num2;
			cout << "Result is :" << result << endl;
			break;
		}
		case 3: {
			result = num1 * num2;
			cout << "Result is :" << result << endl;
			break;
		}
		case 4: {
			result = num1 / num2;
			cout << "Result is :" << result << endl;
			break;
		}
		default: {
			cout << "Invalid Selection";
			break;
		}
	}*/



	//1. Simvollardan ibarət üfüqi xətti ekranda göstərən
	//proqram tərtib edin.Simvolların sayı, hansı simvoldan
	//istifadə ediləcəyi və xəttin şaquli və ya üfüqi olması —
	//istifadəçi tərəfindən müəyyən edilir.

	//cout << "Enter the symbol count :";
	//int symbolCount;
	//cin >> symbolCount;
	//cout << "Enter the symbol type :";
	//char symbolType;
	//cin >> symbolType;
	//int i = 0;
	//while (i < symbolCount) {
	//	cout << symbolType;
	//	i++;
	//}

	//2. İstifadəçinin daxil etdiyi diapazonda bütün tək tam
	//ədədlərin cəmini tapan proqram yazın.
	//
	//int start, end;
	//cout << "Enter the start :";
	//cin >> start;
	//cout << "Enter the end :";
	//cin >> end;
	//int total = 0;
	//while (start < end) {
	//	if (start % 2 != 0) {
	//		total += start;
	//	}
	//	start++;
	//}
	//cout << "Total is :" << total;

	//3. N natural ədədi verilmişdir.Mənfi olmayan n tam
	//ədədlərinin(yəni tam və 0 - dan böyük) faktorialını
	//hesablayan proqram yazın.Faktorialın hesablanması
	//düsturu aşağıda verilmişdir.
	//n!= 1 * 2 * 3*....*n, (n ədədinin faktorialını
	//	hesablama düsturu)
	//	0!= 1 (0 faktorialı 1 - ə bərabərdir
	//	(faktorialın təyininə görə))

	/*int number;
	cout << "Enter the number :";
	cin >> number;
	int factorial = 1;
	int i = 1;
	while (i <= number) {
		factorial *= i;
		i++;
	}
	cout << "This is number factorial :" << factorial << endl;*/

	//	4. Dərzinin L uzunluğunda olan parçası var.O, P
	//	uzunluğunda yastıq tikməlidir.Şərti olaraq razılaşaq ki,
	//	parçanın eni yastığın eni ilə üst - üstə düşür.Bir dərzi
	//	vurmanı və bölməni bilmədiyi halda, onun nə qədər
	//	yastıq tikə biləcəyini müəyyənləşdirin.
	/*int L, P;
	cout << "Enter the length of the piece (L): ";
	cin >> L;
	cout << "Enter the length of the cushion (P): ";
	cin >> P;

	int num_cushions = 0;
	while (L >= P) {
		L -= P;
		num_cushions++;
	}
	cout << "The number of cushions that can be made is: " << num_cushions << endl;*/

	//	5. Anbarda müəyyən sayda alma olan yeşikləri var(N >=
	//		0 — istifadəçidən tələb olunur).Anbarı boşaltmaq
	//	lazımdır.Avtomobillər növbə ilə müəyyən sayda
	//	yeşikləri çəkib götürürlər.Anbara neçə avtomobilin
	//	gəldiyini müəyyənləşdirin

	//int yewik_sayi;
	//cout << "Yewik sayini daxil edin :";
	//cin >> yewik_sayi;
	//int avtomobil_sayi = 0;
	//int her_avtomobil_ucun_olan_yewik_sayi;

	//cout << "Bir yuk masini ucun yewik sayini daxil edin :";
	//cin >> her_avtomobil_ucun_olan_yewik_sayi;
	//while (yewik_sayi > 0) {
	//	yewik_sayi -= her_avtomobil_ucun_olan_yewik_sayi;
	//		avtomobil_sayi++;
	//}
	//cout << "Anbara gelen avtomobillerin sayi :" << avtomobil_sayi;


	//1. İstifadəçi klaviaturadan sıfırdan böyük ədəd daxil edir,
	//onun sondan başlayaraq bütün rəqəmlərini göstərən
	//proqram lazımdır.Qeyd.Məsələn, istifadəçi 12345
	//ədədini daxil etdi.Ekranda əks ədəd göstərilməlidir —
	//54321.

	/*int number, revers_number=0;
	cout << "Enter the number :";
	cin >> number;
	for(; number!=0; number/=10)
	{
		revers_number = revers_number * 10 + number % 10;
	}
	cout << "Number is reverse :" << revers_number << endl;*/

	/*int number, revers_number = 0;
	cout << "Enter the number :";
	cin >> number;

	while (number != 0)
	{
		revers_number = revers_number * 10 + number % 10;
		number /= 10;
	}
	cout << "Number is revers :" << revers_number << endl;*/

	//2. İstifadəçi klaviaturadan ədəd daxil edir, onun
	//rəqəmlərinin cəmini ekranda göstərmək lazımdır.
	//Qeyd.Məsələn, istifadəçi 12345 ədədini daxil etdi.
	//Ekranda ədədin rəqəmləri cəminin 15 olduğunu
	//bildirən mesaj göstərilməlidir.
	

	/*cout << "Enter the number :";
	int number, sum = 0;
	cin >> number;
	for (;number!=0;number/=10)
	{
		sum += number % 10;
	}
	cout << "Total is :" << sum << endl;*/

	//int number;
	//cout << "Enter the number :";
	//cin >> number;
	//int sum=0;
	//for (;number>0;number/=10)
	//{
	//	sum += number % 10;
	//}
	//cout << "Total is :" << sum << endl;

	/*int number, revers_number = 0;
	cout << "Enter the number :";
	cin >> number;
	int counter = 0;
	for (; number!=0; number/=10)
	{
		counter += 1;
	}
	cout << "Revers is :" << counter << endl;*/

	
	/*int number;
	cout << "Enter the number :";
	cin >> number;
	int fact = 1, i = 1;
	for (; i <= number; i++)
	{
		fact *= i;
	}
	cout << fact;*/


	//int number;
	//cout << "Enter the number :";
	//cin >> number;
	//int revers_number = 0, counter = 0, total = 0;
	//int orginal_number = number;
	//for (; number!=0; number/=10)
	//{
	//	total += number % 10;
	//	counter += 1;
	//	revers_number = revers_number * 10 + number % 10;
	//}
	//cout << "Revers is number :" << revers_number << endl;
	//cout << "Counter is number :" << counter << endl;
	//cout << "Total is number :" << total << endl;

	//if (orginal_number == revers_number) {
	//	cout << "This is polindrome";
	//}
	//else {
	//	cout << "This is not polindrome";
	//}
//} 
	// 
	//3. İlk gün ilbiz 15 sm süründü.Hər növbəti gün, o, əlavə 2
	//sm daha da süründü.İlbizin N gün ərzində sürünəcəyi
	//ümumi məsafəni təyin edin.
	//Qeyd.Məsələn, istifadəçi 4 rəqəmini daxil etdi.Buna
	//görə də, ilbiz 4 gün süründü, buna görə də, ümumi yol
	//72 sm olacaq.
	//4. Qərar vermək üçün D adlı tələbə 9 dəfə qəpik atır.
	//Nəticədə, "heads" tərəfinə düşən qıpiklərin sayı cüt
	//ədəddirsə, müsbət istiqamətdə, əks halda mənfi
	//istiqamətdə qərar verir.İstifadəçidən 9 dəfə 1 və ya 0
	//(heads or tails) rəqəmini soruşan və D tələbəsinin
	//məsələsi həllinin müvafiq nəticəsini ekrana verən
	//proqram yazın.
	//5. Ayın əvvəli üçün həftənin gününün müəyyən edilmiş
	//nömrəsi ilə, seçilmiş ay üçün təqvimi ekranda göstərin.
	//24
	//Ev tapşırığı
	//İpucu.Proqramı şərti olaraq iki hissəyə bölün.
	//Birinci dövr lazım olan sayda boş xanaları ekrana
	//verəcək.İkinci dövr isə təqvimi verilmiş ayın birinci
	//günündən son gününə kimi göstərməyə başlayacaq.
	//Yeni sətirə keçidi gün sayının müəyyən edilmiş
	//ofseti ilə yeddiyə nisbətən kimi hesablayın.
	//Bonus tapşırığı : verilmiş ayda istirahət günlərinin
	//sayını müəyyən edin.
	//6. Proqramın icra nümunəsi :


//1. Ekrana bütün ASCİİ kod cədvəlini çıxaran program yazın.
	
//void main() {
	//int symbol = 0;
	//while (symbol <= 255)
	//{
	//	cout << (char)symbol;
	//	symbol++;
	//}

	//for (int symbol = 0;symbol <= 255;symbol++)
	//{
	//	cout << (char)symbol;
	//}
//}

//2. Ekrana istifadəçinin daxil etdiyi say qədər, ulduzlardan üfiqi xətt
//çıxaran proqram yazın.

//void main() {
	/*int count;
	cout << "Enter the count :";
	cin >> count;
	int i = 0;
	while (i <= count)
	{
		cout << "*";
		i++;
	}*/
	
	/*int count;
	cout << "Enter the count :";
	cin >> count;
	for (int i = 0;i <= count;i++)
	{
		cout << "*";
	}*/
//}

//3. Ekrana, 1 - 50 aralığındakı rəqəmlərdən ancaq cüt olanları çıxaran
//proqram yazın.
 
//void main() {
	/*int i=1;
	while (i<=50)
	{
		if (i % 2 == 0) {
			cout << "Even :" << i << endl;
		}
		else {
			cout << "Odd :" << i << endl;
		}
		i++;
	}*/

	/*for (int i = 1;i <= 50;i++)
	{
		if (i % 2 == 0) {
			cout << "Even :" << i << endl;
		}
		else {
			cout << "Odd :" << i << endl;
		}
	}*/
//}

//4. İstifadəçinin daxil etdiyi aralıqda(məs 10 və 30) cüt rəqəmlərin cəmini
//tək rəqəmlərin hasilini hesablayan proqram yazın.

//void main() {
	/*int start, end;
	cout << "Enter the start :";
	cin >> start;
	cout << "Enter the end :";
	cin >> end;
	int total = 0, product = 1;
	while (start < end)
	{
		if (start % 2 == 0) {
			total += start;
		}
		else {
			product *= start;
		}
		start++;
	}
	cout << "Even is total number :" << total << endl;
	cout << "Odd is product number :" << product << endl;*/

	/*int start, end;
	cout << "Enter the start :";
	cin >> start;
	cout << "Enter the end :";
	cin >> end;
	int total = 0, product = 1;
	for (;start < end;start++)
	{
		if (start % 2 == 0) {
			total += start;
		}
		else {
			product *= start;
		}
	}
	cout << "Even is total number :" << total << endl;
	cout << "Odd is product number :" << product << endl;*/
//}

//5. 1 - 100 diapazonunda 3 - ə bölünüən bütün ədədləri ekrana çıxaran
//proqram yazın.

//void main() {
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0) {
			cout << "No : " << i << endl;
		}
	i++;
	}*/

	/*for (int i = 1;i <= 100;i++)
	{
		if (i % 3 == 0) {
			cout << "No : " << i << endl;
		}
	}*/
//}
// 
//6. Ədədin faktorialını tapan proqram yazın. (Məsələn(!- faktorial
//	işarəsidir), 5!= 1 * 2 * 3 * 4 * 5)

//void main() {
	/*int number;
	cout << "Enter the number :";
	cin >> number;
	int fact = 1, i = 1;
	while (i <= number)
	{
		fact *= i;
		i++;
	}
	cout << "Factorial is number :" << fact << endl;*/

	//int number;
	//cout << "Enter the number :";
	//cin >> number;
	//int fact = 1, i = 1;
	//for (;i <= number;i++)
	//{
	//	fact *= i;
	//}
	//cout << "Factorial is number :" << fact << endl;
//}

//7. Ədədin üstünü hesablayan proqram yazın(istifadəçi iki ədəd daxil
//	edəcək əsas və üst məs. 2 və 3 cavab 8 alınmalıdır)

//void main() {
//	cout << "Enter the main number :";
//	int mainNumber;
//	cin >> mainNumber;
//	cout << "Enter the top number :";
//	int topNumber;
//	cin >> topNumber;
//    int power = 1, index = 1;
//    while (index <= topNumber)
//    {
//        power *= mainNumber;
//        index++;
//    }
//    cout << "Power of :" << power << endl;
//}

//8. İstifadəçi istənilən sayda rəqəmli ədəd daxil edir, onun rəqəmlərinin
//sayını və onların cəmini hesablayan proqram yazın.
//9. İstifadəçi istənilən sayda rəqəmli ədəd daxil edir, ədədi əksinə çevirən
//proqram yazın.
//10. İstifadəçi tam ədəd daxil edir, bu ədədin qalıqsız bölündüyü bütün
//rəqəmləri ekrana çıxaran proqram yazın.
//11. İstifadəçi tam ədəd daxil edir, bu ədədin sadə olub olmamasını
//tapan proqram yazın.
//12. Daxil edilmiş ədəddə iki ard arda rəqəmin olub olmamasını
//yoxlayan proqram yazın.
//13. İstifadəçi ədəd daxil edir, bu ədədin rəqəmlərinin artan ardıcıllıqla
//olub olmamasını yoxlayan proqram yazın. (12299 artan ardıcıllıq,
//	122044 artan ardıcıllıq deyil)
//14. “Ədədi tap” oyununu yazın.İstifadəçi ağlında bir rəqəm tutacaq, və
//yazdığınız proqram həmin ədədi bir neçə dəfə təxmin edərək
//tapmalıdı

//void main() {
//	int max = 20;
//	int min = -10;
//	srand(time(0));
//	int random;
//	bool flag = false;
//	int total = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		random = min + rand() % (max - min + 1);
//		if (random < 0) {
//			flag = true;
//		}
//		if (flag) {
//			total += random;
//		}
//		cout << random << endl;
//	}
//	cout << "Total is numbers :" << total << endl;
//}

//void main() {
//	int number, revers_number = 0;
//	cout << "Enter the number :";
//	cin >> number;
//	int counter = 0, total = 0;
//	int orginal_number = number;
//	for (;number != 0;number /= 10)
//	{
//		total += number % 10;
//		counter += 1;
//		revers_number = revers_number * 10 + number % 10;
//	}
//	cout << "Revers is number :" << revers_number << endl;
//	cout << "Counter is number :" << counter << endl;
//	cout << "Total is number :" << total << endl;
//	if (orginal_number == revers_number) {
//		cout << "Is polindrome";
//	}
//	else {
//		cout << "Is not polindrome";
//	}
//}
////
//void main() {
	/*int count;
	cout << "Enter the count :";
	cin >> count;
	for (size_t i = 0; i < count; i++)
	{
		if (i % 2 == 0) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}*/

	/*int count;
	cout << "Enter the count :";
	cin >> count;
	for (size_t i = 0; i < count; i++)
	{
		for (size_t k = 0; k < i; k++)
		{
			cout << "1";
		}cout << endl;
	}*/

	//int count;
	//cout << "Enter the count :";
	//cin >> count;
	//for (size_t i = 0; i < count; i++)
	//{
	//	for (size_t k = 0; k < count; k++)
	//	{
	//		if (i % 2 == 0) {
	//			cout << "1" << " ";
	//		}
	//		else {
	//			cout << "0" << " ";
	//		}
	//	}cout << endl;
	//}

	//int count;
	//cout << "Enter the count :";
	//cin >> count;
	//for (size_t i = 0; i < count; i++)
	//{
	//	for (size_t k = 0; k < count; k++)
	//	{
	//		if (k % 2 == 0) {
	//			cout << 1 << " ";
	//		}
	//		else {
	//			cout << 0 << " ";
	//		}
	//	}cout << endl;
	//}

	//int count;
	//cout << "Enter the count :";
	//cin >> count;
	//for (size_t i = count; i > 0; i--)
	//{
	//	for (size_t k = 0; k < i; k++)
	//	{
	//		cout << 1 << " ";
	//	}cout << endl;
	//}

//}
//
//void main() {
//	int number;
//	cout << "Enter the number :";
//	cin >> number;
//	int counter = 0, total = 0, digit = 0, revers_number = 0;
//	int orginal_number = number;
//	while (number > 0) {
//		revers_number = revers_number * 10 + number % 10;
//		digit= number % 10;
//		total += digit;
//		number /= 10;
//		counter += 1;
//	}
//	cout << "Counter is number :" << counter << endl;
//	cout << "Total is number :" << total << endl;
//	cout << "Revers is number :" << revers_number << endl;
//	if (orginal_number == revers_number) {
//		cout << "Is Polindrome";
//	}
//	else {
//		cout << "Is not polindrome";
//	}
//}

//void main() {
//	int number;
//	cout << "Enter the number :";
//	cin >> number;
//	int counter = 0, total = 0, digit = 0, revers_number = 0;
//	int orginal_number = number;
//	for (;number > 0;number /= 10)
//	{
//		revers_number = revers_number * 10 + number % 10;
//		digit = number % 10;
//		total += digit;
//		counter += 1;
//	}
//	cout << "Counter is number :" << counter << endl;
//	cout << "Total is number :" << total << endl;
//	cout << "Revers is number :" << revers_number << endl;
//	if (orginal_number == revers_number) {
//		cout << "Is polyndrom";
//	}
//	else {
//		cout << "Is not polyndrom";
//	}
//}

//void main() {
//	int symbol;
//	cout << "Enter the symbol :";
//	cin >> symbol;
	//for (int i = 0;i < symbol;i++)
	//{
	//	for (int k = 0;k < symbol;k++)
	//	{
	//		cout << " *";
	//	}cout << endl;
	//}

	//cout << "---------------------------------------" << endl;
	//cout << " " << endl;

	/*for (size_t i = 0; i < symbol; i++)
	{
		for (size_t k = 0; k <= i; k++)
		{
			cout << " *";
		}cout << endl;
	}*/

	//cout << "---------------------------------------" << endl;
	//cout << " " << endl;

	//for (size_t i = symbol; i > 0; i--)
	//{
	//	for (size_t k = 0; k < i; k++)
	//	{
	//		cout <<" *";
	//	}cout << endl;
	//}

	//cout << "---------------------------------------" << endl;
	//cout << " " << endl;

	//for (size_t i = 0; i < symbol; i++)
	//{
	//	for (size_t k = 0; k < symbol-(i+1); k++)
	//	{
	//		cout << "  ";
	//	}
	//	for (size_t k = 0; k <= i; k++)
	//	{
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	//cout << "---------------------------------------" << endl;
	//cout << " " << endl;

	//for (size_t i = symbol; i > 0 ; i--)
	//{
	//	for (size_t j = i; j > 0; j--)
	//	{
	//		cout << i << " ";
	//	}
	//	cout << endl;
	//}

	//cout << "---------------------------------------" << endl;
	//cout << " " << endl;

	//for (size_t i = 1; i <= symbol; i++)
	//{
	//	for (size_t k = 1; k <= i; k++)
	//	{
	//		cout << i << " ";
	//	}
	//	cout << endl;
	//}
//}

//void main() {
//	int number[10] = { -3,2,6,1,9,7,-4,-5,17,15 };
//
//	int min_element;
//	int muveqqeti;
//	for (int j = 0;j < 10;j++)
//	{
//		min_element = number[j];
//		for (int i = j;i < 10;i++) 
//		{
//			if (min_element > number[i]) {
//				min_element = number[i];
//				muveqqeti = number[j];
//				number[j] = number[i];
//				number[i] = muveqqeti;
//			}
//		}
//	}
//	for (int i = 0;i < 10;i++)
//		cout << number[i] << " ";
//	int list[4][3] = { 1,5,4,3,7,-1,4,0,11,12,-5,2 };
//	
//	for (int sat = 0;sat < 4;sat++)
//	{
//		for (int sut = 0;sut < 3;sut++)
//		{
//			cout << list[sat][sut] << "\t";
//		}
//		cout << endl;
//	}
//}

//void main() {
	//const int size = 5;
	//int array[size] = { 3,6,-2,4,-8 };
	//int negative = 0, positive = 0;
	//for (int i = 0;i < size;i++) {
	//	if (array[i] < 0) {
	//		negative += array[i];
	//	}
	//	if (array[i] > 0) {
	//		positive += array[i];
	//	}
	//}
	//cout << "Total is negative numbers :" << negative << endl;
	//cout << "Total is positive numbers :" << positive << endl;

	/*const int size = 5;
	int array[size] = { 3,15,6,24,20 };
	int max = array[0];
	int min = array[0];
	for (int i = 0;i < size;i++) {
		if (min > array[i]) {
			min = array[i];
		}
		if (max < array[i]) {
			max = array[i];
		}
	}
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
}*/

//void main() {
//	const int size = 10;
//	int arr1[size] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[size] = { 11,22,33,44,55,66,77,88,99,100 };
//	int arr3[size]{};
//	for (size_t i = 0; i < size; i++)
//	{
//		arr3[i] = arr1[i] + arr2[i];
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	cout << endl;
//
//}

//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//void main() {
	/*srand(time(0));
	const int size = 10;
	int arr[size] = {};
	int min = 1;
	int max = 10;
	for (int i = 0; i < size; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr[i] = random;
		cout << arr[i] <<" ";
	}cout << endl;

	int arr2[size - 1];

	for (int i = 0; i < size - 1; i++)
	{
		arr2[i] = arr[i + 1];
	}
	for (int i = 0; i < size - 1; i++)
	{
		cout << arr2[i] << " ";
	}cout << endl;*/

//}

//void main() {
//	srand(time(0));
//	const int size = 10;
//	int arr[size] = {};
//	int min = 1;
//	int max = 100;
//	for (size_t i = 0; i < size; i++)
//	{
//		int random = min + rand() % (max - min + 1);
//		arr[i] = random;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}cout << endl;
//
//	cout << "Enter new element : " << endl;
//	int newelement = 0;
//	cin >> newelement;
//
//	cout << "Enter element index : " << endl;
//	int index = 0;
//	cin >> index;
//
//	int arr2[size + 1]{};
//	for (size_t i = 0; i < index; i++)
//	{
//		arr2[i] = arr[i];
//	}
//	arr2[index] = newelement;
//	for (size_t i = index; i < size; i++)
//	{
//		arr2[i + 1] = arr[i];
//	}
//	for (size_t i = 0; i < size + 1; i++)
//	{
//		cout << arr2[i] << " ";
//	}cout << endl;
//}

//void main() {
//	srand(time(0));
//	const int size = 10;
//	int arr[size] = {};
//	int min = 1;
//	int max = 10;
//	for (int i = 0; i < size; i++)
//	{
//		int random = min + rand() % (max - min + 1);
//		arr[i] = random;
//		cout << arr[i] << " ";
//	}cout << endl;
//	int arr2[size - 1];
//	for (int i = 0; i < size - 1; i++)
//	{
//		arr2[i] = arr[i + 1];
//	}
//	for (int i = 0; i < size - 1; i++)
//	{
//		cout << arr2[i] << " ";
//	}cout << endl;
//}

#pragma region Bubbble short
//void main() {
//	const int size = 10;
//	int arr[size]{};
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//	for (size_t i = 0; i < size; i++)
//	{
//		int random = min + rand() % (min - max + 1);
//		arr[i] = random;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//	
//	int counter = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		bool swap = false;
//		for (size_t k = 0; k < size-i-1; k++)
//		{
//			counter++;
//			if (arr[k] > arr[k + 1]) {
//				swap = true;
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//		if (!swap) {
//			break;
//		}
//	}
//	cout << "Counter is :" << counter << endl;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//}
#pragma endregion

#pragma region Selection short 

//void main() {
//	const int size = 10;
//	int arr[size]{};
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//	for (size_t i = 0; i < size; i++)
//	{
//		int random = min + rand() % (min - max + 1);
//		arr[i] = random;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	int counter = 0;
//	for (size_t i = 0; i < size-1; i++)
//	{
//		int min = arr[i];
//		int index = -1;
//		for (size_t k = i+1; k < size; k++)
//		{
//			++counter;
//			if (arr[k] < min) {
//				min = arr[k];
//				index = k;
//			}
//		}
//		if (arr[i] > min) {
//			int temp = arr[i];
//			arr[i] = min;
//			arr[index] = temp;
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	cout << "Counter : " << counter << endl;
//}
#pragma endregion

#pragma region Linear short
//void main() {
//	const int size = 10;
//	int arr[size]{};
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//	for (size_t i = 0; i < size; i++)
//	{
//		int random = min + rand() % (min - max + 1);
//		arr[i] = random;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	cout << "Enter the number";
//	int number = 0;
//	cin >> number;
//	int counter = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		counter++;
//		if (arr[i]==number) {
//			cout << "We foun number :" << i << " Index " << counter <<" times " << endl;
//			break;
//		}
//	}
//}
#pragma endregion

#pragma region Binary search

//void main() {
//	const int size = 10;
//	int arr[size]{};
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//	for (size_t i = 0; i < size; i++)
//	{
//		int random = min + rand() % (min - max + 1);
//		arr[i] = random;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size-i-1; k++)
//		{
//			if (arr[k] > arr[k + 1]) {
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	int number = 0;
//	cout << "Enter the number :";
//	cin >> number;
//	int first = 0;
//	int last = size - 1;
//	int middle = (first + last) / 2;
//	int counter = 0;
//	while (first<=last)
//	{
//		++counter;
//		if (number == arr[middle]) {
//			cout << "We found :" << counter << " times " << endl;
//			break;
//		}
//		else if (number < arr[middle]) {
//			last = middle - 1;
//		}
//		else if (number > arr[middle]) {
//			first = middle + 1;
//		}
//		middle = (first + last) / 2;
//	}
//}
#pragma endregion


//1.Task
//mueyyen indexdeki elementin silinmesi





//2.Task
//arr zip etmek.mes ; 10 10 10 20 20 30 30 40 40 40 40
//netice
//10 20 30 40





//3.Task
//verilen araliq indexindeki elementlerin silinmesi
//meselen 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//startIndex 3
//endIndex 6
//3 den 6 ci index e qeder elementler silinmelidir
//netice : 1, 2, 3, 8, 9, 10






//4.Task
//20 dene 1 ve 1000 arasinda random elementlerle massivi
//doldurun.
//reqemlerin cemi 7 ni kechirse o ededleri gosterin






//5.TASK
// random ededler var 1-100 araliginda  20 dene
// hemen ededlerden hansi iki ededin cemi 50 ni kechirse onlari
//iki iki gosterin



