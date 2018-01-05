#include "bcmath.h"
#include "bcmath.hpp"
#include <string.h>

int bcadd ( char* aOne, char* aTwo, int aScale, char * aRtn) 
{

  try { 
    std::string sResult = BCMath::bcadd ( aOne, aTwo, aScale ) ;
    strcpy ( aRtn, sResult.c_str());
    return  BCMATH_SUCCESS;
  } catch ( ... ) 
  {
    return BCMATH_FAILURE;
  }
}

int bcsub ( char* aOne, char* aTwo, int aScale, char * aRtn) 
{

  try { 
    std::string sResult = BCMath::bcsub ( aOne, aTwo, aScale ) ;
    strcpy ( aRtn, sResult.c_str());
    return  BCMATH_SUCCESS;
  } catch ( ... ) 
  {
    return BCMATH_FAILURE;
  }
}


int bcdiv ( char* aOne, char* aTwo, int aScale, char * aRtn) 
{

  try { 
    std::string sResult = BCMath::bcdiv ( aOne, aTwo, aScale ) ;
    strcpy ( aRtn, sResult.c_str());
    return  BCMATH_SUCCESS;
  } catch ( ... ) 
  {
    return BCMATH_FAILURE;
  }
}


int bcmul ( char* aOne, char* aTwo, int aScale, char * aRtn) 
{

  try { 
    std::string sResult = BCMath::bcmul ( aOne, aTwo, aScale ) ;
    strcpy ( aRtn, sResult.c_str());
    return  BCMATH_SUCCESS;
  } catch ( ... ) 
  {
    return BCMATH_FAILURE;
  }
}


int bcround ( char* aOne, int aScale,  char* aRtn ) 
{
  try { 
    std::string sResult = BCMath::bcround ( aOne, aScale ) ;
    strcpy ( aRtn, sResult.c_str());
    return  BCMATH_SUCCESS;
  } catch ( ... ) 
  {
    return BCMATH_FAILURE;
  }
}

int bccomp ( char* aOne, char *aTwo, int aScale,  int* aResult) 
{
  try { 
    *aResult = BCMath::bccomp ( aOne, aTwo, aScale ) ;
    return BCMATH_SUCCESS;
  } catch ( ... ) 
  {
    return BCMATH_FAILURE;
  }
}
