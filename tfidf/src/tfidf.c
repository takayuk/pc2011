#include "include/type_index_table.h"


/**
 * @brief 文書集合 d における, 単語 i のTF-IDF値を求める.
 * @param[in] i 単語 ID.
 * @param[in] j 文書 ID.
 * @param[in] d ラベルリスト形式の文書集合.
 * @retval tfidf値.
 */
int tf(int w_i, int j, index_table* d) {

  int tf_val = 0;

  int i;
  for (i = 0; i < d->degree[j]; ++i) {
    if (d->data[j][i] == w_i) {
      tf_val = d->weight[j][i];
      break;
    }
  }

  return tf_val;
}


/**
 * @brief 文書集合 d における, 単語 i のTF-IDF値を求める.
 * @param[in] i 単語 ID.
 * @param[in] d ラベルリスト形式の(転置インデックス)文書集合.
 * @retval tfidf値.
 */
int df(int i, index_table* d) {

  return 0;
}


/**
 * @brief 文書集合 d における, 単語 i のTF-IDF値を求める.
 * @param[in] i 単語 ID.
 * @param[in] d ラベルリスト形式の文書集合.
 * @retval tfidf値.
 */
double tfidf(int i, index_table* d) {

  return 0.0;
}

