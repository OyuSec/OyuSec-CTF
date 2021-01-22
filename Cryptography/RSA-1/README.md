[download](https://github.com/oyusec/OyuSec-CTF/tree/master/Cryptography/RSA-1)
```python
n = 0x44faf46a53d756bec9f222f0107751d7fe045eb5718ac3f3ba6c0e5b0ae9074194df73fab49688e9ae72eff848f6ccd59417bfd0b3ab57fde8a156cded9d62947e5ff7a5da3c1395f648d37ab2309febdbda7d3de291dd30843273d2079ee083bd87204428d8f8ff0926ebd4b44090a1ba28965abd22fef2e429828bcbdd06e0d536856da3712499
e = 0x10001

cipher = []
with open('flag.txt') as flag:
  for i in flag.read(): cipher.append(pow(ord(i), e, n))
ciphers = open('cipher.txt', 'w')
ciphers.write(','.join([str(i) for i in cipher]))
```

`- ByamB4`
