#include <type_index_table.h>
#include <tfidf.h>

#include <stdio.h>

int tester(char* path) {
  
  /// 文書集合.
  index_table* table = NULL;

  assert(parse(path, table));

  assert(tfidf(0, 0, table) > 0.0);

  return 0;
}


int main(int argc, char* argv[]) {

  assert(argv[1]);
  tester(argv[1]);

  return 0;
}

