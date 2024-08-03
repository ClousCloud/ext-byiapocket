PHP_ARG_ENABLE(byiapocket, whether to enable byiapocket support,
[  --enable-byiapocket   Enable byiapocket support])

if test "$PHP_BYIAPOCKET" != "no"; then
  PHP_NEW_EXTENSION(byiapocket, byiapocket.c, $ext_shared)
fi
