#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_byiapocket.h"

PHP_FUNCTION(confirm_byiapocket_compiled)
{
    const char *arg = NULL;
    size_t arg_len;
    char *strg;
    size_t len;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &arg, &arg_len) == FAILURE) {
        return;
    }

    len = spprintf(&strg, 0, "Congratulations! You have successfully modified ext/%.78s/config.m4. Module %.78s is now compiled into PHP.", "byiapocket", arg);
    RETURN_STRINGL(strg, len);
}

const zend_function_entry byiapocket_functions[] = {
    PHP_FE(confirm_byiapocket_compiled, NULL)
    PHP_FE_END
};

PHP_MINIT_FUNCTION(byiapocket)
{
    return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(byiapocket)
{
    return SUCCESS;
}

PHP_MINFO_FUNCTION(byiapocket)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "byiapocket support", "enabled");
    php_info_print_table_end();
}

zend_module_entry byiapocket_module_entry = {
    STANDARD_MODULE_HEADER,
    "byiapocket",
    byiapocket_functions,
    PHP_MINIT(byiapocket),
    PHP_MSHUTDOWN(byiapocket),
    NULL,
    NULL,
    PHP_MINFO(byiapocket),
    PHP_BYIAPOCKET_VERSION,
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_BYIAPOCKET
ZEND_GET_MODULE(byiapocket)
#endif
