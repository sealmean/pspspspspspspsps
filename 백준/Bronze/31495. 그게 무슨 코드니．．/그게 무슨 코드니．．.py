a = input()

if len(a) >= 2 and a[0] == '"' and a[-1] == '"':
    if a == '""':
        print("CE")
    else:
        print(a[1:-1])

else:
    print("CE")
