text = ''

while (line := input()) != 'ФИНИШ':
    text += line.lower()

text = text.replace(' ', '')

maxCount = 0
maxLetter = ''

for letter in text:
    if text.count(letter) > maxCount:
        maxCount = text.count(letter)
        maxLetter = letter
    elif maxCount == text.count(letter):
        if letter < maxLetter:
            maxLetter = letter

print(maxLetter.lower())

