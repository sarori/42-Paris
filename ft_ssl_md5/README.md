# ft_ssl_md5

![42logo](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/240px-42_Logo.svg.png)

## Table of Content

1. [About](#about)
2. [Usage](#usage)
3. [What I leanred](#whatILeanred)
4. [License](#license)

## About <a name="about"></a>

**42Libft** is C implementation of the OpenSSL Library, with the md5 and sha256 functions.

## Usage <a name="usage"></a>

```
$> ./ft_ssl

Usage: ./ft_ssl [algo] [options] [args]

Hash algorithms available:
md5
sha256
sha224
sha512
sha384
sha1


Options available:
-p: echo STDIN to STDOUT and append the checksum to STDOUT
-q: quiet mode
-r: reverse the format of the output
-s: print the sum of the given string

```

## Run

```
$> make re
...
$> ./ft_ssl md5 test/big
MD5(test/big)= ac6d1d27a4c9af232cd35b3700858a5f

$> md5 test/big
MD5(test/big)= ac6d1d27a4c9af232cd35b3700858a5f
```
