# RSA-Factoring-Challenge
We have sniffed an unsecured network and found numbers that are used to encrypt very important documents. It seems that those numbers are not always generated using large enough prime numbers. Your mission should you choose to accept it, is to factorize these numbers as fast as possible before the target fixes this bug on their server - so that we can decode the encrypted documents.

##  Factorize all the things!
This Bash script is designed to read a file containing numbers and factorize each number. It then calculates the product of the factors and formats the result in the form of a mathematical expression.

### Usage
- To use this script, follow the instructions below:

1. Make sure you have Bash installed on your system.

2. Clone or download this script to your local machine.

3. Open a terminal and navigate to the directory where the script is located.

4. Make the script executable by running:
```bash
chmod +x factor
```
5. Run the script with the desired input file as an argument:
```bash
./factor <file>
```
Replace `<file>` with the path to the file containing numbers you want to factorize.

#### simple input:
```
4
12
34
128
1024
4958
1718944270642558716715
9
99
999
9999
9797973
49
239809320265259
```

#### output:
```
4=2*2
12=6*2
34=17*2
128=64*2
1024=512*2
4958=2479*2
1718944270642558716715=343788854128511743343*5
9=3*3
99=33*3
999=333*3
9999=3333*3
9797973=3265991*3
49=7*7
239809320265259=15485783*15485773
```

#### using `time`
```
user ❯ time ./factors test00
4=2*2
12=6*2
34=17*2
128=64*2
1024=512*2
4958=2479*2
1718944270642558716715=343788854128511743343*5
9=3*3
99=33*3
999=333*3
9999=3333*3
9797973=3265991*3
49=7*7
239809320265259=15485783*15485773

________________________________________________________
Executed in   60.85 millis    fish           external
   usr time  100.12 millis   99.00 micros  100.02 millis
   sys time   17.99 millis  153.00 micros   17.83 millis
```
