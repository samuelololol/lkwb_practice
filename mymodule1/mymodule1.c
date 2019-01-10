/*
 * Hello world module
 */

#include <linux/init.h>
#include <linux/module.h>

static int __init my_init(void)
{
    printk(KERN_WARNING "hello samuel\n");
    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_WARNING "bye samuel\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("samuelololol <samuelololol@gmail.com>");
MODULE_VERSION("1.0");
MODULE_DESCRIPTION("Samuel's dummy mymodule1");
