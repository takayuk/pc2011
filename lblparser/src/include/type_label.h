
#pragma once

typedef struct _label {

  int* numv;
  
  int** data;
  double** weight;

  int node_count;
  int case_count;
} label;

