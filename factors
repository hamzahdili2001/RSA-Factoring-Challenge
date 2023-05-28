#!/usr/bin/env python3
import sys

def sieve(n):
    primes = [True] * (int(n**0.5) + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(n**0.5) + 1):
        if primes[i]:
            for j in range(i**2, int(n**0.5) + 1, i):
                primes[j] = False
    return [i for i in range(2, int(n**0.5) + 1) if primes[i]]


def factorize(n, primes):
    for p in primes:
        if p * p > n:
            break
        if n % p == 0:
            return p, n // p
    return None

if __name__ == '__main__':
    if len(sys.argv) != 2:
        sys.exit(1)

    with open(sys.argv[1], 'r') as f:
        numbers = []
        for line in f:
            line = line.strip()
            if line:
                numbers.append(int(line))
    max_number = max(numbers)
    primes = sieve(int(max_number**0.5) + 1)

    for n in numbers:
        if n == 2:
            print('2=2*1')
        elif n % 2 == 0:
            print('{}={}*2'.format(n, n // 2))
        else:
            factors = factorize(n, primes)
            if factors is not None:
                print('{}={}*{}'.format(n, factors[1], factors[0]))
            else:
                print('{}={}*1'.format(n, n))
