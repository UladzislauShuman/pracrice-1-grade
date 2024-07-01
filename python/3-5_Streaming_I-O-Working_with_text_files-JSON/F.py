alphabet = {
    'А': 'A', 'Б': 'B', 'В': 'V', 'Г': 'G', 'Д': 'D', 'Е': 'E', 'Ё': 'E',
    'Ж': 'ZH', 'З': 'Z', 'И': 'I', 'Й': 'I', 'К': 'K', 'Л': 'L', 'М': 'M',
    'Н': 'N', 'О': 'O', 'П': 'P', 'Р': 'R', 'С': 'S', 'Т': 'T', 'У': 'U',
    'Ф': 'F', 'Х': 'KH', 'Ц': 'TC', 'Ч': 'CH', 'Ш': 'SH', 'Щ': 'SHCH',
    'Ы': 'Y', 'Э': 'E', 'Ю': 'IU', 'Я': 'IA', 'Ь': '', 'Ъ': ''
}


with open('transliteration.txt', 'w', encoding='UTF-8') as file_out:
    with open('cyrillic.txt', encoding='UTF-8') as file_in:
        for string in file_in:
            for char in string:
                current = char.upper()
                if current in alphabet:
                    if char.isupper():
                        char = alphabet[current].capitalize()
                    else:
                        char = alphabet[current].lower()
                else:
                    char = char
                print(char, end='', file=file_out)