#Ahmad Zafar
#Find the sum of all multiples of 3 and 5

#User-input
user_input = input("Enter an integer value: ")

#solution
def solution(number):
    sum = 0
    for x in range(int(number)):
        if (x % 3 == 0) or (x % 5 == 0):
            sum += x
    
    return sum

print(solution(user_input))
