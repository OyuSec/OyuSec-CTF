from z3 import *
import os

x = [ BitVec(f'{i}', 8) for i in range(32) ]

def getKeys():
    with open('getKeys.cpp', 'w') as f:
        f.write("""
            #include <bits/stdc++.h>
            using namespace std;
            int main() {
                srand(1337);
                for (int _ = 0; _ < 32; _++)
                    cout << rand() % 100 << " ";
            }
        """)
    os.system('g++ getKeys.cpp')
    return list(map(int, os.popen('./a.out').read().split()))

print('[+] Generating keys with (1337)')
k = getKeys()

print('[+] Trying to prove')

s = Solver()

# -- State 1 --
for _ in range(32):
    s.add(And(x[_] >= 48, x[_] <= 125))

# -- Stage 2 --
s.add(k[0] + k[6] == x[0])
s.add(k[2] << 2 == x[1])
s.add(k[3] ^ 54 == x[2])
s.add(k[3] ^ k[8] == x[3])
s.add(k[4] + 29 == x[4])
s.add(x[5] == 99)
s.add(x[6] == k[0] + 8)
s.add(x[7] == k[7] + 6)
s.add(x[8] ^ 51 == 0)
s.add(x[9] - k[9] == 19)
s.add(x[10] == 95)
s.add(x[10] >> 2 == 23)
s.add((x[11] == (22 * 4 + 77) / 3))
s.add(x[31] == 125)
s.add(x[12] == k[27])
s.add(x[13] + 23 == x[21])
s.add(x[14] == k[13])
s.add(x[15] % 2 == 0)
s.add(x[15] / 2 == k[11])
s.add(x[16] == x[15] / 2)
s.add(x[17] == x[10])
s.add(x[17] == x[26])
s.add(x[17] == x[20])
s.add(x[18] == k[17] ^ 104)
s.add(x[19] << 2 == 328)
s.add(x[21] == x[5])
s.add(x[22] - 27 == k[1])
s.add(x[23] * 2 == 112)
s.add(x[24] == x[8])
s.add(x[24] == x[14])
s.add(x[25] / 2 == k[28])
s.add(x[27] / 5 == 16)
s.add(x[28] ^ 117 == 0)
s.add(x[29] - 7 == k[23])
s.add(x[30] == k[30] + k[14])

if s.check() == sat:
    print("[+] Proved")
    m = s.model()
    print(''.join([chr(m[x[i]].as_long()) for i in range(32)]))

else:
    print("[-] Failed")
