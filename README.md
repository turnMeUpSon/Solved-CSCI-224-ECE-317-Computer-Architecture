# CSCI-224-ECE-317-Computer-Architecture

## Assignment #1: C and Intel x86 Assembly
 
<a  name="readme-top"></a>
   
<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture">
    <img src="https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture/blob/main/ComputerSystems.jpeg" alt="Logo" width="80" height="80">
  </a>
</div>



<!-- Task 1 -->

## Task 1 - Match the following assembly code sections with their equivalent C expressions ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_1.c)):
```
movl x, %eax
 incl %eax
 shll $3, %eax
 subl $3, %eax
 movl %eax, y
(2)
 movl $25, %eax
 sarl $3, %eax
 addl $-2, %eax
 movl %eax, y
(3)
 movl x, %eax
 xorl $0xffffffff, %eax
 movl %eax, y
(4)
 movl x, %eax
 movl %eax, %ebx
 shll $4, %ebx
 sarl $2, %eax
 subl %eax, %ebx
 movl %ebx, y
(5)
 movl x, %eax
 movl %eax, %ecx
 subl $3, %eax
 shll %cl, %eax
 movl %eax, y
(6)
 movl x, %eax
 movl %eax, %ebx
 shll $1, %ebx
 addl %eax, %ebx
 shll $3, %ebx
 subll %ebx, %eax
 movl %eax, y

(a) y = 0;
(b) y = 8 * x + 5;
(c) y = (4 * x) + (x % 16);
(d) y = (8 * x) + 1;
(e) y = ~x;
(f) y = 23 * x;
(g) y = (x / 4) + (x % 16);
(h) y = (x / 4) << x;
(i) y = 5 * x / 2;
(j) y = (3 * x) << x;
(k) y = (8 * x) – (x – 3);
(l) y = – 25 * x;
(m) y = (4 * x) – (x / 16);
(n) y = (8 * x) << x;

(o) y = (x – 3) << 4;
(p) y = (16 * x) – (x / 4);
(q) y = – 3 * x;
(r) y = 1;
(s) y = – 23 * x;
(t) y = 8 * x – 3;
(u) y = (x – 3) << x;
(v) y = 4 * x – 3; 
```

## Task 2 - **Radix-_r_  to Decimal Conversion** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_2.c):
### a.  Convert the binary number 10100101110012  into decimal.
### b. Convert the hexadecimal number 0x6FB5 into decimal.
### c. Convert the base-_7_  number 315627  into decimal.

## Task 3 - **Decimal to Radix-_r_  Conversion** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_3.c):
### a.  Convert the decimal number 215 into binary.
### b.  Convert the decimal number 3576 into hexadecimal.
### c.  Convert the decimal number 171 into base-_5_.

## Task 4 - **Converting Decimal to Signed Representation** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_4.c):
### a.  Convert the decimal number -89 into 8-bit signed (two's-complement) representation.
### b.  Convert the decimal number 274 into 16-bit signed (two's-complement) representation.
### c.  Convert the decimal number -195 into 16-bit signed (two's-complement) representation.

## Task 5 - **Interpreting as Signed vs. Unsigned** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_5.c):
### a.  If 110100102  is interpreted as an 8-bit signed (two's-complement) number, what is its decimal value?
### b.  If 110100102  is interpreted as an 8-bit unsigned number, what is its decimal value?
### c.  If 110100102  is interpreted as a 16-bit signed (two's-complement) number, what is its decimal value?

## Task 6 - **Characters & Strings** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_6.c):
### a. What is the string corresponding to the following series of ASCII values:  
        0x54 0x68 0x69 0x73 0x20 0x69 0x73 0x20 0x41 0x53 0x43 0x49 0x49 0x21 0x00  
        
### b. Convert the string "Billikens rule!" into ASCII.
## Task 7 - **Operations on Data** ([code is here](https://github.com/turnMeUpSon/Solved-CSCI-224-ECE-317-Computer-Architecture/blob/Data-Representation-and-Operations/data_representation_and_operation_7.c)):
### Show the results for the following data operations:
    a.  11010111101101102  + 00010111000010112
    b.  0x8F3C5 - 0x3AB2
    c.  0000000101002  | 0001000100102
    d.  0000000101002  & 0001000100102
  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>

  
  
  

### Built With
All code is written on C and Assembly


## Getting Started

  

Make sure you have successfully installed [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake), [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools) and [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)


<!-- LICENSE -->

## License

  

Distributed under the MIT License.

  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>

  
  
  

<!-- CONTACT -->

## Contact

  

Your Name - [Ian Miller](https://www.linkedin.com/in/ian-miller-620a63245/) - email@example.com

  

Project Link: [https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture](https://github.com/turnMeUpSon/CSCI-224-ECE-317-Computer-Architecture)

  

<p  align="right">(<a  href="#readme-top">back to top</a>)</p>