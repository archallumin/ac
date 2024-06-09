// Spigot program for pi to NDIGITS decimals.
// 4 digits per loop.
// Thanks to Dik T. Winter and Achim Flammenkamp who originally made a compressed version of this. 
 
#include <stdio.h>
 
#define NDIGITS 15536          //max digits to compute
#define LEN (NDIGITS/4+1)*14   //nec. array length
 
long a[LEN];                   //array of 4-digit-decimals
long b;                        //nominator prev. base
long c = LEN;                  //index
long d;                        //accumulator and carry
long e = 0;                    //save previous 4 digits
long f = 10000;                //new base, 4 decimal digits
long g;                        //denom previous base
long h = 0;                    //init switch
 
int main(void) {
        for(; (b=c-=14) > 0 ;){    //outer loop: 4 digits per loop
                for(; --b > 0 ;){      //inner loop: radix conv
                        d *= b;            //acc *= nom prev base
                        if( h == 0 )
                                d += 2000*f;   //first outer loop
                        else
                                d += a[b]*f;   //non-first outer loop
                        g=b+b-1;           //denom prev base
                        a[b] = d % g;
                        d /= g;            //save carry
                }
                h = printf("%.4ld",e+d/f);//print prev 4 digits
                                         // %.4d to add leading zeros
                d = e = d % f;         //save currently 4 digits
                                       //assure a small enough d
        }
        getchar();
        return 0;
}