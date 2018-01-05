
#include <bcmath.h>

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


void test1 (char *a , char* op, char* b, int scale ) 
{
  int ret = 0;
  char  c [100 ] ;
  memset ( c , 0x00, 100 ) ;


  if( strcasecmp( op, "mul" ) == 0 )
  {
      ret = bcmul ( a, b ,scale, c ) ;
  }
  else if( strcasecmp( op, "d" ) == 0 )
  {
      ret = bcdiv (  a, b ,scale,c  ) ;
  }
  else if( strcasecmp( op, "p" ) == 0 )
  {
      ret = bcadd ( a, b ,scale,c ) ;
  }
  else if( strcasecmp( op, "m" ) == 0 )
  {
      ret = bcsub ( a, b ,scale,c  ) ;
  }
  else
  {
      printf("\n[%s] invalid operator\n", op  );
  }
  printf("retVal = [%d]\n", ret );
  printf("return = [%s]\n", c );

}

void printHelp( char* aProgram )
{
    printf("\nUsage : %s lopl opt ropl  scale", aProgram );
    printf("\n opt) p(+), m(-), d(/), mul(*)" );
    printf("\n ex) $ %s 1 p 1.123 3", aProgram );
    printf("\n ex) $ %s 1 m 1.123 3", aProgram );
    printf("\n\n");
    exit(-1);
}


int main ( int argc, char* argv[] )
{
  char a[100], b[100], op[2] ;
  int  scale;

  if( argc != 5 )
  {
      printHelp( argv[0] );
  }

  memset (a, ' ', 100 ) ;
  memset (b, ' ', 100 ) ;

  strcpy( a , argv[1] );   
  strcpy( op , argv[2] );   
  strcpy( b , argv[3] );   
  scale = atoi( argv[4] );

  test1( a, op, b, scale );

  return 0;
}
