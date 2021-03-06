
#include <tfidf.h>


/**
 * @brief 文書集合 D(コーパス) の要素 d_j における, 単語 w_i のTF値を求める.
 * @param[in] w_i 単語 ID.
 * @param[in] d_j 文書 ID.
 * @param[in] corpus ラベルリスト形式の文書集合.
 * @retval tf値.
 */
double tf(int w_i, int d_j, index_table* corpus) {

  return 0.0;
}


/**
 * @brief 文書集合 D(コーパス) における, 単語 w_i のDF値を求める.
 * @param[in] w_i 単語 ID.
 * @param[in] corpus ラベルリスト形式の(転置インデックス)文書集合.
 * @retval idf値.
 */
double idf(int w_i, index_table* corpus) {

  return 0.0;
}


/**
 * @brief 文書集合 D(コーパス) における, 単語 w_i のTF-IDF値を求める.
 * @param[in] w_i 単語 ID.
 * @param[in] corpus ラベルリスト形式の文書集合.
 * @retval tfidf値.
 */
double tfidf(int w_i, index_table* corpus) {

  return 0.0;
}


/**
 * @brief 転置インデックステーブルを作成する.
 * @param[in] corpus ラベルリスト形式の文書集合(コーパス).
 * @retval 転置インデックステーブル.
 */
index_table* inverse_index_table(index_table* corpus) {

  return NULL;
}

