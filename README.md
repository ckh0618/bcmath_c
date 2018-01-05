# introduction 

bcmath libray for c language. It is just c wrapper which exposes "BCMATH for QT and C++" 
( https://github.com/DesarrollosCuado/BCMath-for-Cpp.git )

# caution

Note that "bcmath_c" libary assumes that there're enough memory in result buffer.  bcmath_c does not allocate memory for result,  so you have to allocate enough memory for that. Or it may result in buffer overflow.

# interface

```
// aRtn = aOne - aTwo  with sscale
int bcadd ( char* aOne, char* aTwo, int scale, char* aRtn ) ; 

// aRtn = aOne - aTwo  with scale
int bcsub ( char* aOne, char* aTwo, int scale, char* aRtn ) ; 

// aRtn = aOne * aTwo  with scale
int bcmul ( char* aOne, char* aTwo, int scale, char* aRtn ) ; 

// aRtn = aOne / aTwo  with scale
int bcdiv ( char* aOne, char* aTwo, int scale, char* aRtn ) ; 

// aRtn = ROUND ( aOne, scale ) 
int bcround ( char* aOne, int scale, char* aRtn ) ; 

// if aOne > aTwo then aRtn = 1 
// if aOne < aTwo then aRtn = -1 
// if aOne == aTwo then aRtn = 0 
int bccomp ( char* aOne, char* aTwo, int* aRtn ) ; 

```

# build & test 

Just type "make" , and you can get library to use. 

```
$ make 
```
And you can test bcmath_c with bctest excutable. 

```
$./bctest 55.112345 m 11.22222 4
retVal = [0]
return = [43.8901]
```


