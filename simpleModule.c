#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>


// Constructor
static int __init hello_world_init(void)
{
    printk(KERN_INFO "Welcome to your first tutorial\n");
    printk(KERN_INFO "This is your first simple module\n");
    printk(KERN_INFO "Are you excited?\n");
    return 0;
}
// Destructor
static void __exit hello_world_exit(void)
{
    printk(KERN_INFO "Thanks for play\n");
}

module_exit(hello_world_exit);
module_init(hello_world_init);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SJ608");
MODULE_DESCRIPTION("A simple hello world driver");
MODULE_VERSION("0:1.0");