#include "project_config.h"

#ifdef USE_TESTS

#include "umba_cpp_tests.h"

namespace
{

    UMBA_TEST_GROUP("Simple tests of simple things")

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
        //printf("setup\n");
    }

    UMBA_TEST_TEARDOWN()
    {
        //printf("\nteardown\n");
    }


    /***************************************************************************************************
                                                 Тесты
    ***************************************************************************************************/

    UMBA_TEST("This test will pass")
    {
        UMBA_CHECK( true, "True is always true" );
        
        return 0;

    }

    UMBA_TEST("This test will also pass")
    {
        UMBA_CHECK( true, "True is always true" );
        return 0;
    }

    UMBA_TEST("This test will always fail")
    {
        UMBA_CHECK( false, "Who's fault is it? It's SEGMENTATION FAULT!" );
        return 0;
    }

} // anonymous namespace   

#endif