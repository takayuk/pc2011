#pragma once

typedef struct _word_hash {

  int word_id;
  
  double tf;
  double df;
  double tfidf;

  struct _word_hash* next;
} word_hash;

