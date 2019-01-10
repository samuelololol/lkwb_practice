/*
 * Hello world module, with some caculation
 */

#include <linux/init.h>
#include <linux/module.h>

struct sample {
    int x;
    int y;
};


void print_sample_struct(struct sample temp)
{
    printk (KERN_WARNING "x is %d, y is %d\n", temp.x, temp.y);
}

void some_caculation(void)
{
    int a = 15, b = 3;
    int *ptra = &a;
    int i;

    struct sample temp;
    temp.x = 10;
    temp.y = 20;

    printk (KERN_WARNING "Address of a is %p\n", ptra);
    printk (KERN_WARNING "Value of ptra is %d\n", *ptra);

    for (i = b; i <= a; i++) {
        printk (KERN_WARNING "i: %d\n", i);
    }

    print_sample_struct(temp);
}

static int __init my_init(void)
{
    printk(KERN_WARNING "hello samuel\n");
    some_caculation();
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
MODULE_VERSION("2.0");
MODULE_DESCRIPTION("Samuel's dummy mymodule2");
