import os,time
 
def clear():
    os.system('cls')

counter=0
score=0


print("1)What is capital of Tailand ?")
print("A) Ottawa")
print("B) Bangkok")
print("C) Taypey")
print("D) Bangi")

answer=input("Enter variant : ").lower()

if(answer=='b'):
    counter+=1
    score+=100
    print("Total score : ",score)
else:
    print("Game Over")
time.sleep(2)
clear()
print()

if(counter==1):
    print("2)What is size of boolean ?")
    print("A) 10byte")
    print("B) 4byte")
    print("C) 1byte")
    print("D) 8byte")
    
    answer=input("Enter variant : ").lower()

    if(answer=='c'):
        counter+=1
        score+=100
        print("Total score : ",score)
    else:
        print("Game Over")
time.sleep(2)
clear()

useFiftyJoker=False
useAudienceJoker=False

if(counter==2):
    print("3)Which language is high level ?")
    print("A) Pascal")
    print("B) Fortran")
    print("C) Python")
    print("D) Assembly")
    
    select=input("Would you like to use Joker [y/n]")

    if(select=="y"):
        print("1) 50/50")
        print("2) Audience knowledge")
        select=input("")
        if(select=="1"):
            print("B) Fortran")
            print("C) Python")
            useFiftyJoker=True
        elif(select=="2"):
            print("A) ===>15%")
            print("B) ==>10%")
            print("C) ==========>50%")
            print("D) ====>25%")
            useAudienceJoker=True

    answer=input("Enter variant : ").lower()
    if(answer=='c'):
        counter+=1
        score+=100
        print("Correct")
        print("Total score : ",score)
    else:
        print("Game Over")
time.sleep(2)
clear()

if(counter==3):
    print("4)What is longest river over the World ?")
    print("A) Amazon")
    print("B) Nil")
    print("C) Kur")
    print("D) Pirsaat")
    
    select=input("Would you like to use Joker [y/n]")

    if(select=="y"):
        if(not useFiftyJoker):
            print("1) 50/50")
            select=input("")
        if(not useAudienceJoker):
            print("2) Audience knowledge")
            select=input("")
    
        if(select=="1"):
            print("B) Fortran")
            print("C) Python")
            useFiftyJoker=True
        elif(select=="2"):
            print("A) ===>15%")
            print("B) ==========>50%")
            print("C) ==>10%")
            print("D) ====>25%")
            useAudienceJoker=True

    answer=input("Enter variant : ").lower()
    if(answer=='b'):
        counter+=1
        score+=100
        print("Correct")
        print("Total score : ",score)
        print("Telefon danisiqi Joker haqqi qazandiniz")
    else:
        print("Game Over")
time.sleep(2)
clear()

usePhoneJoker=False

if(counter==4):
    print("5)Which is largest country ?")
    print("A) Rusiya")
    print("B) ABS")
    print("C) Turkiye")
    print("D) Cin")
    
    select=input("Would you like to use Joker [y/n]")
  
    if(select=="y"):
        print("1)Telefon Joker haqqi")
        select=input("")
        if(select=="1"):
            print("Salam Ali dusunuremki cavab A-variantidir")
            usePhoneJoker=True
    answer=input("Enter variant : ").lower()
    if(answer=='a'):
        counter+=1
        score+=100
        print("Correct")
        print("Total score : ",score)
    else:
        print("Game Over")
time.sleep(2)
clear() 

if(counter==5): 
   
    print("6) 2-ci Qarabag muharibesi nece gun davam etmisdir?")
    print("A) 50")
    print("B) 80")
    print("C) 49")
    print("D) 44")
    answer=input("Enter variant : ").lower()
    if(answer=='d'):
        counter+=1
        score+=100
        print("Correct") 
        print("Total score : ",score)
        print("2x Joker haqqi qazandiniz")
    else:
        print("Game Over")
time.sleep(2)
clear()

useDoubleJoker=False

if(counter==6): 
   
    print("7) Roland-Garros cempionu olan biri hansi idman novuyle mewquldu?")
    print("A) Tennis")
    print("B) Golf")
    print("C) Biliard")
    print("D) Boks")
    select=input("Would you like to use Joker [y/n]")
    if (select=="y"):
        print("1) 2x Joker haqqi")
        select=input("")
        if(select=="1"):
            print("Dogru fikirlewdiyiniz bir cavab girin") 
            useDoubleJoker=True

    answer=input("Diger varianti girin : ").lower()
    if(answer=='a'):
        counter+=1
        score+=100
        print("Correct")
        print("Total score : ",score) 
    else:
        print("Game Over")
time.sleep(2)
clear()

if(counter==7): 
   
    print("8) Dunyada en cox CL kupasi qazanan Futbol Komandasi hansidir?")
    print("A) Barcelona")
    print("B) Liverpoll")
    print("C) Bayer Muchen")
    print("D) Real Madrid")
    select=input("Would you like to use Joker [y/n]")
    if (select=="y"):
        print("Duzgun cavabin ilk herfi:'R'")

    answer=input("Enter variant: ").lower()
    if(answer=='d'):
        counter+=1
        score+=100
        print("Correct")
        print("Total score : ",score) 
    else:
        print("Game Over")
time.sleep(2)
clear()


if(counter==8): 
   
    print("9) Dunyanin en hundur dagi hansidir?")
    print("A) Qafqaz daglari")
    print("B) Everest dagi")
    print("C) Elbrus dagi")
    print("D) Kilimancaro")
    select=input("Would you like to use Joker [y/n]")
    if (select=="y"):
        print("Hemin dag Çin-Nepal serheddinde yerlesir")
        
    answer=input("Enter variant: ").lower()
    if(answer=='b'):
        counter+=1
        score+=100
        print("Correct")
        print("Total score : ",score) 
    else:
        print("Game Over")
time.sleep(2)
clear()


