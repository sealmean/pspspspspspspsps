T = int(input())

for case in range(1, T + 1):
    N = int(input())
    
    if N > 4500:
        last_round = "Round 1"
    elif N > 1000:
        last_round = "Round 2"
    elif N > 25:
        last_round = "Round 3"
    else:
        last_round = "World Finals"
    
    print(f"Case #{case}: {last_round}")
