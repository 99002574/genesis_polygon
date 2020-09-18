#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <dia.h>
//#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "triangle_area", test_triar);
  CU_add_test(suite, "triangle_per", test_triper);
  CU_add_test(suite, "square_area", test_sqar);
  CU_add_test(suite, "square_per", test_sqper);
  CU_add_test(suite, "rectangle_area", test_recar);
  CU_add_test(suite, "rectangle_per", test_recper);
  CU_add_test(suite, "circle_area", test_cirar);
  CU_add_test(suite, "circle_per", test_cirper);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_triar(void) {
  CU_ASSERT(43 == triangle_area(10, 10, 10));

  /* Dummy fail*/
  CU_ASSERT(1500 == triangle_area(70, 70, 70));
}

void test_triper(void) {
  CU_ASSERT(12 == triangle_per(3, 4, 5));

  /* Dummy fail*/
  CU_ASSERT(1 == triangle_per(10, 90, 10));
}

void test_sqar(void) {
  CU_ASSERT(100 == square_area(10));

  /* Dummy fail*/
  CU_ASSERT(25 == square_area(5));
}

void test_sqper(void) {
  CU_ASSERT(40 == square_per(10));

  /* Dummy fail*/
  CU_ASSERT(30 == square_per(5));
}
void test_recar(void) {
  CU_ASSERT(50 == rectangle_area(10,5));

  /* Dummy fail*/
  CU_ASSERT(30 == rectangle_area(5,3));
}
void test_recper(void) {
  CU_ASSERT(30 == rectangle_per(10,5));

  /* Dummy fail*/
  CU_ASSERT(100 == rectangle_per(15,10));
}
void test_cirar(void) {
  CU_ASSERT(314 == circle_area(10));

  /* Dummy fail*/
  CU_ASSERT(30 == circle_area(10));
}
void test_cirper(void) {
  CU_ASSERT(62 == circle_per(10));

  /* Dummy fail*/
  CU_ASSERT(30 == circle_per(10));
}
