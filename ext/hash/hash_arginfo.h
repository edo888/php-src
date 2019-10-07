/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_INFO_EX(arginfo_hash, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, raw_output, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hash_file, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, raw_output, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hash_hmac, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, raw_output, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_hash_hmac_file arginfo_hash_hmac

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_hash_init, 0, 1, HashContext, 0)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_update, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, context, HashContext, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_update_stream, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, context, HashContext, 0)
	ZEND_ARG_INFO(0, handle)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_update_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, context, HashContext, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_INFO(0, stream_context)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_final, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, context, HashContext, 0)
	ZEND_ARG_TYPE_INFO(0, raw_output, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_hash_copy, 0, 1, HashContext, 0)
	ZEND_ARG_OBJ_INFO(0, context, HashContext, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_algos, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_pbkdf2, 0, 4, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, iterations, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, raw_output, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_equals, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, known_string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, user_string, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_hkdf, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ikm, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, info, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
ZEND_END_ARG_INFO()

#if defined(PHP_MHASH_BC)
ZEND_BEGIN_ARG_INFO_EX(arginfo_mhash_get_block_size, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, hash, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(PHP_MHASH_BC)
#define arginfo_mhash_get_hash_name arginfo_mhash_get_block_size
#endif

#if defined(PHP_MHASH_BC)
ZEND_BEGIN_ARG_INFO_EX(arginfo_mhash_keygen_s2k, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, hash, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, input_password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bytes, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(PHP_MHASH_BC)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mhash_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(PHP_MHASH_BC)
ZEND_BEGIN_ARG_INFO_EX(arginfo_mhash, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, hash, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_HashContext___construct, 0, 0, 0)
ZEND_END_ARG_INFO()
