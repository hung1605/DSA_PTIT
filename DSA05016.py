def nthUglyNumber(n):
    if n <= 5:
        return n

    data = {1}
    n -= 1

    while n > 0:
        print("cac phan tu trong set la: ", end = "");
        for x in data:
            print(x, end=" ")
        print()
        x = int(list(data)[0])
        data.remove(x)
        data.add(int(x * 2))
        data.add(int(x * 3))
        data.add(int(x * 5))
        n -= 1

    return list(data)[0]

def testCase():
    n = int(input())
    print(nthUglyNumber(n))

t = int(input())
while t > 0:
    testCase()
    t -= 1
