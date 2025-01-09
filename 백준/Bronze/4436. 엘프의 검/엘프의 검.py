while True:
    try:
        n = int(input())
        ls = [0 for _ in range(10)]
        k = 0
        current = n

        while True:
            k += 1
            for digit in str(current):
                ls[int(digit)] = 1

            if sum(ls) == 10: 
                print(k)
                break
            
            current += n  
    except EOFError:
        break
