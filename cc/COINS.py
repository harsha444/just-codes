x = {
    0:0,
    1:1,
    2:2,
    3:3,
    4:4,
    5:5,
    6:6,
    7:7,
    8:8,
    9:9,
    10:10,
    11:11
}

def eval(n):
    if n in x:
        return x[n]
    else:
        x[n] = max(n, eval(n//4)+eval(n//3)+eval(n//2))
        return x[n]


if __name__ == "__main__":
    max_inputs = 10
    while(max_inputs):
        n = int(input())
        print(eval(n))
        max_inputs-=1