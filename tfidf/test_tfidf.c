#include <parser.h>
#include <tfidf.h>

#include <stdio.h>
#include <assert.h>

int tester(char* path) {
 
  printf("started.\n");

  /// 文書集合.
  index_table table;

  assert(parse(path, &table));

  int tf_val = -1;
  assert((tf_val = tf(738, 3, &table)) > -1);
  printf("%d\n", tf_val);

  assert(tfidf(0, 0, &table) > -1.0);

  return 0;
}


int main(int argc, char* argv[]) {

  assert(argv[1]);
  tester(argv[1]);

  return 0;
}

