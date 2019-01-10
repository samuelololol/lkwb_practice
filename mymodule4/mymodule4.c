/*
 * Hello world module, with array parameters
 */

#include <linux/init.h>
#include <linux/module.h>

#define DEFAULT_PARAM1 100
#define ARRAY_LEN 5
#define STRING_LEN 10

int param1 = DEFAULT_PARAM1;
module_param(param1, int, S_IRUGO | S_IWUSR);

static int __init my_init(void)
{
    printk(KERN_WARNING "hello samuel\n");
    //some_caculation();
    printk(KERN_WARNING "Default param1: %d\n", param1);
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
MODULE_VERSION("4.0");
MODULE_DESCRIPTION("Samuel's dummy mymodule4");
