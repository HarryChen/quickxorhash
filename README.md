This python library is a Cython wrapper for the [original C implementation](https://https://github.com/flowerysong/quickxorhash).
quickxorhash is a C library (libqxh) implementing Microsoft's QuickXORHash algorithm.

## Algorithm

QuickXORHash is a non-cryptographic hash function that XORs the input
bytes in a circular shift pattern, then XORs the least significant
bits of the hash with the input length. The canonical representation
of the resulting hash is a Base64 encoded string, because hexadecimal
is too plebeian.

## Usage
```python
>>> import quickxorhash
>>> h = quickxorhash.quickxorhash()
>>> h.update('hello world')
>>> print(h.digest())
>>> import base64
>>> print(base64.b64encode(h.digest())
```
