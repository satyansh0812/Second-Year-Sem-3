s = "  hello python world  "

clean = s.strip()
print("Strip:", clean)

new_s = clean.replace("python", "java")
print("Replace:", new_s)

words = clean.split()
print("Split:", words)

joined = "-".join(words)
print("Join:", joined)