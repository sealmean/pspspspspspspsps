from collections import deque
while True:
    try:
        a = input()
        ans = ''

        ls1 = deque(['a', 'i', 'y', 'e', 'o', 'u'])
        ls2 = deque(['b', 'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g', 'p', 'v', 'j', 'q','t', 's', 'r', 'l', 'm', 'f'])

        for i in a:
            if i.lower() in ls1:
                if not i.isupper():
                    tmp = ls1.index(i)
                    ls1.rotate(3)
                    ans = ans+ls1[tmp]
                else:
                    tmp = ls1.index(i.lower())
                    ls1.rotate(3)
                    ans = ans+ls1[tmp].upper()

            elif i.lower() in ls2:
                if not i.isupper():
                    tmp = ls2.index(i)
                    ls2.rotate(10)
                    ans = ans+ls2[tmp]
                else:
                    tmp = ls2.index(i.lower())
                    ls2.rotate(10)
                    ans = ans+ls2[tmp].upper()

            else: ans = ans + i

        print(ans)

    except: break