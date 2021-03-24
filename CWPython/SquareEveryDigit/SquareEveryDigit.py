#Ahamd Zafar
#Square every digit of a number and concatenate them.

#User-input
user_input = input("Enter an integer value: ")

#alot of casting, turning it to int to square and 
#turning it to str for concatanation.
def square_digits(num):
    squared_num = ""
    for x in num:
        squared_num += str(int(x) * int(x))
        
    return int(squared_num)

print(square_digits(user_input))