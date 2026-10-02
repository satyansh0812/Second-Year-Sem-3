def count_vowels_consonants(s):
    vowels = 0
    consonants = 0

    for i in range(len(s)):
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'):
            vowels = vowels + 1
        else:
            consonants = consonants + 1

    print("No. of consonants: ", consonants)
    print("No. of vowels: ", vowels)

s = input("Enter a string: ")
count_vowels_consonants(s)