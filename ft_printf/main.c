
#include "includes/ft_printf.h"
#include <limits.h>
#include <stdio.h>

#define FP ft_printf


	int  main(int ac, char **av)
{

	printf("%.8x\n", 25555333);
	ft_printf("%.8x\n", 25555333);

	// ft_printf("%+d\n", 0);
	// printf("f%+d\n", 0);
	// ft_printf("%03i\n", 0);
	// printf("%03i\n", 0);
	// ft_printf("% .3i\n", 0);
	// printf("f% .3i\n", 0);
	// printf("f% .3i\n", 0);
	// ft_printf("% .3i\n", 0);
	// // printf("% +7i\n", 0);
	// ft_printf("% +7i\n", 0);
	// printf("f%+8.5i\n", 0);
	// ft_printf("%+8.5i\n", 0);
	// printf("%03i\n", 0);
	// ft_printf("%03i\n", 0);
	// printf("f%0+7i\n", 0);
	// printf("f%0 7i\n", 0);
	// printf("f% 7i\n", 0);
	// printf("f%+7i\n", 0);
	// printf("f% 7.5i\n", 0);
	// printf("f% 7.0i\n", 0);
	// printf("f%07.5i\n", 0);


	// ft_printf("%0 7i\n", 0);
	// ft_printf("%0+7i\n", 0);
	// ft_printf("% 7i\n", 0);
	// ft_printf("%+7i\n", 0);
	// ft_printf("% 7.5i\n", 0);
	// ft_printf("% 7.0i\n", 0);
	// ft_printf("%07.5i\n", 0);



	// printf("%-7d\n", 0);
	// ft_printf("%-7d\n",0);
	// printf("%+-8.5i\n", 0);
	// ft_printf("%+-8.5i\n", 0);
	// printf("% -3i\n", 0);
	// ft_printf("% -3i\n", 0);
	// printf("% -8.5i\n", 0);
	// ft_printf("% -8.5i\n", 0);

	// printf("f% -3i\n", 0);
	// ft_printf("% -3i\n", 0);
	// printf("%#c\n", 0);
	// ft_printf("%#c\n", 0);
	// printf("f{%*3d\n", 5, 0);
	// ft_printf("{%*3d}\n", 5, 0);

	//  ft_printf("%4.15s\n", "42");
	//  printf("f%4.15s\n", "42");
	//  ft_printf("%4.15s\n", "I am 42");
	//  printf("f%4.15s\n", "I am 42");
	// printf("%i\n", 0);
	// ft_printf("%i\n", 0);
	// printf("f% -3i\n", 0);
	// ft_printf("% -3i\n", 0);
	// printf("this %d number\n", 0);
	// ft_printf("this %d number\n", 0);

	// printf("%03i\n", 0);
	// ft_printf("%03i\n", 0);
	// printf("%3i\n", 0);
	// ft_printf("%3i\n", 0);
	// printf("f%+7i\n", 0);
	// ft_printf("%+7i\n", 0);
	// printf("f%+8.5d\n", 0);
	// ft_printf("%+8.5d\n", 0);
	// printf("f%+.7i\n", 234);
	// ft_printf("%+.7i\n", 234);
	// printf("fthis %i number\n", 0);
	// ft_printf("this %i number\n", 0);
	// printf("%-8.5i\n", 0);
	// ft_printf("%-8.5i\n", 0);
	// printf("f%-10.8s\n", NULL);
	// ft_printf("%-10.8s\n", NULL);
	// printf("f%3.s\n", NULL);
	// ft_printf("%3.s\n", NULL);
	// printf("f%-32s\n", NULL);
	// ft_printf("f%-32s\n", NULL);
	// ft_printf("%32s\n", "abc");
	// printf("f%32s\n", "abc");
	// ft_printf("%16s\n", "nark nark");
	// printf("%16s\n", "nark nark");

	// ft_printf("%.5s%7s\n", "yo", "boi");
	// printf("%.5s%7s\n", "yo", "boi");
	// ft_printf("%3s%3s\n", "hello", "world");
	// printf("%3s%3s\n", "hello", "world");
	// ft_printf("%7.5s\n", "bombastic");
	// printf("f%7.5s\n", "bombastic");
	// ft_printf("%5s\n", "goes over");
	// printf("%5s\n", "goes over");
	// ft_printf("%32s\n", NULL);
	// printf("f%32s\n", NULL);
	// ft_printf("%-16s\n", NULL);
	// printf("%-16s\n", NULL);//segfault
	// ft_printf("%3.s\n", NULL);
	// printf("f%3.s\n", NULL);
	// ft_printf("%.03s\n", NULL);
	// printf("f%.03s\n", NULL);
	// printf("f%2s\n", NULL);
	// ft_printf("%2s\n", NULL);
	// printf("f%s %d %p %% %x\n", "bonjour ", 42, &free, 42);
	// ft_printf("%s %d %p %% %x\n", "bonjour ", 42, &free, 42);
	// printf("%#c\n", 0);
	// ft_printf("%#c\n", 0);
	// printf("%3.s\n", NULL);
	// ft_printf("%3.s\n", NULL);
	// printf("%.c\n", 0);
	// ft_printf("%.c\n", 0);
	/*============sprintf==========================*/

	// int num1;
	// char *str = NULL;

    // char name[20];
    // // char string[200];
    
    // printf("TYPE NAME : ");
    // scanf("%s", name);
    
    // printf("TYPE AGE : ");
    // scanf("%d", &num1);
    
    // // ft_sprintf(string, "Hello World. My name is %s and I\'m %d years old.", name, num1);
    // ft_sprintf(str, "Hello World. My name is %s and I\'m %d years old.\n", name, num1);

	// /*============dprintf==========================*/
	// int fd = open("text.txt", O_RDWR);
	// ft_dprintf(fd, "Hello World. My name is %s and I\'m %d years old.\n", name, num1);
	// // sprintf(styring, "Hello World. My name is %s and I\'m %d years old.", name, num1);
    // // printf("%s", string);

	// ft_printf("this length is %n\n", "hello");
	// ft_printf("binary into 42 is %b\n", 42);
	// int     fd = open(av[1], O_RDONLY);
	// ft_dprintf(fd, );

 
	// ft_printf("%*.*d\n", 10, 5, 2);

	// printf("%");
	// ft_printf("%");
	// printf("f%2$s, %1$s!\n", "world", "hello");
	// ft_printf("%2$s, %1$s!\n", "world", "hello");
	// ft_printf("%2$s, %1$s!\n", "world", "hello");
	// static unsigned int		mx_u = 235;
	// static long double			mx_Lf = 0.375l;
	// static double				mx_f = 0.625;
	// static long				mx_li =  4223372036854775800;
	// static long long			mx_lli = 3223372036654775200;
	// static char				mx_c = 'G';
	// // static short				mx_hi = -3244;
	// // static char				mx_hhi = 'F';
	// static char			   *mx_s = "Hello, World!";
	// static int					mx_i = 42;

	// printf("  %i    %lli    %p    %o    %X    %f \n",
	// 		mx_i, mx_lli, &mx_i, mx_u, mx_u, mx_f);
	// ft_printf("  %i    %lli    %p    %o    %X    %f \n",
	// 		mx_i, mx_lli, &mx_i, mx_u, mx_u, mx_f);
	// printf("  %X    %i    %c    %lli    %o    %p  \n",
	// 		mx_u, mx_i, mx_c, mx_lli, mx_u, &mx_i);
	// ft_printf("  %X    %i    %c    %lli    %o    %p  \n",
	// 		mx_u, mx_i, mx_c, mx_lli, mx_u, &mx_i);


	// printf(
	// 		"  %i    %lli    %p    %o    %X    %f  \n",
	// 		mx_i, mx_lli, &mx_i, mx_u, mx_u, mx_f);
	// ft_printf(
	// 		"  %i    %lli    %p    %o    %X    %f  \n",
	// 		mx_i, mx_lli, &mx_i, mx_u, mx_u, mx_f);
	// printf(
	// 		"  %hhi    %li    %p    %s    %Lf    %o  \n",
	// 		mx_c, mx_li, &mx_i, mx_s, mx_Lf, mx_u);	//170
	// ft_printf(
	// 		"  %hhi    %li    %p    %s    %Lf    %o  \n",
	// 		mx_c, mx_li, &mx_i, mx_s, mx_Lf, mx_u);			

	// printf("a\n");
	// printf("  %hhi    %li    %p    %s    %Lf    %o  \n",
	// 		mx_c, mx_li, &mx_i, mx_s, mx_Lf, mx_u);
	// ft_printf("  %hhi    %li    %p    %s    %Lf    %o  \n",
	// 		mx_c, mx_li, &mx_i, mx_s, mx_Lf, mx_u);
	// 	ft_printf("  %hhi    %li    %p        %Lf    %o  \n",
	// 		mx_c, mx_li, &mx_i,  mx_Lf, mx_u);//segf
	// ft_printf("  %li    %hhi    %u    %i    %X    %o  \n",
	// 		mx_li, mx_c, mx_u, mx_i, mx_u, mx_u);//pass
	// ft_printf("  %u    %c    %p    %hhi    %X    %f  \n",
	// 		mx_u, mx_c, &mx_i, mx_c, mx_u, mx_f);

	// int i;

	// i = 0;
	// printf("%");
	// ft_printf("%");
	// i = ft_printf("%5");
	// printf("i:%d\n", i);
	// printf("this %.0f float\n", 1.6);//결과값 틀림 고치기
	// ft_printf("this %.0f floaxt\n", 1.6);

	// ft_printf("%.0f", -3.85);
// Test 1343 (f_prec0_1) : FAILED.
//     First line of code: {return test("this %.0f float", 1.6);}
//     SEGFAULT

// Test 1346 (f_prec0_negative) : FAILED.
//     First line of code: {return test("%.0f", -3.85);}
//     SEGFAULT

// Test 1347 (f_prec0_positive_3_3) : FAILED.
//     First line of code: {return test("%.0f", 573.924);}
//     SEGFAULT

	// printf("%-3.1s\n", NULL);
	// ft_printf("%-3.1s\n", NULL);
	// printf("%-9.1s\n", NULL);
	// ft_printf("%-9.1s\n", NULL);
	// printf("%20.6s\n", NULL);
	// ft_printf("%20.6s\n", NULL);

	// ft_printf("%-3.1s\n", NULL);
	// printf("f%-3.1s\n", NULL);
	// printf("f%-16s\n", NULL);
	// ft_printf("%-16s\n", NULL);
	// printf("%-32s\n", NULL);
	// ft_printf("%-32s\n", NULL);//문제 있는 경우
	// printf("%2s\n", NULL);
	// ft_printf("%2s\n", NULL);//error

	// printf("f%.09s\n", NULL);
	// ft_printf("%.09s\n", NULL);
	// ft_printf("%7.5s\n", "bombastic");//error
	// printf("%7.5s\n", "bombastic");
	// ft_printf("%3.3s%7.7s\n", "hello", "world");
	// printf("%3.3s%7.7s\n", "hello", "world");
	// ft_printf("%3.3s%3.7s\n", "hello", "world");
	// printf("f%3.3s%3.7s\n", "hello", "world");
	// ft_printf("%7.7s%3.3s\n", "hello", "world");
	// printf("%7.7s%3.3s\n", "hello", "world");


	// ft_printf("%3.7s%3.3s\n", "hello", "world");
	// printf("%3.7s%3.3s\n", "hello", "world");
	// ft_printf("%-16s\n", NULL);
	// printf("f%-16s\n", NULL);
	// ft_printf("%7.5s", "bombastic");
	// ft_printf("%2$s, %1$s!", "world", "hello");
	// ft_printf("%010x\n", 542);
	// printf("%010x\n", 542);
	// ft_printf("%10s is a string\n", "");
	// printf("%10s is a string\n", "");
	// ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
	// printf("@moulitest: %#.x %#.0x\n", 0, 0);
	// ft_printf("%7.5s\n", "bombastic");
	// printf("%7.5s\n", "bombastic");
	// ft_printf("%%\n");
	// printf("%*d", 5, 42);
	// ft_printf("%*d", 5, 42);
	// ft_printf("\n%#b\n", 8);
	// ft_printf("%#x\n", 42);
	// ft_printf("%#8x\n", 42);
	// ft_printf("%#llx\n", 9223372036854775807);
	// printf("%#llx\n", 9223372036854775807);
	//  printf("%#x\n", 42);
	// printf("%#8x\n", 42);
	//  printf("%#08x\n", 42);
	// ft_printf("%15.4s\n", "42 is the answer");
	// printf("%15.4s\n", "42 is the answer");
	// // ft_printf("%010x\n", 542);
	// // printf("%010x\n", 542);
	// ft_printf("%-#10.5x\n", 8);//error
	// printf("%-#10.5x\n", 8);
	// ft_printf("%-#10.5X\n", 8);//error
	// printf("%-#10.5X\n", 8);
	// printf("%#c\n", 0);
	// ft_printf("%#c\n", 0);
	// printf("%.5p\n", 0);
	// ft_printf("%.5p\n", 0);
	// printf("%10p\n", 0);
	// // printf("%10p\n", 0);

	// printf("f{%+03d}\n", 0);
	// ft_printf("{%+03d}\n", 0);

	// printf("%9.2p\n", 1234);
	// ft_printf("%9.2p\n", 1234);
	// printf("%.5p\n", 0);
	// ft_printf("%.5p\n", 0);

	// ft_printf("%03.2d\n", 0);
	// printf("%03.2d\n", 0);

	// printf("%15.4x\n", 42);
	// ft_printf("%15.4x\n", 42);
	// printf("%-#10.5x\n", 8);
	// ft_printf("%-#10.5x\n", 8);//error
	// printf("f%2.9p\n", 1234);
	// ft_printf("%2.9p\n", 1234);
	//  ft_printf("%#08x\n", 42);
	// printf("f%#08x\n", 42);
	// ft_printf("lenght is %n", "hello");
	// ft_printf("hello {red} good {eoc}\n");
	// ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// printf("f@moulitest: %5.x %5.0x\n", 0, 0);
	//  ft_printf("@moulitest: %5.o %5.0o\n", 0, 0);
	// printf("f@moulitest: %5.o %5.0o\n", 0, 0);
	// ft_printf("%03.2d\n", 0);
	// printf("f%03.2d\n", 0);
	// ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	// printf("f@moulitest: %5.d %5.0d\n", 0, 0);

	// ft_printf("%#-08x\n", 42);
	// printf("%#-08x\n", 42);
	// ft_printf("%#x\n", 0);
	// printf("f%#x\n", 0);
	// ft_printf("%#x\n", 42);
	// printf("f%#x\n", 42);
	//  ft_printf("%#-08o\n", 42);
	// printf("%#-08o\n", 42);
	//   ft_printf("%.5p\n", 0);
	//   printf("%.4x\n", 42);
	//   ft_printf("%.4x\n", 42);
	//   ft_printf("%d is one\n", 1);
	//   ft_printf("%03.2d\n", -1);
	//   ft_printf("@moulitest: %o\n", 0);
	//  ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);
	//  ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	// ft_printf("@moulitest: %.d %.0d\n", 0, 0);
	// ft_printf("%+d\n", 0);
	// ft_printf("%03.2d\n", 0);
	// ft_printf("@moulitest: %.d %.0d\n", 0, 0);
	// ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
 	// printf("%15.4o\n", 42);
	// ft_printf("%15.4o\n", 42);

	// ft_printf("%15.4s\n", "42 is the answer");
	// printf("%15.4s\n", "42 is the answer");

	// printf("%15.4u\n", 42);
	// ft_printf("%15.4u\n", 42);
	// printf("%.u, %.0u\n", 0, 0);
	// ft_printf("%.u, %.0u\n", 0, 0);
	// printf("%u\n", -42);
	// ft_printf("%u\n", -42);
	// printf("%#.o, %#.0o\n", 0, 0);
	// ft_printf("%#.o, %#.0o\n", 0, 0);
	// printf("%#o\n", 0);
	// ft_printf("%#o\n", 0);

	// printf("%15.4s\n", "42");
	// ft_printf("%15.4s\n", "42");
	// printf("{%f}{%lf}{%Lf}\n", -1.42, -1.42, -1.42l);
	// ft_printf("{%f}{%lf}{%Lf}\n", -1.42, -1.42, -1.42l);

	// printf("%15.4x\n", 42);
	// ft_printf("%15.4x\n", 42);
	// ft_printf("%.p, %.0p\n", 0, 0);
	// printf("%.p, %.0p\n", 0, 0);

	// printf("%15.4s\n", "I am 42");
	// ft_printf("%15.4s\n", "I am 42");
	// printf("%4.15s\n", "42");
	// ft_printf("%4.15s\n", "42");
	// printf("%4.15s\n", "I am 42");
	// ft_printf("%4.15s\n", "I am 42");
	// printf("111%s333%s555\n", "222", "444");
	// ft_printf("111%s333%s555\n", "222", "444");
	// printf("%.0p, %.p\n", 0, 0);
	// ft_printf("%.0p, %.p\n", 0, 0);
	// printf("%p\n", 0);
	// ft_printf("%p\n", 0);


	// printf("%.2c\n", NULL);
	// ft_printf("%.2c\n", NULL);
	// printf("% c\n", 0);
	// ft_printf("% c\n", 0);
	// ft_printf("@moulitest: %c\n", 0);
	// printf("@moulitest: %c\n", 0);
	// // printf("f:%.0p, %.p\n", 0, 0);
	// // ft_printf("%.0p, %.p\n", 0, 0);
	//  ft_printf("%5c\n", 42);
	// printf("%5c\n", 42);
	// ft_printf("%2c\n", 0);
	// printf("%2c\n", 0);

	// ft_printf("%-5c\n", 42);
	// printf("%-5c\n", 42);
	// printf("{%f}{%lf}{%Lf}\n", -1.42, -1.42, -1.42l);
	// ft_printf("{%f}{%lf}{%Lf}\n", -1.42, -1.42, -1.42l);

	// printf("%llu, %llu\n", 0llu, ULLONG_MAX);
	// ft_printf("%llu, %llu\n", 0llu, ULLONG_MAX);
	// ft_printf("%#c\n", 0);
	// printf("%#c\n", 0);
	// printf("{%#.5x}\n", 1);
	// ft_printf("{%#.5x}\n", 1);
	// printf("%15.4u\n", 42);
	// ft_printf("%15.4u\n", 42);
	// ft_printf("%05o\n", 42);
	// printf("1%05o\n", 42);
	// ft_printf("%015u\n", 4294967295);
	// printf("f%015u\n", 4294967295);
	// ft_printf("%b\n", 8);
	// ft_printf("%10b\n", 8);
	// ft_printf("%10.1b\n", 8);
	// ft_printf("%10.5b\n", 8);
	// ft_printf("%#10.5x\n", 8);
	// printf("%#10.5x\n", 8);
	// ft_printf("%-#10.5x\n", 8);//error
	// printf("%-#10.5x\n", 8);

	// ft_printf("%#08x\n", 42);
	// printf("%#08x\n", 42);




	// ft_printf("%05o\n", 42);
	// printf("%05o\n", 42);

	// printf("f:%s %d %p %% %x\n", "bonjour ", 42, &free, 42);
	// ft_printf("%s %d %p %% %x\n", "bonjour ", 42, &free, 42);
	// printf("%.5p\n", 0);
	// ft_printf("%.5p\n", 0);



	// printf("f:%15.4x\n", 42);
	// ft_printf("%15.4x\n", 42);

	// printf("%#c\n", 0);
	// ft_printf("%#c", 0);


	// ft_printf("%llX\n", 4294967296);
	// printf("%llX\n", 4294967296);

	// ft_printf("@moulitest: %s\n", NULL);
	// printf("@moulitest: %s\n", NULL);
	// ft_printf("@moulitest: %.x %.0x\n", 0, 0);
	// ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// ft_printf("f:%x\n", 0);
	// printf("%x\n", 0);
	// ft_printf("f:%X\n", 0);
	//  ft_printf("%x\n", 0);
	// ft_printf("%#x\n", 0);
	//   ft_printf("%hx\n", 4294967296);
	// ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
	// ft_printf("@moulitest: %.x %.0x\n", 0, 0);
	// ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// printf("%#x\n", 0);
	// printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// printf("@moulitest: %#.x %#.0x\n", 0, 0);
	// printf("@moulitest: %.x %.0x\n", 0, 0);
	// printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// ft_printf("%05o\n", 42);
	// ft_printf("@moulitest: %.10o\n", 42);
	// ft_printf("@moulitest: %o\n", 0);
	// ft_printf("@moulitest: %5.o %5.0o\n", 0, 0);
	//   ft_printf("@moulitest: %o\n", 0);
	// ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);
	
	// ft_printf("%-#6o\n", 2500);
	// ft_printf("%-5.10o\n", 2500);
	// ft_printf("%-5.10o\n", 2500);

	// ft_printf("%-10.5d\n", 4242);
	//  ft_printf("%-10.5d\n", 4242);
	//  ft_printf("%-+10.5d\n", 4242);

	// ft_printf("@moulitest: %c\n", 0);
	// printf("@moulitest: %c\n", 0);
	// ft_printf("%-10.5d\n", 4242);
	// ft_printf("%03.2d\n", 0);
	// ft_printf("%03.2d\n", 1);
	// ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
	// ft_printf("@moulitest: %.x %.0x\n", 0, 0);
	// ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	// ft_printf("%+u\n", 4294967295);
	// printf("%+u\n", 4294967295);
	// ft_printf("% u\n", 4294967295);
	// ft_printf("%-+10.5\n", 4242);
	// ft_printf("%-+10.5d\n", 4242);
	// ft_printf("%-5d\n", -42);
	// ft_printf("%-05d\n", -42);
	
	// ft_printf("%-5o\n", 2500);
	// ft_printf("%-#6o\n", 2500);
	// printf("%-5o\n", 2500);
	// printf("%-#6o\n", 2500);
	// ft_printf("%-5.10o\n", 2500);
	// ft_printf("%-10.5o\n", 2500);
	// ft_printf("%010x\n", 542);
	// ft_printf("%#08x", 42);



	// ft_printf("%2c\n", 0);
	// ft_printf("null %c and text\n", 0);
	// ft_printf("% c\n", 0);
	
	// ft_printf("%-#6o\n", 2500);
	// ft_printf("%-5.10o\n", 2500);
	// ft_printf("%-10.5o", 2500);
	// ft_printf("@moulitest: %.x %.0x", 0, 0);
	// ft_printf("%s%s%s%s%s", "this", "is", "a", "multi", "string");
	// ft_printf("%#x\n", 42);
	// ft_printf("%#8x\n", 42);
	// ft_printf("%#x\n", 42);
	// ft_printf("%10s is a string\n", "");
	// ft_printf("%5.2s is a string\n", "");
	// ft_printf("%-10s is a string\n", "");
	// ft_printf("%d\n", -12.44);
	// printf("f:%d\n", -12.44);

	// ft_printf("%llX", 4294967296);
	// ft_printf("%#x", 0);
	// printf("%#08x\n", 42);
	// ft_printf("%#08x\n", 42);
	// printf("%#8x\n", 42);
	// ft_printf("%#8x\n", 42);
	
	// printf("%#x\n", 0);
	// ft_printf("%#x\n", 0);
	
	//  ft_printf("%-10.5o", 2500);
	// ft_printf("%x", 42);
	//ft_printf("hello my namd is %-+#15s , love % 05s,\t%#0 32d\n", "saro", "andy", 20);
	
	// ft_printf("hello my name is %#15.6ls, love % 05.20lls,\t%#0 32Ld\n", "saro", "andy", 20);
	// printf("%d\n", 1 << 2);
	// printf("hello my namd is %-+#15.ls, love % 05.0s,\t%#0 32Ld\n", "saro", "andy", 20);
	// ft_printf("hello my namd is %-+#s , love % 0s,\t%#0 d\n", "saro", "andy", 20);
	// printf("hello %c\n", 'a');	
	// FP("hello %c\n", 'p');
	// FP("hello %s\n", "abc");


	// printf("%-f\n", 392.52);
	// FP("%-f\n", 392.5215523);
	// printf("%-f\n", 392.5215523);
	// FP("%-.4f\n", 12415.12379302);
	// printf("origin %-.4f\n", 12415.12379302);
	// FP("%-f\n", 132.25);
	// printf("%-f\n", 132.25);


	// printf("%f\n", 392.52);
	// printf("%-f\n", 392.52);
	// printf("%-+f\n", 392.52);
	// printf("%- f\n", 392.52);

	// FP("%f\n", 392.52);
	// FP("%-f\n", 392.52);
	// FP("%-+f\n", 392.52);
	// FP("%- f\n", 392.52);

	// printf("%f\n", -392.52);
	// printf("%-f\n", -392.52);
	// printf("%-+f\n", -392.52);
	// printf("%- f\n", -392.52);

	// FP("%f\n", -392.52);
	// FP("%-f\n", -392.52);
	// FP("%-+f\n", -392.52);
	// FP("%- f\n", -392.52);

	
	// printf("%5f\n", 392.52);
	// printf("%10f\n", 392.52);
	// printf("%20f\n", 392.52);
	// printf("%#f\n", 392.0);
	// printf("%#.0f\n", 392.12);
	// printf("%#20f\n", 392.);
	// printf("%+.5f\n", 392.52);
	// printf("%0+.5f\n", 392.52);
	// printf("%0+20.5f\n", 392.52);
	// printf("%20f\n", 392.52);
	// printf("%0+15.8f\n", 392.52);

	// printf("=====================\n");
	// FP("%5f\n", 392.52);
	// FP("%10f\n", 392.52);
	// FP("%20f\n", 392.52);
	// FP("%#f\n", 392.0);
	// FP("%#.0f\n", 392.12);
	// FP("%#20f\n", 392.);
	// FP("%+.5f\n", 392.52);
	// FP("%0+.5f\n", 392.52);
	// FP("%0+20.5f\n", 392.52);
	// FP("%20f\n", 392.52);
	// FP("%0+15.8f\n", 392.52);
	// FP("%20.1f\n", 392.52);
	// FP("%20.3f\n", 392.52);
	// printf("=====================\n");
	// printf("%5f\n", -392.52);
	// printf("%10f\n", -392.52);
	// printf("%20f\n", -392.52);
	// printf("%#f\n", -392.0);
	// printf("%#.0f\n", -392.12);
	// printf("%#20f\n", -392.);
	// printf("%+.5f\n", -392.52);
	// printf("%0+.5f\n", -392.52);
	// printf("%0+20.5f\n", 392.52);
	// printf("%20f\n", 392.52);


	// printf("%-0f\n", 392.52);
	// printf("%-#+f\n", 392.52699708);
	// printf("%-#.0f\n", 392.0);
	// printf("%-.0f\n", 392.0);
	// printf("%-.0f\n", 392.12);
	


	// FP("%-0f\n", 392.52);
	// FP("%-#+f\n", 392.52699708);
	// FP("%-#.0f\n", 392.0);
	// FP("%-.0f\n", 392.0);
	// FP("%-.0f\n", 392.12);

	// FP("%f\n", 392.52);
	// FP("%-f\n", 392.52);
	// FP("%+f\n", 392.52);
	// FP("% f\n", 392.52);
	// FP("%#+f\n", 392.52699708);
	// FP("%0f\n", 392.52);
	// FP("%5f\n", 392.52);
	// FP("%10f\n", 392.52);
	// FP("%20f\n", 392.52);

	// printf("%+.5f\n", 392.52);
	// printf("%0+.5f\n", 392.52);
	// printf("%0+20.5f\n", 392.52);
	// printf("%20f\n", 392.52);

	// FP("%+.5f\n", 392.52);
	// FP("%0+.5f\n", 392.52);
	// FP("%0+20.5f\n", 392.52);
	// FP("%20f\n", 392.52);











	









	// printf("==========d&i============\n");
	// printf("%+07i\n", 5030);
	// printf("% 07i\n", 5030);
	// printf("%+0i\n", -5030);

	// FP("%+07i\n", 5030);
	// FP("% 07i\n", 5030);
	// FP("%+0i\n", -5030);

	// printf("% 07d\n", 5030);
	// printf("% 07d\n", -5030);
	// printf("%07d\n", -5030);
	// printf("%07d\n", 5030);
	// printf("%+07d\n", -5030);
	// printf("%+07d\n", 5030);
	// printf("% 07d\n", -5030);

	// FP("% 07d\n", 5030);
	// FP("% 07d\n", -5030);
	// FP("%07d\n", -5030);
	// FP("%07d\n", 5030);
	// FP("%+07d\n", -5030);
	// FP("%+07d\n", 5030);
	// FP("% 07d\n", -5030);



	// printf("%+4.4d\n", 5030);
	// printf("%+5.4d\n", 5030);
	// printf("%+5.5d\n", -5030);
	// printf("%+4.4d\n", -5030);
	// printf("%+5.4d\n", -5030);
	// printf("%+5.8d\n", -5030);
	// printf("==========FP============\n");
	// FP("%+4.4d\n", 5030);
	// FP("%+5.4d\n", 5030);
	// FP("%+5.5d\n", -5030);
	// FP("%+4.4d\n", -5030);//
	// FP("%+5.4d\n", -5030);
	// FP("%+5.8d\n", -5030);//



	// printf("%d\n", 5030);
	// printf("%-d\n", 5030);
	// printf("%-d\n", 5030);
	// printf("%+d\n", 5030);
	// printf("% -10d\n", 5030);
	// printf("%- d\n", 5030);
	// printf("% d\n", 5030);
	// printf("%03d\n\n", 5030);
	// printf("%d\n\n", -5030);

	// FP("%d\n", 5030);
	// FP("-%d\n", 5030);
	// FP("%-d\n", 5030);
	// FP("%+d\n", 5030);
	// FP("% -10d\n", 5030);
	// FP("%- d\n", 5030);
	// FP("% d\n", 5030);
	// FP("%03d\n\n", 5030);
	// FP("%d\n\n", -5030);

	// printf("%d\n", -5030);
	// printf("%-d\n", -5030);
	// printf("%+d\n", -5030);
	// printf("% d\n", -5030);
	// printf("%010d\n", -5030);
	// printf("%3d\n", 5030);
	// printf("%3d\n", -5030);
	// printf("%4d\n", 5030);
	// printf("%4d\n", -5030);
	// printf("%5d\n", 5030);
	// printf("%5d\n", -5030);

	// FP("%d\n", -5030);
	// FP("%-d\n", -5030);
	// FP("%+d\n", -5030);
	// FP("% d\n", -5030);
	// FP("%010d\n", -5030);
	// FP("%3d\n", 5030);
	// FP("%3d\n", -5030);
	// FP("%4d\n", 5030);
	// FP("%4d\n", -5030);
	// FP("%5d\n", 5030);
	// FP("%5d\n", -5030);

	// printf("===============================\n");
	// printf("%.3d\n", 5030);
	// printf("%.4d\n", 5030);
	// printf("%.5d\n", 5030);
	// printf("%.3d\n", -5030);
	// printf("%.4d\n", -5030);
	// printf("%0.5d\n", -5030);
	// printf("%4.5d\n", -5030);
	// printf("%5.5d\n", -5030);
	// printf("%6.5d\n", -5030);
	// printf("%7.5d\n", -5030);
	// printf("% 7.4d\n", 5030);
	// printf("%+7.4d\n", 5030);
	// printf("%4.4d\n", -5030);
	// printf("%4.6d\n", -5030);
	
	// printf("===============================\n");
	// FP("%.3d\n", 5030);
	// FP("%.4d\n", 5030);
	// FP("%.5d\n", 5030);
	// FP("%.3d\n", -5030);
	// FP("%.4d\n", -5030);
	// FP("%.5d\n", -5030);
	// FP("%4.5d\n", -5030);
	// FP("%5.5d\n", -5030);
	// FP("%6.5d\n", -5030);
	// FP("%7.5d\n", -5030);
	// FP("% 7.4d\n", 5030);
	// FP("%+7.4d\n", 5030);
	// FP("%4.4d\n", -5030);
	// FP("%4.6d\n", -5030);
	// printf("===============================\n");
	// printf("%.5d\n", 5030);
	// printf("%4.5d\n", 5030);
	// printf("%5.5d\n", 5030);
	// printf("%6.5d\n", 5030);
	// printf("%7.5d\n", 5030);
	// FP("%.5d\n", 5030);//6
	// FP("%4.5d\n", 5030);//6
	// FP("%5.5d\n", 5030);//6
	// FP("%6.5d\n", 5030);//6
	// FP("%7.5d\n", 5030);

	// printf("======================\n");
	// printf("dd:%u\n", 5030);
	// printf("dd:%-u\n", 5030);
	// printf("dd:%0u\n", 5030);
	// printf("dd:%3u\n", 5030);
	// printf("dd:%10u\n", 5030);
	// printf("dd:%3.3u\n", 5030);
	// printf("dd:%3.4u\n", 5030);
	// printf("dd:%3.5u\n", 5030);
	// printf("dd:%5.1u\n", 5030);
	// printf("dd:%5.3u\n", 5030);
	// printf("dd:%5.5u\n", 5030);

	// FP("==========================\n");
	// FP("%u\n", 5030);
	// FP("%-u\n", 5030);
	// FP("%0u\n", 5030);
	// FP("%3u\n", 5030);
	// FP("%10u\n", 5030);
	// FP("%3.3u\n", 5030);
	// FP("%3.4u\n", 5030);
	// FP("%3.5u\n", 5030);
	// FP("%5.1u\n", 5030);
	// FP("%5.3u\n", 5030);
	// FP("%5.5u\n", 5030);


	// printf("dd:%X\n", 5030);
	// printf("dd:%-X\n", 5030);
	// printf("dd:%#X\n", 5030);
	// printf("dd:%0X\n", 5030);
	// FP("%X\n", 5030);
	// FP("%-X\n", 5030);
	// FP("%#X\n", 5030);
	// FP("%0X\n", 5030);
	
	
	// printf("============FP=============\n");


	/*================x test=====================*/
	/*===============checked=====================*/
	// printf("=============printf=============\n");
	// printf("dd: %lo\n", (unsigned long)610);//1142
	// FP("%lo\n", (unsigned long)610);
	// printf("dd: %-x\n", 5030);
	// FP("%-x\n", 5030);
	// printf("dd: %#x\n", 5030);
	// FP("%#x\n", 5030);
	// printf("dd: %0x\n", 5030);
	// FP("%0x\n", 5030);
	// printf("=======================\n");
	// printf("dd:%04x\n", 5030);
	// FP("%04x\n", 5030);
	// printf("dd:%06x\n", 5030);
	// FP("%06x\n", 5030);
	// printf("dd:%02x\n", 5030);
	// FP("%02x\n", 5030);
	// printf("dd:%5x\n",5030);
	// FP("%5x\n", 5030);
	// printf("dd:%3x\n", 5030);
	// FP("%3x\n", 5030);
	// printf("dd:%2.2x\n", 5030);
	// FP("%2.2x\n", 5030);
	// printf("dd:%#2.2x\n", 5030);
	// FP("%#2.2x\n", 5030);
	// printf("dd:%02.2x\n", 5030);
	// FP("%02.2x\n", 5030);
	// printf("==========FP=============\n");

	// printf("dd:%x\n", 5030);//1142
	// printf("dd:%-x\n", 5030);
	// printf("dd:%#x\n", 5030);
	// printf("dd:%0x\n", 5030);
	// printf("=======================\n");
	// printf("dd:%04x\n", 5030);
	// printf("dd:%06x\n", 5030);
	// printf("dd:%02x\n", 5030);
	// printf("dd:%5x\n", 5030);
	// printf("dd:%3x\n", 5030);
	// printf("dd:%2.2x\n", 5030);
	// printf("dd:%#2.2x\n", 5030);
	// printf("dd:%02.2x\n", 5030);

	// FP("=========fd==============\n");
	// FP("%x\n", 5030);//1142
	// FP("%-x\n", 5030);
	// FP("%#x\n", 5030);
	// FP("%0x\n", 5030);
	// FP("=======================\n");
	// FP("%04x\n", 5030);
	// FP("%06x\n", 5030);
	// FP("%02x\n", 5030);
	// FP("%5x\n", 5030);
	// FP("%3x\n", 5030);
	// FP("%2.2x\n", 5030);
	// FP("%#2.2x\n", 5030);
	// FP("%02.2x\n", 5030);






	// FP("%-o\n", 610);
	// FP("%#o\n", 610);
	// FP("%0o\n", 610);
	// FP("%04o\n", 610);
	// FP("%06o\n", 610);
	// FP("%02o\n", 610);
	// FP("%5o\n", 610);
	// FP("%3o\n", 610);


	// printf("=======================\n");
	// printf("%#.3o\n", 610);
	// printf("%.4o\n", 610);
	// printf("%#.4o\n", 610);
	// printf("%.5o\n", 610);
	// printf("%#.5o\n", 610);
	// printf("%.7o\n", 610);
	// printf("%#.7o\n", 610);
	// printf("=======================\n");
	// FP("%#.3o\n", 610);
	// FP("%.4o\n", 610);
	// FP("%#.4o\n", 610);
	// FP("%#.5o\n", 610);
	// FP("%#.5o\n", 610);
	// FP("%.7o\n", 610);
	// FP("%#.7o\n", 610);

	// printf("=======================\n");
	// printf("%3.3o\n", 610);
	// printf("%3.4o\n", 610);
	// printf("%3.5o\n", 610);
	// printf("=======================\n");
	// printf("%4.3o\n", 610);
	// printf("%04.4o\n", 610);
	// printf("%4.5o\n", 610);
	// printf("=======================\n");
	// printf("=======================\n");
	// FP("%3.3o\n", 610);
	// FP("%3.4o\n", 610);
	// FP("%3.5o\n", 610);
	// FP("=======================\n");
	// FP("%4.3o\n", 610);
	// FP("%04.4o\n", 610);
	// FP("%4.5o\n", 610);
	// FP("=======================\n");




	// printf("============checked===========\n");
	// printf("===========printf============\n");
	// printf("%#02.2o\n", 610);
	// printf("%#4.4o\n", 610);
	// printf("%#4.5o\n", 610);
	// printf("=======================\n");
	// printf("%5.3o\n", 610);
	// printf("%5.4o\n", 610);
	// printf("%5.5o\n", 610);
	// printf("=======================\n");
	// printf("%#5.3o\n", 610);
	// printf("%#5.4o\n", 610);
	// printf("%#5.5o\n", 610);
	// printf("%#5.6o\n", 610);
	// printf("%#5.7o\n", 610);
	// printf("%#7.5o\n", 610);
	// write(1, "fp\n", 3);
	// FP("%#02.2o\n", 610);
	// FP("%#4.4o\n", 610);
	// FP("%#4.5o\n", 610);
	// FP("=======================\n");
	// FP("%5.3o\n", 610);
	// FP("%5.4o\n", 610);
	// FP("%5.5o\n", 610);
	// FP("=======================\n");
	// FP("%#5.3o\n", 610);
	// FP("%#5.4o\n", 610);
	// FP("%#5.5o\n", 610);
	// FP("%#5.6o\n", 610);
	// FP("%#5.7o\n", 610);
	// FP("%#7.5o\n", 610);







	// FP("%p\n", ptr);
	













	
	// printf("p : %5.2i\n", 12345);
	// printf("p : %5.2i\n", -2345);
	// printf("p : %6.2i\n", -12345);
	// printf("p : %8.2i\n", -12345);
	// printf("p : %5.4i\n", 1);
	// printf("p : %5.2i\n", 1234567);
	// printf("p : %5.2i\n", 123456789);
	// printf("===================\n");
	// FP("%5.2i\n", 12345);
	// FP("%5.2i\n", -2345);
	// FP("%6.2i\n", -12345);
	// FP("%8.2i\n", -12345);
	// FP("%5.4i\n", 1);
	// FP("%5.2i\n", 1234567);
	// FP("%5.2i\n", 123456789);


	// printf("%c\n", 'a');
	// printf("%5c\n", 'a');
	// printf("%2c\n", 'a');
	// printf("%-c\n", 'a');
	// printf("%-5c\n", 'a');
	// printf("%-8c\n", 'a');
	// printf("%8c\n", 'a');

	// // printf("==================\n");
	// FP("%c\n", 'a');
	// FP("%5c\n", 'a');
	// FP("%2c\n", 'a');
	// FP("%-c\n", 'a');
	// FP("%-5c\n", 'a');
	// FP("-8c\n", 'a');
	// FP("8c\n", 'a');

	
	
	/*================s test=====================*/
	// printf("============================\n");
	// printf("=======checked============\n");
	// printf("=======FP============\n");
	// FP("%s\n", "abc");
	// FP("%-s\n", "abc");
	// FP("%.s", "abc");
	// FP("%5.1s", "abc");
	// FP("%5.3s", "abc");
	// FP("%5.5s", "abc");
	// printf("=======width(x)============\n");
	// printf("%.s\n", "abc");
	// printf("%5.1s\n", "abc");
	// printf("%5.3s\n", "abc");
	// printf("%5.5s\n", "abc");
	// printf("=======printf============\n");
	// printf("%s\n", "abc");
	// printf("%-s\n", "abc");
	// printf("%-1s\n", "abc");
	// printf("%-3s\n", "abc");
	// printf("%-5s\n", "abc");

	// printf("%1s\n", "abc");
	// printf("%3s\n", "abc");
	// printf("%5s\n", "abc");
	// printf("%.2s\n", "abc");
	// printf("%.0s\n", "abc");
	// printf("%.s\n", "abc");

	// printf("=======FP============\n");
	// FP("%s\n", "abc");
	// FP("%-s\n", "abc");
	// FP("%-1s\n", "abc");
	// FP("%-3s\n", "abc");
	// FP("%-5s\n", "abc");
	// FP("%1s\n", "abc");
	// FP("%3s\n", "abc");
	// FP("%5s\n", "abc");
	// FP("%.2s\n", "abc");
	// FP("%.0s\n", "abc");
	// FP("%.s\n", "abc");
	// printf("%.s\n", "abc");
	// printf("%.1s\n", "abc");
	// printf("%.3s\n", "abc");
	// printf("%.5s\n", "abc");
	// printf("====================\n");
	// FP("%.s\n", "abc");
	// FP("%.1s\n", "abc");
	// FP("%.3s\n", "abc");
	// FP("%.5s\n", "abc");
	// printf("====================\n");
	// printf("%-.s\n", "abc");
	// printf("%-5.1s\n", "abc");
	// printf("%-5.3s\n", "abc");
	// printf("%-5.5s\n", "abc");
	// printf("====================\n");
	// FP("%-.s\n", "abc");
	// FP("%-5.1s\n", "abc");
	// FP("%-5.3s\n", "abc");
	// FP("%-5.5s\n", "abc");
	// printf("====================\n");
	// printf("%-.s\n", "abc");
	// printf("%-.1s\n", "abc");
	// printf("%-.3s\n", "abc");
	// printf("%-.5s\n", "abc");
	// printf("====================\n");
	// printf("====================\n");
	// FP("%-.s\n", "abc");
	// FP("%-.1s\n", "abc");
	// FP("%-.3s\n", "abc");
	// FP("%-.5s\n", "abc");
	// FP("====================\n");
	// printf("%5.1s\n", "abc");
	// printf("%-5.1s\n", "abc");
	// printf("%5.7s\n", "abc");
	// printf("%1.5s\n", "abc");
	// printf("====================\n");

	// FP("%5.1s\n", "abc");
	// FP("%-5.1s\n", "abc");
	// FP("%5.7s\n", "abc");
	// FP("%1.5s\n", "abc");

	/*================p test=====================*/
	/*===============checked=====================*/
	// printf("=============printf=============\n");
	// int	i;
	// int	*ptr;

	// i = 2;
	// ptr = &i;
	// printf("=============printf=============\n");
	// printf("=============printf=============\n");
	
	// printf("%p\n", ptr);
	// printf("%-p\n", ptr);
	// printf("%5p\n", ptr);
	// printf("%-5p\n", ptr);
	// printf("%20p\n", ptr);
	// printf("%-20p\n", ptr);
	// printf("=============FP=============\n");
	// FP("%p\n", ptr);
	// FP("%-p\n", ptr);
	// FP("%5p\n", ptr);
	// FP("%20p\n", ptr);
	// FP("%-20p\n", ptr);


	/*================o test=====================*/
	/*===============checked=====================*/
	// printf("=============printf=============\n");
	// printf("dd: %lo\n", (unsigned long)610);//1142
	// FP("%lo\n", (unsigned long)610);
	// printf("dd: %-o\n", 610);
	// FP("%-o\n", 610);
	// printf("dd: %#o\n", 610);
	// FP("%#o\n", 610);
	// printf("dd: %0o\n", 610);
	// FP("%0o\n", 610);
	// printf("=======================\n");
	// printf("dd :%04o\n", 610);
	// FP("%04o\n", 610);
	// printf("dd:%06o\n", 610);
	// FP("%06o\n", 610);
	// printf("dd:%02o\n", 610);
	// FP("%02o\n", 610);
	// printf("dd:%5o\n", 610);
	// FP("%5o\n", 610);
	// printf("dd:%3o\n", 610);
	// FP("%3o\n", 610);
	// printf("dd:%2.2o\n", 610);
	// FP("%2.2o\n", 610);
	// printf("dd:%#2.2o\n", 610);
	// FP("%#2.2o\n", 610);
	// printf("dd:%02.2o\n", 610);
	// FP("%02.2o\n", 610);
	// printf("==========FP=============\n");

	// FP("%o\n", 610);//1142
	// FP("%-o\n", 610);
	// FP("%#o\n", 610);
	// FP("%0o\n", 610);
	// FP("=======================\n");
	// FP("%04o\n", 610);
	// FP("%06o\n", 610);
	// FP("%02o\n", 610);
	// FP("%5o\n", 610);
	// FP("%3o\n", 610);
	// FP("%2.2o\n", 610);
	// FP("%#2.2o\n", 610);
	// FP("%02.2o\n", 610);





	// FP("%-o\n", 610);
	// FP("%#o\n", 610);
	// FP("%0o\n", 610);
	// FP("%04o\n", 610);
	// FP("%06o\n", 610);
	// FP("%02o\n", 610);
	// FP("%5o\n", 610);
	// FP("%3o\n", 610);


	// printf("=======================\n");
	// printf("%#.3o\n", 610);
	// printf("%.4o\n", 610);
	// printf("%#.4o\n", 610);
	// printf("%.5o\n", 610);
	// printf("%#.5o\n", 610);
	// printf("%.7o\n", 610);
	// printf("%#.7o\n", 610);
	// printf("=======================\n");
	// FP("%#.3o\n", 610);
	// FP("%.4o\n", 610);
	// FP("%#.4o\n", 610);
	// FP("%#.5o\n", 610);
	// FP("%#.5o\n", 610);
	// FP("%.7o\n", 610);
	// FP("%#.7o\n", 610);

	// printf("=======================\n");
	// printf("%3.3o\n", 610);
	// printf("%3.4o\n", 610);
	// printf("%3.5o\n", 610);
	// printf("=======================\n");
	// printf("%4.3o\n", 610);
	// printf("%04.4o\n", 610);
	// printf("%4.5o\n", 610);
	// printf("=======================\n");
	// printf("=======================\n");
	// FP("%3.3o\n", 610);
	// FP("%3.4o\n", 610);
	// FP("%3.5o\n", 610);
	// FP("=======================\n");
	// FP("%4.3o\n", 610);
	// FP("%04.4o\n", 610);
	// FP("%4.5o\n", 610);
	// FP("=======================\n");




	// printf("============checked===========\n");
	// printf("===========printf============\n");
	// printf("%#02.2o\n", 610);
	// printf("%#4.4o\n", 610);
	// printf("%#4.5o\n", 610);
	// printf("=======================\n");
	// printf("%5.3o\n", 610);
	// printf("%5.4o\n", 610);
	// printf("%5.5o\n", 610);
	// printf("=======================\n");
	// printf("%#5.3o\n", 610);
	// printf("%#5.4o\n", 610);
	// printf("%#5.5o\n", 610);
	// printf("%#5.6o\n", 610);
	// printf("%#5.7o\n", 610);
	// printf("%#7.5o\n", 610);
	// write(1, "fp\n", 3);
	// FP("%#02.2o\n", 610);
	// FP("%#4.4o\n", 610);
	// FP("%#4.5o\n", 610);
	// FP("=======================\n");
	// FP("%5.3o\n", 610);
	// FP("%5.4o\n", 610);
	// FP("%5.5o\n", 610);
	// FP("=======================\n");
	// FP("%#5.3o\n", 610);
	// FP("%#5.4o\n", 610);
	// FP("%#5.5o\n", 610);
	// FP("%#5.6o\n", 610);
	// FP("%#5.7o\n", 610);
	// FP("%#7.5o\n", 610);


	/*================x test=====================*/
	/*===============checked=====================*/
	// printf("=============printf=============\n");
	// printf("dd: %lo\n", (unsigned long)610);//1142
	// FP("%lo\n", (unsigned long)610);
	// printf("dd: %-x\n", 5030);
	// FP("%-x\n", 5030);
	// printf("dd: %#x\n", 5030);
	// FP("%#x\n", 5030);
	// printf("dd: %0x\n", 5030);
	// FP("%0x\n", 5030);
	// printf("=======================\n");
	// printf("dd:%04x\n", 5030);
	// FP("%04x\n", 5030);
	// printf("dd:%06x\n", 5030);
	// FP("%06x\n", 5030);
	// printf("dd:%02x\n", 5030);
	// FP("%02x\n", 5030);
	// printf("dd:%5x\n",5030);
	// FP("%5x\n", 5030);
	// printf("dd:%3x\n", 5030);
	// FP("%3x\n", 5030);
	// printf("dd:%2.2x\n", 5030);
	// FP("%2.2x\n", 5030);
	// printf("dd:%#2.2x\n", 5030);
	// FP("%#2.2x\n", 5030);
	// printf("dd:%02.2x\n", 5030);
	// FP("%02.2x\n", 5030);
	// printf("==========FP=============\n");

	// printf("dd:%x\n", 5030);//1142
	// printf("dd:%-x\n", 5030);
	// printf("dd:%#x\n", 5030);
	// printf("dd:%0x\n", 5030);
	// printf("=======================\n");
	// printf("dd:%04x\n", 5030);
	// printf("dd:%06x\n", 5030);
	// printf("dd:%02x\n", 5030);
	// printf("dd:%5x\n", 5030);
	// printf("dd:%3x\n", 5030);
	// printf("dd:%2.2x\n", 5030);
	// printf("dd:%#2.2x\n", 5030);
	// printf("dd:%02.2x\n", 5030);

	// FP("=========fd==============\n");
	// FP("%x\n", 5030);//1142
	// FP("%-x\n", 5030);
	// FP("%#x\n", 5030);
	// FP("%0x\n", 5030);
	// FP("=======================\n");
	// FP("%04x\n", 5030);
	// FP("%06x\n", 5030);
	// FP("%02x\n", 5030);
	// FP("%5x\n", 5030);
	// FP("%3x\n", 5030);
	// FP("%2.2x\n", 5030);
	// FP("%#2.2x\n", 5030);
	// FP("%02.2x\n", 5030);

	// printf("==============================\n");
	// printf("==========percent============\n");
	// printf("%%\n");
	// printf("%0%\n");
	// printf("%5%\n");
	// printf("%4.6%\n");
	// printf("=====================\n");
	// FP("%%\n");
	// FP("%0%\n");
	// FP("%5%\n");
	// FP("%4.6%\n");

	// printf("=====================\n");
	// printf("%05.3%\n");
	// printf("%-05.0%\n");
	// printf("%+%\n");
	// printf("%-%\n");
	// printf("% %\n");
	// printf("% 5%\n");
	// printf("%+5%\n");
	// printf("%-5%\n");
	// printf("%-05%\n");
	// printf("%05%\n");
	// printf("=====================\n");
	
	// FP("%05.3%\n");
	// FP("%-05.0%\n");
	// FP("%+%\n");
	// FP("%-%\n");
	// FP("% %\n");
	// FP("% 5%\n");
	// FP("%+5%\n");
	// FP("%-5%\n");
	// FP("%-05%\n");
	// FP("%05%\n");







	return (0);
	(void)av[ac -1];
}
