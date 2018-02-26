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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb922ecbc, "__mod_timer" },
	{ 0x492de5e8, "ieee80211_crypt_deinit_handler_rsl" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x3350315c, "alloc_etherdev" },
	{ 0x4e04ac24, "ieee80211_wep_null_rsl" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaa87002a, "malloc_sizes" },
	{ 0x8183ede1, "netif_carrier_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x106759f4, "skb_copy" },
	{ 0x8f2e8b59, "netif_carrier_off" },
	{ 0x89fe0064, "remove_proc_entry" },
	{ 0xebc4b191, "queue_work" },
	{ 0x476c0e80, "ieee80211_get_crypto_ops_rsl" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x6e185827, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x61dddf58, "netif_rx" },
	{ 0x71010c21, "__create_workqueue" },
	{ 0x518eb764, "per_cpu__cpu_number" },
	{ 0xd7ea771e, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0x2a3c0194, "proc_net" },
	{ 0x1b7d4074, "printk" },
	{ 0x4dce6780, "ieee80211_tkip_null_rsl" },
	{ 0xd14e03e4, "ieee80211_crypt_deinit_entries_rsl" },
	{ 0xc94ea4b7, "free_netdev" },
	{ 0x795340bb, "__tasklet_schedule" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x7c5a216e, "wireless_send_event" },
	{ 0x75693ade, "destroy_workqueue" },
	{ 0xa46dc984, "_spin_unlock_irqrestore" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x14777d07, "mod_timer" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xcad7c3a4, "dev_kfree_skb_any" },
	{ 0xe359ac35, "skb_over_panic" },
	{ 0xed60594d, "module_put" },
	{ 0x1a9f6f08, "skb_queue_tail" },
	{ 0x91bf5bd9, "ieee80211_ccmp_null_rsl" },
	{ 0x3f5a71d, "kmem_cache_alloc" },
	{ 0x80341003, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xa47a8cb4, "kfree_skb" },
	{ 0x7f5fef1c, "ieee80211_crypt_delayed_deinit_rsl" },
	{ 0x8c9dc7ba, "skb_under_panic" },
	{ 0xc1f0f9c8, "eth_type_trans" },
	{ 0x10fcbdea, "create_proc_entry" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xffd3c7, "init_waitqueue_head" },
	{ 0x3b41aa7d, "init_timer" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3ee2d19e, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x25da070, "snprintf" },
	{ 0x83cd1eb5, "__netif_schedule" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xc9eca2f8, "queue_delayed_work" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211_crypt-rsl,ieee80211_crypt_wep-rsl,ieee80211_crypt_tkip-rsl,ieee80211_crypt_ccmp-rsl";


MODULE_INFO(srcversion, "47FE627F850E65F73880A5E");
