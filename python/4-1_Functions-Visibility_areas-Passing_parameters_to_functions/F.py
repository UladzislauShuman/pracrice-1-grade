bylo = []


def modern_print(line):
    if line not in bylo:
        print(line)
        bylo.append(line)