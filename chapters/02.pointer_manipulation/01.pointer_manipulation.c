int f(int **iptr) {
  int a = 10;
  *iptr = &a;

  return 0;
}
