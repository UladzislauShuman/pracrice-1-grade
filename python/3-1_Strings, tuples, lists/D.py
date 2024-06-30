while (name := input()) != "":
    if not name[-1:-4:-1] == "@@@":
        print(name.lstrip("#"))

