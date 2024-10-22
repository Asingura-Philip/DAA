def naive_fib(n):
    if n<2:
        return n
    return naive_fib(n-1)+naive_fib(n-2)

n=9
# print(naive_fib(n))


def fibonacci_memoized(n,fibnumbers={}):
    if n<=1:
        return n
    if n not in fibnumbers:
        fibnumbers[n]=fibonacci_memoized(n-1,fibnumbers)+fibonacci_memoized(n-2,fibnumbers)
    return fibnumbers[n]


# tabulated fib
def tabulated_fib(n):
    if n<=1:
        return n
    fib_table=[0]*(n+1)

    fib_table[1] =1

    for i in range(2,n+1):
        fib_table[i]=fib_table[i-1]+fib_table[i-2]

    return fib_table[n]

n=5
result = tabulated_fib(n)
print(f"the {n}th fibonnaci number is {result}")
