def func():
    N = int(input())
    res = (2 * N + 1) * (2 * N + 1)
    for a in range(-N, N + 1):
        if a == 0:
            continue
        for b in range(-N, N + 1):
            if abs(1 - a - b) <= N: 
                res += 1
    print(res)
func()