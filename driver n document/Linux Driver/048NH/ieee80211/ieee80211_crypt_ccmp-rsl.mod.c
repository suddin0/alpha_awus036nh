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
	{ 0xa16eb21e, "ieee80211_register_crypto_ops_rsl" },
	{ 0xaa87002a, "malloc_sizes" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
	{ 0xb1e973e7, "crypto_free_tfm" },
	{ 0xaf84a1d8, "ieee80211_unregister_crypto_ops_rsl" },
	{ 0xe359ac35, "skb_over_panic" },
	{ 0x3f5a71d, "kmem_cache_alloc" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x8c9dc7ba, "skb_under_panic" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x8235805b, "memmove" },
	{ 0xa253ce3e, "crypto_alloc_base" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211_crypt-rsl";


MODULE_INFO(srcversion, "AA04BD00BDB2D2481F98F29");
