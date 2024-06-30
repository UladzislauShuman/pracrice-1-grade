name = input() 
answer = input()

print("Как Вас зовут?")
print(f"Здравствуйте, {name}!")
print("Как дела?")
if answer == "хорошо":
    print("Я за вас рада!")
elif answer == "плохо":
    print("Всё наладится!")