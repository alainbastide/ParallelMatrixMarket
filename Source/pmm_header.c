/*! \file pmm_header.c
 \brief Implementation of header routines.
*/
#include "pmm_header.h"
#include <mpi.h>
#include <stdio.h>

/******************************************************************************/
void PMM_PrintHeader(PMM_Header header) {
  printf("%%%%MatrixMarket matrix ");
  switch (header.format) {
  case COORDINATE:
    printf("coordinate");
    break;
  case ARRAY:
    printf("array");
    break;
  }
  printf(" ");
  switch (header.data_type) {
  case REAL:
    printf("real");
    break;
  case INTEGER:
    printf("integer");
    break;
  case COMPLEX:
    printf("complex");
    break;
  case PATTERN:
    printf("pattern");
    break;
  }
  printf(" ");
  switch (header.symmetric) {
  case GENERAL:
    printf("general");
    break;
  case SYMMETRIC:
    printf("symmetric");
    break;
  case SKEWSYMMETRIC:
    printf("skew-symmetric");
    break;
  case HERMITIAN:
    printf("hermitian");
    break;
  }
  printf("\n");
  printf("%ld %ld %ld \n", header.matrix_rows, header.matrix_columns,
         header.total_elements);
}
