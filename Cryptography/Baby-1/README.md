Энгийн бүхэн сайхан [download](https://github.com/oyusec/OyuSec-CTF/tree/master/Cryptography/Baby-1)

```python
from itertools import cycle
from secret import key, flag

assert len(key) == 3

def enc(m):
    ctext = []
    for i, j in zip(m, cycle(key)): ctext.append(chr((ord(i) + ord(j)) % 95 + ord(' ')))
    return ''.join(ctext)

with open('enc.txt', 'w') as f:
    f.write(enc(flag))
```

`- ByamB4`
