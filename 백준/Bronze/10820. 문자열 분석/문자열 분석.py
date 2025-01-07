while True:
    try:
        a = input()
        ls = [0,0,0,0]
        for i in a:
            if i.islower():
                ls[0] += 1
            if i.isupper():
                ls[1] += 1
            if i.isdigit():
                ls[2] += 1
            if i == " ":
                ls[3] += 1
        print(*ls)
    except EOFError: break