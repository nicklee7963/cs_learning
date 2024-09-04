import random
import string


chars = " " + string.whitespace + string.punctuation + string.digits + string.ascii_letters
chars = list(chars)
key = chars.copy()

random.shuffle(key)

plain_text = input("Enter a massage to encrypt")
cipher_text = ""
for char in plain_text:
    digit = chars.index(char)
    cipher_text += key[digit]

print(f"Encrypted message: {cipher_text}")
