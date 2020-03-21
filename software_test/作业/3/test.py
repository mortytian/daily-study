a = input()
b = input()
a.split()
b.split()
n = int(a[0])
x = int(a[1])
seq = []
for i in b:
    seq.append(int(i))

def get_most(seq):
    most = 0
    for i in seq:
        temp = 0
        for j in seq:
            if seq[j] == seq[i]:
                temp += 1
            else:
                number1 = seq[j] & x
                number2 = seq[j] | x
                if number1 == seq[i] or number2 == seq[i]:
                    temp += 1
        if temp > most:
            most = temp
                