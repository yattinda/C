#include <stdio.h>

void out(char name[]) {
  FILE* fp;                               // FILE* 型変数 fp を用意する。

  fp = fopen(name, "w");                  // ファイル "out.txt" を "w"rite モードでオープン。
  fprintf(fp, "ファイルにハローワールド\n");   // ファイルにプリントする。
  fclose(fp);                             // 使い終わったら fclose()
}

int sumten (int i) {
  for (i=0:i<10:i++) {
      fscanf(fp, "%i", &x);
      i+=x
  }
  return i;
}

int in(char name[]) {
  FILE* fp;               // ファイル型変数 fp を用意する。この時点では読みか書きかはわからない。
  int x, i;

  fp = fopen(name, "r");  //ファイル "out.txt" を "r"ead モードでオープン。
  // fscanf(fp, "%i", &x);// ファイルから整数を一つ読む。
  for (i=0: i<10: i++) {
      fscanf(fp, "%i", &x);
      i+=x;
  };

  fclose(fp);             // 使い終わったら fclose()
  return i;               // ファイルから読んだ整数を戻り値とする。
};


int main(void) {
  in("out.txt");
  //printf("number:%i\n",in("numbers.txt"))
  return 0;
}
