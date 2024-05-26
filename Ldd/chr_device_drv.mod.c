#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x32e21920, "module_layout" },
	{ 0xaccdd396, "device_destroy" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x85c71d85, "kthread_stop" },
	{ 0xc7466e35, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x748154da, "class_destroy" },
	{ 0xfc426b6c, "sysfs_remove_file_ns" },
	{ 0x4a165127, "kobject_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x45937b6f, "wake_up_process" },
	{ 0x2da00799, "kthread_create_on_node" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xf35141b2, "kmem_cache_alloc_trace" },
	{ 0x26087692, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb293625b, "sysfs_create_file_ns" },
	{ 0x6fabae87, "kobject_create_and_add" },
	{ 0x23314621, "kernel_kobj" },
	{ 0x36a97168, "device_create" },
	{ 0xaf919f03, "__class_create" },
	{ 0x6a0a71c7, "cdev_add" },
	{ 0x320c3a3f, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb3378a7b, "pv_ops" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x92997ed8, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC3219FCE9CB238965938CE");
