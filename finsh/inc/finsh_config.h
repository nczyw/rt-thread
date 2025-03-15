/* FinSH config file */

#ifndef __MSH_CFG_H__
#define __MSH_CFG_H__

// <<< Use Configuration Wizard in Context Menu >>>
#define RT_USING_FINSH
#define FINSH_USING_MSH
    #define FINSH_USING_MSH_ONLY
    // <h>Finsh Configuration
    // <o>the priority of finsh thread <1-7>
    //  <i>the priority of finsh thread
    //  <i>Default: 6
    #define __FINSH_THREAD_PRIORITY     5
    #define FINSH_THREAD_PRIORITY       (RT_THREAD_PRIORITY_MAX - 1)
    // <o>the stack of finsh thread <1-4096>
    //  <i>the stack of finsh thread
    //  <i>Default: 4096  (4096Byte)
    #define FINSH_THREAD_STACK_SIZE     4096
    // <o>the history lines of finsh thread <1-32>
    //  <i>the history lines of finsh thread
    //  <i>Default: 5
    #define FINSH_USING_HISTORY
    #define FINSH_HISTORY_LINES         10

    #define FINSH_USING_SYMTAB

    #define RT_USING_THREAD_MGR

    #define MSH_USING_BUILT_IN_COMMANDS
    // </h>
// <<< end of configuration section >>>
#endif

