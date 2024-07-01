from sys import stdin

*titles, search = [title.strip("\n") for title in stdin.readlines()]

for title in titles:
    if title.lower().find(search.lower()) + 1:
        print(title)