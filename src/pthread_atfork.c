__attribute__((weak)) int
pthread_atfork(void (*prepare)(void) __attribute__((unused)),
               void (*parent)(void) __attribute__((unused)),
               void (*child)(void) __attribute__((unused))) {
  return 0;
}
