#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xc00b65db, "struct_module" },
	{ 0xb922ecbc, "__mod_timer" },
	{ 0xaa87002a, "malloc_sizes" },
	{ 0x6e185827, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0xa46dc984, "_spin_unlock_irqrestore" },
	{ 0xed60594d, "module_put" },
	{ 0x3f5a71d, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "62F4095537D475494994EFC");
