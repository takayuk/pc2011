#include <parser.h>
#include <tfidf.h>

#include <stdio.h>
#include <assert.h>

int tester(char* path) {
 
  printf("started.\n");

  /// 文書集合.
  index_table table;

  assert(parse(path, &table) == 0);
  assert(table.n > 0);
  assert(table.m > 0);

  int tf_val = -1;
  assert((tf_val = tf(1552, 20, &table)) > -1);
  assert((tf_val = tf(152, 520, &table)) > -1);
  assert((tf_val = tf(1234, 324, &table)) > -1);
  printf("%d\n", tf_val);

  assert(tfidf(24, &table) > -1.0);

  return 0;
}


int main(int argc, char* argv[]) {

  assert(argv[1]);
  tester(argv[1]);

  return 0;
}

