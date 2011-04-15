
#include <type_label.h>
#include <stdio.h>
#include <assert.h>

/**
 * @brief ラベルリストパーサ
 * @param[in] path ラベルリストファイルへのパス
 * @param[out] data ラベルデータ
 * @retval 0 パージングに成功
 * @retval -1 パージングに失敗
 */
int parse(char* path, label* data) {

  int i, j;
  char c;

  /// ここでファイルを開きます.
  FILE* fp = fopen(path, "r");
  if (!fp) return -1;

  int v, w;
  /// ここでラベル数と総事例数を読み取ります.
  fscanf(fp, "%d %d", &v, &w);
  data->node_count = v;
  data->case_count = w;

  /// ここで各ラベルの事例数を保持するためのメモリを確保します.
  data->numv = (int*)malloc(sizeof(int) * v);
  memset(data->numv, 0, sizeof(int) * v);

  /// ここで各ラベルを保持するためのメモリを確保します.
  data->data = (int**)malloc(sizeof(int*) * v);
  memset(data->data, 0, sizeof(int*) * v);

  data->weight = (double**)malloc(sizeof(double*) * v);
  memset(data->data, 0, sizeof(double*) * v);
  
  /// ラベルデータを一行ずつ読んでいきます.
  for (i = 0; i < v; ++i) {
    int label, n;
    fscanf(fp, "%d %d", &label, &n);
    data->numv[i] = n;

    data->data[i] = (int*)malloc(sizeof(int) * n);
    memset(data->data[i], 0, sizeof(int) * n);
    
    data->weight[i] = (double*)malloc(sizeof(double) * n);
    memset(data->weight[i], 0, sizeof(double) * n);
    
    for (j = 0; j < n; ++j) {
      int t, weight;
      fscanf(fp, "%d:%d", &t, &weight);
      data->data[i][j] = t;
      data->weight[i][j] = weight;
    }
  }

  while ((c = fgetc(fp)) != EOF) {
    if (c != 0x0A) {
      fclose(fp);
      return -1;
    }
  }
  
  /// ここでファイルを閉じます.
  fclose(fp);

  return 0;
}

/**
 * @brief ラベルリストに使用したメモリを開放.
 * @param[in] labellist 削除するラベルリスト
 * @retval 0 メモリ解放に成功
 * @retval -1 メモリ解放に失敗
 */
int delete_labellist(label* labeldata) {

  int i;
  for (i = 0; i < labeldata->node_count; ++i) {
    free(labeldata->data[i]);
    free(labeldata->weight[i]);
  }
  free(labeldata->data);
  free(labeldata->weight);

  free(labeldata->numv);
  
  labeldata->node_count = 0;
  labeldata->case_count = 0;

  return 0;
}

