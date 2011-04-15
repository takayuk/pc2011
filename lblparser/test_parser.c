#include <type_label.h>
#include <stdio.h>
#include <assert.h>

int parse(char* path, label* label);

void show_labellist(label label) {

  int i, j;
  for (i = 0; i < label.node_count; ++i) {
    printf("%d ", label.numv[i]);
    for (j = 0; j < label.numv[i]; ++j) {
      printf(" %d:%lf", label.data[i][j], label.weight[i][j]);
    }
    printf("\n");
  }
}

int tester(char* path) {

  label ld;
  int is_ok = parse(path, &ld);

  assert(ld.data);
  assert(ld.numv);
  assert(ld.node_count > 0);
  assert(ld.node_count == 4);

  show_labellist(ld);
  delete_labellist(&ld);

  return is_ok;
}

int main(int argc, char** argv) {

  assert(tester("./data/test_l1.lbl") == 0);
  return 0;
}

