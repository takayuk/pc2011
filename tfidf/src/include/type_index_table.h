#pragma once

typedef struct _index_table {

  int n, m;
  int** data;
  double** weight;

  int* label;
  int* degree;
} index_table;

index_table* inverse(index_table* current_table);

