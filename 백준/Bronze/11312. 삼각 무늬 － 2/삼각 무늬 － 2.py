import sys

def main():
    input = sys.stdin.read().split()
    t = int(input[0])
    idx = 1
    for _ in range(t):
        a = int(input[idx])
        b = int(input[idx+1])
        idx += 2
        k = a // b
        print(k * k)

if __name__ == "__main__":
    main()