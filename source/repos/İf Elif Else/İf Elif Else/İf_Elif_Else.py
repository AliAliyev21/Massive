# Task 1
#Ədədin cüt və ya tək olmasını təyin edən program yazın.
#n=int(input("Enter number :")) 
#if n%2==0:
#    print("Cutdur :")
#else:
#    print("Tekdir :")

# Task 2
#İki ədəd daxil edin onlardan kiçik olanı ekrana çıxarın.
#( 41,42 - Ekrana - Kiçik ədəd 41dir çıxsın) 

#num1=float(input("Enter first number :")) 
#num2=float(input("Enter second number :"))
#if num1<num2:
#    print(num1,"Kicik ededdir :")
#else:
#    print(num2,"Kicik ededdir :")

# Task 3
#Daxil edilən ədədin mənfi və ya müsbət olmasını təyin edən program yazın. 
#( 0 halını da nəzərə alın)
#number=float(input("Enter of number :"))
#if number<0:
#    print("Menfi ededdir :")
#elif number>0:
#    print("Musbet ededdir :")
#else:
#    print("Ne menfi nede musbet ededdir :")

# Task 4
#Kalkulyator düzəltməli. İki kəsr ədəd daxil edilir a və b. Ekrana seçimlər çıxır
#1) a + b
#2) a – b
#3) a * b
#4) a / b.
#Seçilən rəqəmə əsasən, nəticə ekrana çıxır 

#a=float(input("Enter number :"))
#b=float(input("Enter number :")) 
#print("1)a+b\n2)a-b\n3)a*b\n4)a\b") 
#secim=input("Secimi daxil edin :")
#if secim=="1":
#    print(a+b)
#elif secim=="2":
#    print(a-b)
#elif secim=="3":
#    print(a*b)
#elif secim=="4":
#    print(a/b)
#else:
#    print("Xais olunur duzgun reqem daxil edin :")


# Task 5
#İstifadəçi ədəd daxil edir, ədədin 1-50 aralığında olub olmadığını yoxlayan
#program yazın.
#number=int(input("Enter number :")) 
#if (number>1 and number<50):
#    print("Bu reqem var") 
#else:
#    print("Bu reqem yoxdur")
   
# Task 6
#İstifadəçi iki ədəd daxil edir. ( X və Y ) Əgər X Y-ə qalıqsız bölünürsə ekrana 
# Yes çıxır,əks halda No.

#x=float(input("Enter number :"))
#y=float(input("Enter number :"))
#if x%y==0:
#    print("yes") 
#else:
#    print("no")

# Task 7
#İstifadəçi ədəd daxil edir. Onun 3-ə, 5-ə, 7-ə bölünüb bölünməməsini (qalıqsız)
# yoxlayın.(Ayrı-ayrı)

#number=int(input("Enter number :"))
#if(number%3==0 or number%5==0 or number%7==0):
#    print ("Bölunur")
#else:
#    print("Bölunmur")


# Task 8
#Ədədin modulunu hesablayan program yazın.(ededin modulu hemishe musbet olur 
#musbet de ,menfi de gonderseniz netice musbet olmalidir her iki halda)

#number=int(input("Enter number :"))
#if number<0:
#    print("Bu ededin modulu",-number)  
#elif number>0: 
#    print("Bu ededin modulu",number)

# Task 9
#Maximum 4 rəqəmli ədəd daxil edilir. Ədədin neçə rəqəmdən ibarət olduğunu
#hesablayan program yazin. 
#number=int(input("Enter number :"))
#if number//1000>=1: 
#    print("Daxil etdiyiniz eded 4 reqemlidir :")
#elif number//1000<1 and number//100>=1:
#    print("Daxil etdiyiniz eded 3 reqemlidir :")
#elif number//1000<1 and number//100<1 and number>=10:
#    print("Daxil etdiyiniz eded 2 reqemlidir :") 
#elif number//1000<1 and number//100<100 and number//10<1 and number//1>=1:
#    print("Daxil etdiyiniz eded 1 reqemlidir :")
#else:
#    print("Daxil etdiyiniz eded 0 dir :")
    

# Task 10
# 5rəqəmli ədəd daxil edilir. Onun ploindrom olub olmamasını təyin edən
# program yazın.

#number=int(input("Enter number :")) 
#first=number//10000 
#five=number%10
#if (first==five): 
#    print(number,"is polyndrom") 
#else:
#    print(number,"not is polyndrom")


# Task 11
#Əvvəldən şifrə saxlanılır. Istfiadəçi şifrə daxil edir , əgər şifrə bazadakı 
#şifrəyə bərabər olsa, ekrana , --Access succesfully completed-- çıxır, 
#əks halda --Acces denied--çıxır.

