/*
 * Hello world module, with 2 int parameters
 */

#include <linux/init.h>
#include <linux/module.h>

#define DEFAULT_PARAM1 100
#define DEFAULT_PARAM2 200

// declare before module_para()
int param1 = DEFAULT_PARAM1;
int param2 = DEFAULT_PARAM2;

// read parameters(no order issue, it uses named variables)
module_param(param2, int, 0);
module_param(param1, int, 0);

static int __init my_init(void)
{
    printk(KERN_WARNING "hello samuel\n");
    //some_caculation();
    printk(KERN_WARNING "Default param1: %d\n", param1);
    printk(KERN_WARNING "Default param2: %d\n", param2);
    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_WARNING "bye samuel\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("samuelololol <samuelololol@gmail.com>");
MODULE_VERSION("3.0");
MODULE_DESCRIPTION("Samuel's dummy mymodule3");
