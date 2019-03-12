int numTrees(int n) {
        int numbst[n + 1] = {0};
        numbst[0] = 1;
        for (int i = 1; i <= n; ++i ) {
          for (int j = 0; j < i; ++j ) {
             numbst[i] += numbst[j] * numbst[i - 1 - j];
          }
        }
        return numbst[n];
    }
