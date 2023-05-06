## Task 1
##Iki reqem daxil edilir onun ededi ortasini tapan proqram yazin

##num1=int(input("Enter number :")) 
##num2=int(input("Enter number :")) 
##avarege=(num1+num2)/2
##print("Avarege :",avarege)

## Task 2
##Istifadeci a ve b ni daxil edir , ax+b=0 tenliyi hesablayan x-i tap

##a=int(input("Enter number a:")) 
##b=int(input("Enter number b:")) 
##x=(0-b)/a
##print(x) 

##Istifadeci reqem daxil edir onun kubunu tapan proqram yazin

##user=int(input("Enter of number :"))  
##number=int(user**3) 
##print(number) 

## Task 3
##S=v*t+(a*2**t)/2 v-zaman, t-suret, a-tecil, istifadeci a,v,t daxil edir

##v=float(input("Zaman daxil edin :")) 
##t=float(input("Suret daxil edin :")) 
##a=float(input("Tecil daxil edin :")) 

##s=v*t+(a*2**t)/2 
##print(s) 

## Task 4
##Istifadeci dollarin miqdarini daxil edir bunu manata ceviren proqram yazin 

##usd=1.70
##user=float(input("Dollarin miqdarini daxil edin :")) 
##result=int(user*1.70) 
##print(result,"Azn") 

## Task 5
##Mili kilometre ceviren proqram yazin. Bir mil-1609km 
##mil=1609 
##user=float(input("Mil daxil edin :")) 
##result=int(user*mil) 
##print(result,"km") 

## Task 6
## Km mile ceviren proqram yazin Bir km-1 mildir
##km=0.6 
##user=float(input("Km daxil edin :")) 
##result=float(user*km) 
##print(result) 


#1. Ədədin kubunu qaytaran funksiya yazın.

#def topNum (prime,top):
#    result=prime**top
#    return result 

#print(topNum(5,9))


#2. İki ədəddən böyüyünü tapan funksiya yazın. 

#def largeNum (num1,num2): 
#    if num1>num2: 
#        return num1 
#    return num2

#num1=int(input("Enter the num1 :")) 
#num2=int(input("Enter the num2 :")) 
#print(largeNum(num1,num2))


#3. Ədəd müsbətdirsə doğru, mənfidirsə yanlış qaytaran funksiya yazın. 

#def getNum (number):
#    if number>0:
#        return True 
#    return False

#num=int(input("Enter the number :")) 
#print(getNum(num))


#4. İstifadəçinin seçimindən asılı olaraq Toplama, Çıxma , Vurma, Bölmə
#funksiyalarından birini çağıran , funksiya yazın. 

#def getSubt(num1,num2):
#    return num1-num2 

#def getSum(num1,num2):
#    return num1+num2 

#def getMult(num1,num2):
#    return num1/num2  

#def getDiv (num1,num2):
#    return num1*num2 

#def operate (num1,num2,operate="Add"):
#    if operate=="-":
#        return getSubt(num1,num2)
#    elif operate=="+":
#        return getSum(num1,num2) 
#    elif operate=="/":
#        return getMult(num1,num2)
#    elif operate=="*":
#        return getDiv(num1,num2)

#num1=int(input("Enter the num1 :")) 
#num2=int(input("Enter the num2 :"))
#operat=input("Enter the option :") 
#print(operate(num1,num2,operat))



#5. Parametr kimi tərfinin uzunluğunu qəbul edən , və ekrana həmin
#ölçüdə kvadrat çıxaran funksiya yazın.


#def getSymbol (count,symbol):
#    for i in range (count):
#        print(symbol,end=" ")

#print(getSymbol(20,"*"))


#6. Göndərilən rəqəmin sadə olub olmadığını yoxlayan funksiya yazın.








#7. Ədədin faktorialını qaytaran funksiya yazın.
#8. İki parametr qəbul edən : Üst və Qüvvət , və ədədin qüvvətini
#qaytaran funksiya yazın.
#9. Funksiya 2 ədəd qəbul edir və bunlar arasındakı bütün ədədləri
#toplayıb qaytarır.
#10. Massivdəki ən böyük ədədi qaytaran funksiya yazın