'''
Quiz: what does this print? What if you uncomment the line with 'global x'?
'''

x = 2

def main():
    # if you uncomment this, now x here refers to global x var
    # global x
    print('hi')
    x = 3
    print(f(x))

print(x)

def f(x):
    return x + 2

main()

print(x)