#Ahmad Zafar
#Find the sum of all multiples of 3 and 5

#User-input
user_input = input("Enter an integer value: ")

#Solution
def narcissistic( value ):
    #Determining the power
    power = len(value)
    
    sum = 0
    for x in (value):
        sum += pow(int(x), power)

    if (sum == int(value)):
        return True
    else:
        return False

#Output
if narcissistic(user_input):
    print (user_input + " is a narcissistic value!")
else:
    print(user_input + " is not a narcissistic value!")
