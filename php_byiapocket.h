#ifndef PHP_BYIAPOCKET_H
#define PHP_BYIAPOCKET_H

extern zend_module_entry byiapocket_module_entry;
#define phpext_byiapocket_ptr &byiapocket_module_entry

#define PHP_BYIAPOCKET_VERSION "0.1.0"

#if defined(ZTS) && defined(COMPILE_DL_BYIAPOCKET)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif /* PHP_BYIAPOCKET_H */
