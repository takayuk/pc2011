
#pragma once

#include <type_index_table.h>

#include <stdlib.h>

double tf(int w_i, int d_j, index_table* corpus);
double idf(int w_i, index_table* corpus);
double tfidf(int w_i, index_table* corpus);

