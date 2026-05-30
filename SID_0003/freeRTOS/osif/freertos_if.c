/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"
#include "semphr.h"
#include "freertos_if.h"
#include "stdio.h"

/*-----------------------------------------------------------*/

/*-----------------------------------------------------------*/

static void exampleTask(void* parameters)
{
    /* Unused parameters. */
    (void)parameters;
    int i = 0;
    for (; ; )
    {
        printf("Task Run:%d\n", i++);
        /* Example Task Code */
        vTaskDelay(100); /* delay 100 ticks */
    }
}
/*-----------------------------------------------------------*/

void freertos_run(void)
{
    static StaticTask_t exampleTaskTCB;
    static StackType_t exampleTaskStack[configMINIMAL_STACK_SIZE];

    (void)printf("Example FreeRTOS Project\n");

    (void)xTaskCreateStatic(&exampleTask,
        "example",
        configMINIMAL_STACK_SIZE,
        NULL,
        configMAX_PRIORITIES - 1U,
        &(exampleTaskStack[0]),
        &(exampleTaskTCB));

    /* Start the scheduler. */
    vTaskStartScheduler();

    for (; ; )
    {
        /* Should not reach here. */
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#if ( configCHECK_FOR_STACK_OVERFLOW > 0 )

void vApplicationStackOverflowHook(TaskHandle_t xTask,
    char* pcTaskName)
{
    /* Check pcTaskName for the name of the offending task,
     * or pxCurrentTCB if pcTaskName has itself been corrupted. */
    (void)xTask;
    (void)pcTaskName;
}

#endif /* #if ( configCHECK_FOR_STACK_OVERFLOW > 0 ) */