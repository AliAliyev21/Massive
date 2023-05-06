
# Task 1
#Ekrana istifadəçinin daxil etdiyi say qədər, ulduzlardan üfiqi xətt
#çıxaran proqram yazın.

#index=0
#user=int(input("Enter number :"))
#while index<user:
#    index+=1
#print("*" * index) 


# Task 2
#Ekrana, 1-50 aralığındakı rəqəmlərdən ancaq cüt olanları
#çıxaran proqram yazın. 

#number=1
#while number<=50:
#    if (number%2==0):
#        print("Even :",number)
#    number+=1
    

# Task 3
#İstifadəçinin daxil etdiyi aralıqda (məs 10 və 30) cüt rəqəmlərin cəmini, 
#tək rəqəmlərin hasilini hesablayan proqram yazın.

#number1=int(input("Enter number :"))
#number2=int(input("Enter number :")) 
#total=0
#product=1
#while number1<=number2:
#    if(number1%2==0):
#        total+=number1
#    else:
#        product*=number1
#    number1+=1
#print("Total is :",total) 
#print("Product is :",product)

# Task 5
#1-100 diapazonunda 3-ə bölünüən bütün ədədləri ekrana çıxaran proqram yazın.
 
#num=1
#while num<100:
#    if num%3==0:
#       print(num)
#    num+=1

# Task 6
#Ədədin faktorialını tapan proqram yazın. (Məsələn (! - faktorial işarəsidir),
#5! = 1*2*3*4*5)

#number=int(input("Enter a number :"))
#factorial=1
#index=1

#while index<=number:
#    factorial=factorial*index 
#    index+=1 
#print("Factorial of ",number, "is",factorial)


# Task 7
#Ədədin üstünü hesablayan proqram yazın (istifadəçi iki ədəd daxil edəcək,
#əsas və üst məs. 2 və 3 cavab 8 alınmalıdır)

#num=int(input("Enter the prime number :"))
#ust=int(input("Enter of top number :")) 
#result=1
#while ust>0:
#    result*=num
#    ust-=1
#print("Result :",result)
    
    



# Task 8
#İstifadəçi istənilən sayda rəqəmli ədəd daxil edir, onun rəqəmlərinin sayını və 
#onların cəmini hesablayan proqram yazın.

#count=0
#total=0
#number=int(input("Enter of number :"))
#while number>0:
#    digit=number%10
#    total=total+digit
#    number=number//10
#    count+=1
#print("Count :",count,"Total :",total)


# Task 9
#İstifadəçi istənilən sayda rəqəmli ədəd daxil edir, ədədi əksinə çevirən proqram yazın.

#number=int(input("Enter of number :"))
#result=""
#while number>0:
#    digit=number%10
#    result+=str(digit) 
#    number//=10
#print(result)



# Task 10
#İstifadəçi tam ədəd daxil edir, bu ədədin qalıqsız bölündüyü bütün rəqəmləri
#ekrana çıxaran proqram yazın.

#user=int(input("Enter of number :")) 
#user2=user
#while user>0:
#    digit=user%10
#    if user2%digit==0:
#        print(digit)
#    user=user//10



# Task 11
#İstifadəçi tam ədəd daxil edir , bu ədədin sadə olub olmamasını 
#tapan proqram yazın.

#user=int(input("Enter of number :"))
#num=1
#count=0

#while num<=user:
#    if user%num==0:
#        count+=1
#    num+=1
#if count==1:
#    print("Daxil etdiyiniz eded ne sade nede murekkebdir") 
#elif count==2:
#    print("Daxil etdiyiniz eded sadedir") 
#elif count>2:
#    print("Daxil etdiyiniz eded murekkebdir") 
#else:
#    print("Natural eded daxil edin !")

    
# Task 12
#İstifadəçi ədəd daxil edir, bu ədədin rəqəmlərinin artan ardıcıllıqla olub olmamasını
#yoxlayan proqram yazın. (12299 artan ardıcıllıq, 122044 artan ardıcıllıq deyil) 

#number=int(input("Enter of number :")) 
#endDigit1=number%10
#reqemYoxla=1
#number//10

#while number>0:
#    endDigit2=number%10 
#    if endDigit2>endDigit1:
#        reqemYoxla=0
#    endDigit1=endDigit2
#    number//=10
#if reqemYoxla==1:
#    print("Ededin reqemleri artan sira ile duzulmusdur") 
#else:
#    print("Ededin reqemleri artan sira ile duzulmeyib") 






# Task 1
#İstifadəçi istənilən sayda rəqəmli ədəd daxil edir, 
#onun rəqəmlərinin sayını və onların cəmini hesablayan proqram yazın.
#i=0
#counter=0
#total=0
#number=int(input("Enter number :"))
#while number>0:
#    digit=number%10
#    total=total+digit
#    number=number//10
#    counter+=1
#print("Counter :",counter,"Total :",total)


#TASK 2 
#Istifadeci ekrandan daxil edeceyi ededlerin sayini daxil edir
#ve hemen say qeded eded daxil edecek
#siz neche faiz musbet neche faiz menfi ve 0 larin fazini
#hesablayin

#numberCount=int(input("Enter count of number :"))
#index=0
#positiveCount=0
#negativeCount=0
#zeroCount=0
#counter=0
#while True:
#    if counter==count:
#        break
#    number=int(input("Enter of number"))
#    counter+=1
#    if number>0:
#        positiveCount+=1
#    elif number<0:
#        negativeCount+=1
#    else:
#        zeroCount+=1
#print("Daxil edilen ededin positiv faizi",positiveCount*100/counter)
#print("Daxil edilen ededin negativ faizi",negativeCount*100/counter)
#print("Daxil edilen ededin 0 faizi",zeroCount*100/counter)


# Task 3
#10 eded daxil olunur nece faizi cut nece faizi tekdir

#evenCount=0
#oddCount=0
#index=0
#while index<10:
#    number=int(input("Enter of number :"))
#    if number%2==0:
#       evenCount+=1 
#    else:
#       oddCount+=1
#    index+=1
#print("Cut ededlerin faizi :",evenCount/10*100)
#print("Tek ededlerin faizi :",oddCount/10*100)


#Task 4 
#perfect number

#6   1   2   3  = 6
#10  1   2   5  =8
#while True:
#    total=0
#    result=0
#    i=1
#    number=int(input("Enter of number :"))
#    while i<number:
#        if number%i==0:

#            total+=i
#        i+=1
#    if total==number:
#        print("This is perfect number",number)
#    else:
#        print("This is not perfect number",number)



#Task 5
#polindrom
#number=int(input("Enter number :")) 
#resultNumber=0
#heqiqiNumber=number
#while number>0:
#    digit=number%10
#    resultNumber=resultNumber*10+digit 
#    number//=10 
#if heqiqiNumber==resultNumber:
#    print("Bu eded polyndromdur")
#else:
#    print("Bu eded polyndrom deil!")
       
    
#Task 6
#reverse

#number=int(input("Enter of number :"))
#result=""
#while number>0:
#    digit=number%10
#    result+=str(digit) 
#    number//=10
#print(result)


#Task 7
#fibonacci ededleri gosterin ilk 10
#0 1 0 1 2 3 5 8 13 21 
             
#number=0
#a = 0
#b = 1
#sum = 0
#count = 1
#while(count<=11):
#  count += 1
#  print(a)
#  a = b
#  b = sum
#  sum = a + b



        



