from sys import stdin

words = [word for word in stdin.read().split() if word]
result = [word for word in sorted(set(words)) if word.lower() == word[::-1].lower()]

print("\n".join(result))