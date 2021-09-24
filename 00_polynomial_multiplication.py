def multiply (a, b, n):
    solution = []
    for i in range(2*n - 1):
        solution.append(0)

    for i in range(n):
        for j in range(n):
            solution[i+j] = solution[i+j] + (a[i]*b[j])
    

if __name__ == '__main__':
    a = [1,2,3]
    b = [4,5,6]
    print(multiply(a,b,3))