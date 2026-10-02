n = int(input("Enter a number: "))
rev = 0
temp = n

while(temp > 0):
    d = temp%10
    rev = rev*10 + d
    temp = temp//10

if(n == rev):
    print(n, "is a palindrome number")
else:
    print(n, "is not a palindrome number")