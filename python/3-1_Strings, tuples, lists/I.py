while (line := input()) != "":
    if not (pos := line.find('#')) + 1:
        print(line)
    elif line[:pos].strip():
        print(line[:pos].rstrip())