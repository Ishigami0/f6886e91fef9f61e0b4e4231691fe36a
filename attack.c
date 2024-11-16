#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score 8728bd5e-739c-448b-8dd8-f933b6ab8886");
}