#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <hidapi/hidapi.h>

/* Inclusion of C file module to test! This is useful to test local function */
#include "knxutils.c"

/* A test case that does nothing and succeeds. */
static void null_test_success(void **state) {
    (void) state; /* unused */
}


static void test_DPTFloat_01(void **state) {

	uint8_t t_in[2] = {0x0C, 0x1A};
	float t_out = DptValueTemp2Float(t_in);
	float t_expected = 21.0f;
	assert_memory_equal(&t_out, &t_expected, sizeof(float));
}

static void test_DPTFloat_02(void **state) {

	uint8_t t_in[2] = {0x8C, 0x1A};
	float t_out = DptValueTemp2Float(t_in);
	float t_expected = -21.0f;
	assert_memory_equal(&t_out, &t_expected, sizeof(float));
}

static void test_DPTFloat_03(void **state) {

	uint8_t t_in[2] = {0x14, 0x1A};
	float t_out = DptValueTemp2Float(t_in);
	float t_expected = 42.0f;
	assert_memory_equal(&t_out, &t_expected, sizeof(float));
}

static void test_DPTFloat_04(void **state) {

	uint8_t t_in[2] = {0x0C, 0x1B};
	float t_out = DptValueTemp2Float(t_in);
	float t_expected = 21.02f;
	assert_memory_equal(&t_out, &t_expected, sizeof(float));
}


int main(void) {

    const struct CMUnitTest tests[] = {
        cmocka_unit_test(null_test_success),
        cmocka_unit_test(test_DPTFloat_01),
        cmocka_unit_test(test_DPTFloat_02),
        cmocka_unit_test(test_DPTFloat_03),
        cmocka_unit_test(test_DPTFloat_04),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}