#user=input("Enter of password :")
#if user=="12345":
#    print("Access succesfully completed")
#else:
#    print("Acces denied")


# Task 12
#Ümumi olaraq qəbul olunub ki , 1 insan yaşı 7 it yaşına bərabərdir
#( 1 il = 7 il it üçün).Amma bu sadə hesablama çox hallarda səhv hesab olunur
#çünki itlər öz yetkin yaşlarına 2 ilə çatırlar. Buna görə də,
#bəzi insanlar ilk iki il üçün itin yaşını 10.5 yaş olaraq hesablamağı
#düzgün hesab edirlər, daha sonrakı illəri isə 4 ildən hesablayırlar.
#(məsələn: 3 insan ili = 25 it ili )Yuxarıda verilən məlumatlara görə,
#insan ilini it ilinə çevirən program yazmalısınız. Əmin olunki sizin program 
#ilk iki il üçün ayrı sonrakı illər üçün ayrı hesablamanı reallaşdırır.
#Əgər istifadəçi tərəfindən mənfi ədəd daxil edilərsə, Sizin
#programınız , istifadəçiyə mənfi ədəd daxil etdiyini bildirməlidir

#insanYasi=int(input("Insan yasini daxil edin :"))
#a2ItYasi=10.5 
#ItYasi=(insanYasi-2)*4+21
#if insanYasi>1:
#    print(insanYasi,"insan ili = ",ItYasi,"it ili")
#elif insanYasi==1:
#    print(insanYasi,"insan ili = ",ItYasi,"it ili")
#elif insanYasi<=0:
#    print("Xeta! Menfi eded ve yaxud 0 daxil etmisizin")

# Task 13
#Burcu tapan programi yazmayanlar burda yazsin
'''
Oglaq - 12.22 - 01.19
Dolca - 01.29 - 02.18
Baliq - 02.19 - 03.20
Qoc - 03.21 - 04.19
Buga - 04.20 - 05.20
Ekizler - 05.21 - 06.20
Xerceng - -06.21 - 07.22
Sir - 07.23 - 08.22
Qiz - 08.23 - 09.22
Terezi - 09.23 - 10.22
Eqreb - 10.23 - 11.21
Oxatan - 11.22 - 12.21
'''
#print("Dogum tarixin  ay ve gunununu daxil edin")
#userAy=int(input("Dogum gunu tarixinizin ayini daxil edin :"))
#userGun=int(input("Dogum gunu tarixinizin gununu daxil edin :")) 
#if userAy==12 and userGun>=22 and userGun<=31 or userAy==1 and userGun>=1 and userGun<=19:
#    print("Sizin burcunuz oglaq :") 
#elif userAy==1 and userGun>=20 and userGun<=31 or userAy==2 and userGun>=1 and userGun<=18:
#    print("Sizin burcunuz Dolca :")
#elif userAy==2 and userGun>=19 and userGun<=28 or userAy==3 and userGun>=1 and userGun<=20:
#    print("Sizin burcunuz Baliqlar :")
#elif userAy==3 and userGun>=21 and userGun<=31 or userAy==4 and userGun>=1 and userGun<=19:
#    print("Sizin burcunuz Qoc :")
#elif userAy==4 and userGun>=20 and userGun<=30 or userAy==5 and userGun>=1 and userGun<=20:
#    print("Sizin burcunuz Buga :")
#elif userAy==5 and userGun>=21 and userGun<=31 or userAy==6 and userGun>=1 and userGun<=20:
#    print("Sizin burcunuz Ekizler :")
#elif userAy==6 and userGun>=21 and userGun<=30 or userAy==7 and userGun>=1 and userGun<=22:
#    print("Sizin burcunuz Xerceng :")
#elif userAy==7 and userGun>=23 and userGun<=31 or userAy==8 and userGun>=1 and userGun<=22:
#    print("Sizin burcunuz Sir :")
#elif userAy==8 and userGun>=23 and userGun<=31 or userAy==9 and userGun>=1 and userGun<=22:
#    print("Sizin burcunuz Qiz :")
#elif userAy==9 and userGun>=23 and userGun<=30 or userAy==10 and userGun>=1 and userGun<=22:
#    print("Sizin burcunuz Terezidir :")
#elif userAy==10 and userGun>=23 and userGun<=31 or userAy==11 and userGun>=1 and userGun<=21:
#    print("Sizin burcunuz Eqrebdir :")
#elif userAy==11 and userGun>=22 and userGun<=30 or userAy==12 and userGun>=1 and userGun<=21:
#    print("Sizin burcunuz Oxatan :")
#elif userAy>12 or userGun>31 or userAy<=0 or userGun<=0:
#    print("Daxil etdiyiniz gun ve ay duzgun deil :")