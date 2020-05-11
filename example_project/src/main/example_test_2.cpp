#include "project_config.h"

#ifdef USE_TESTS

#include "umba_cpp_test/umba_cpp_tests.h"

namespace
{

    UMBA_TEST_GROUP("Groro")

    /***************************************************************************************************
                                           Тестовые данные
    ***************************************************************************************************/
    
    /***************************************************************************************************
                                           Объекты для тестов
    ***************************************************************************************************/
    
    /***************************************************************************************************
                                                 Моки
    ***************************************************************************************************/

    /***************************************************************************************************
                                         Вспомогательные функции
    ***************************************************************************************************/

    UMBA_TEST_SETUP()
    {
        printf("Groro setup\n");
    }

    UMBA_TEST_TEARDOWN()
    {
        printf("\nGroro teardown\n");
    }

    /***************************************************************************************************
                                                 Тесты
    ***************************************************************************************************/


    UMBA_TEST("Doing lalala - should do lololo")
    {
        UMBA_CHECK( 1 == 1, "One should be equal to one");

        return 0;

    }

    UMBA_TEST("Lololo")
    {
        return 0;

    }
    
} // anonymous namespace   

#endif