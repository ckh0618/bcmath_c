#pragma once 

#ifdef __cplusplus
extern "C"  { 
#endif 

  // aRtn = aOne + aTwo  with scale 
  int bcadd ( char* aOne, char* aTwo , int scale,  char* aRtn ) ;

  // aRtn = aOne - aTwo  with scale 
  int bcsub ( char* aOne, char* aTwo , int scale,  char* aRtn ) ;
  
  // aRtn = aOne * aTwo  with scale 
  int bcmul ( char* aOne, char* aTwo , int scale,  char* aRtn ) ;

  // aRtn = aOne / aTwo  with scale 
  int bcdiv ( char* aOne, char* aTwo , int scale,  char* aRtn ) ;

  // aRtn = round(aOne)  with scale 
  int bcround ( char* aOne, int scale,  char* aRtn ) ;

  // if aOne > aTwo  -> returns 1 
  // if aOne < aTwo  -> returns -1 
  // if aOne == aTwo  -> returns 0 
  int bccomp ( char* aOne, char* aTwo, int scale, int *aRtn ) ;

  enum { BCMATH_SUCCESS, BCMATH_FAILURE } ;

#ifdef __cplusplus
} 
#endif 


