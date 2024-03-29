/*
Program Description: This program makes Converting Decimal to Signed Representation

Author: Ian Miller

Date: 25/01/2024
*/


#include <stdio.h>
#include <string.h>


#define BITS_8 8
#define BITS_16 16


// Structures
typedef struct DecimalTo8BitSigned
{
    int decimal;
    char twos_complement[BITS_8 + 1];
} DecimalTo8BitSigned;


typedef struct DecimalTo16BitSigned
{
    int decimal;
    char twos_complement[BITS_16 + 1];
} DecimalTo16BitSigned;



// Prototypes
void decimal_to_8_bit_signed(DecimalTo8BitSigned* converter);
void decimal_to_16_bit_signed(DecimalTo16BitSigned* converter);


int main()
{
    // 4.a - Convert the decimal number -89 into 8-bit signed (two's-complement) representation.
    // Decimal number: -89 -> 8-bit signed (two's-complement) representation: 10100111
    printf("\nConverting Decimal to Signed Representation:\n");
    printf("\n4.a - Convert the decimal number -89 into 8-bit signed (two's-complement) representation.\n");
    DecimalTo8BitSigned task_4_a;
    task_4_a.decimal = -89;
    decimal_to_8_bit_signed(&task_4_a);
    printf("Decimal: %d\n", task_4_a.decimal);
    printf("8-bit Two's Complement: %s\n", task_4_a.twos_complement);


    // 4.b - Convert the decimal number 274 into 16-bit signed (two's-complement) representation.
    // Decimal number: 274 -> 16-bit signed (two's-complement) representation: 0000000100010010
    printf("\n4.b - Convert the decimal number 274 into 16-bit signed (two's-complement) representation.\n");
    DecimalTo16BitSigned task_4_b;
    task_4_b.decimal = 274;
    decimal_to_16_bit_signed(&task_4_b);
    printf("Decimal: %d\n", task_4_b.decimal);
    printf("16-bit Two's Complement: %s\n", task_4_b.twos_complement);


    // 4.c - Convert the decimal number -195 into 16-bit signed (two's-complement) representation.
    // Decimal number: -195 -> 16-bit signed (two's-complement) representation: 
    printf("\n4.c - Convert the decimal number -195 into 16-bit signed (two's-complement) representation.\n");
    DecimalTo16BitSigned task_4_c;
    task_4_c.decimal = -195;
    decimal_to_16_bit_signed(&task_4_c);
    printf("Decimal: %d\n", task_4_c.decimal);
    printf("16-bit Two's Complement: %s\n", task_4_c.twos_complement);

    return 0;
}


void decimal_to_8_bit_signed(DecimalTo8BitSigned* converter)
{
    // Calculate the absolute value of the decimal number
    int abs_value = (converter->decimal < 0) ? -(converter->decimal) : converter->decimal;

    // Convert the absolute value to binary
    int remainder;
    int i = BITS_8 - 1;
    while (abs_value > 0)
    {
        remainder = abs_value % 2;
        abs_value /= 2;
        converter->twos_complement[i] = (remainder == 0) ? '0' : '1';
        i --;
    }

    // Pad with leading zeroes if necessary
    while (i >= 0)
    {
        converter->twos_complement[i] = '0';
        i --;
    }

    // If the number is negative, perform two's complement
    if (converter->decimal < 0)
    {
        // Invert the bits
        for (i = 0; i < BITS_8; i++)
        {
            converter->twos_complement[i] = (converter->twos_complement[i] == '0') ? '1' : '0';
        }

        // Add 1 to perform two's complement
        i = BITS_8 - 1;
        while (i >= 0 && converter->twos_complement[i] == '1')
        {
            converter->twos_complement[i] = '0';
            i --;
        }
        if (i >= 0)
        {
            converter->twos_complement[i] = '1';
        }
    }

    // Null-terminate the string
    converter->twos_complement[BITS_8] = '\0';
}


void decimal_to_16_bit_signed(DecimalTo16BitSigned* converter)
{
    // Calculate the absolute value of the decimal number
    int abs_value = (converter->decimal < 0) ? -(converter->decimal) : converter->decimal;

    // Convert the absolute value to binary
    int remainder; 
    int i = BITS_16 - 1;
    while (abs_value > 0) {
        remainder = abs_value % 2;
        abs_value /= 2;
        converter->twos_complement[i] = (remainder == 0) ? '0' : '1';
        i--;
    }

    // Pad with leading zeroes if necessary
    while (i >= 0) {
        converter->twos_complement[i] = '0';
        i--;
    }

    // If the number is negative, perform two's complement
    if (converter->decimal < 0) {
        // Invert the bits
        for (i = 0; i < BITS_16; i++) {
            converter->twos_complement[i] = (converter->twos_complement[i] == '0') ? '1' : '0';
        }
        // Add 1 to perform two's complement
        i = BITS_16 - 1;
        while (i >= 0 && converter->twos_complement[i] == '1') {
            converter->twos_complement[i] = '0';
            i--;
        }
        if (i >= 0) {
            converter->twos_complement[i] = '1';
        }
    }

    // Null-terminate the string
    converter->twos_complement[BITS_16] = '\0';
}