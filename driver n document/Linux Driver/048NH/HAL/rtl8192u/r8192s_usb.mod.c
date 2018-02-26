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
	{ 0x3d3b5d03, "notify_wx_assoc_event_rsl" },
	{ 0x1f0bd23e, "free_ieee80211_rsl" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb922ecbc, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x278daaa, "ieee80211_wx_set_essid_rsl" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x7c2c4b34, "ieee80211_wx_get_scan_rsl" },
	{ 0x2813d4b5, "ieee80211_wx_set_rate_rsl" },
	{ 0xdf9d1bb7, "ieee80211_wx_set_auth_rsl" },
	{ 0xe0d8c3ca, "ieee80211_wx_set_mode_rsl" },
	{ 0x4b4c1de4, "ieee80211_stop_scan_rsl" },
	{ 0x479019bc, "alloc_ieee80211_rsl" },
	{ 0x8183ede1, "netif_carrier_on" },
	{ 0x5f27ba68, "HTUpdateSelfAndPeerSetting" },
	{ 0xf32d2678, "schedule_work" },
	{ 0x8f2e8b59, "netif_carrier_off" },
	{ 0x4e196529, "cancel_work_sync" },
	{ 0x5658813b, "usb_kill_urb" },
	{ 0x89fe0064, "remove_proc_entry" },
	{ 0xebc4b191, "queue_work" },
	{ 0x8573ed86, "ieee80211_wx_get_name_rsl" },
	{ 0xd50368a4, "ieee80211_wx_get_freq_rsl" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa2268b59, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x6e185827, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbe4d1822, "skb_unlink" },
	{ 0x9a1a12cc, "ieee80211_ps_tx_ack_rsl" },
	{ 0xe15c43ae, "ieee80211_wx_set_rts_rsl" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x71010c21, "__create_workqueue" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xd7ea771e, "del_timer_sync" },
	{ 0x46569f1e, "skb_queue_purge" },
	{ 0x2bc95bd4, "memset" },
	{ 0x84707495, "ieee80211_wx_set_scan_rsl" },
	{ 0x2a3c0194, "proc_net" },
	{ 0x798ba8d5, "ieee80211_softmac_scan_syncro_rsl" },
	{ 0xa35115eb, "ieee80211_wx_get_essid_rsl" },
	{ 0x7bc958fd, "usb_deregister" },
	{ 0x91d6536d, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x795340bb, "__tasklet_schedule" },
	{ 0xf1cec381, "register_netdev" },
	{ 0xc1f6780f, "ieee80211_rx_rsl" },
	{ 0x92b489c, "usb_control_msg" },
	{ 0x83cbc699, "mutex_lock" },
	{ 0x75693ade, "destroy_workqueue" },
	{ 0xa46dc984, "_spin_unlock_irqrestore" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x14777d07, "mod_timer" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xcad7c3a4, "dev_kfree_skb_any" },
	{ 0x4dfa7815, "ieee80211_wake_queue_rsl" },
	{ 0xf5900294, "ieee80211_stop_send_beacons_rsl" },
	{ 0xe359ac35, "skb_over_panic" },
	{ 0xdfcd8b73, "ieee80211_wx_get_rts_rsl" },
	{ 0x1a9f6f08, "skb_queue_tail" },
	{ 0x34694af5, "netif_device_attach" },
	{ 0x92a08205, "usb_submit_urb" },
	{ 0x7b2544f1, "netif_device_detach" },
	{ 0x80341003, "__alloc_skb" },
	{ 0x6143d04f, "RemovePeerTS" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x4136c374, "ieee80211_wx_set_power_rsl" },
	{ 0xa47a8cb4, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x8c9dc7ba, "skb_under_panic" },
	{ 0xf6b03c34, "ieee80211_wx_set_wap_rsl" },
	{ 0x10fcbdea, "create_proc_entry" },
	{ 0x6e1b6fb3, "ieee80211_wx_set_rawtx_rsl" },
	{ 0xa267cfe5, "Dot11d_Init" },
	{ 0xffd3c7, "init_waitqueue_head" },
	{ 0x3b41aa7d, "init_timer" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xc8aa73d4, "ieee80211_softmac_stop_protocol_rsl" },
	{ 0xb04e1716, "Dot11d_Reset" },
	{ 0xa8f8fc25, "ieee80211_wx_set_encode_ext_rsl" },
	{ 0x69041eca, "ieee80211_wx_get_encode_rsl" },
	{ 0x687e4603, "ieee80211_wx_set_encode_rsl" },
	{ 0x37a0cba, "kfree" },
	{ 0x22c203eb, "dev_alloc_name" },
	{ 0xdcdb9d44, "ieee80211_wx_set_mlme_rsl" },
	{ 0xd04feb14, "ieee80211_wx_get_rate_rsl" },
	{ 0x2d5f5705, "ieee80211_wx_set_freq_rsl" },
	{ 0xf4b4879b, "ieee80211_wpa_supplicant_ioctl_rsl" },
	{ 0x5e262dbc, "usb_register_driver" },
	{ 0x47ff3819, "request_firmware" },
	{ 0x1884fc6b, "ieee80211_wx_get_mode_rsl" },
	{ 0x6f836ab5, "skb_dequeue" },
	{ 0xb71f7dcd, "ieee80211_start_send_beacons_rsl" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x24fd3efe, "unregister_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0x83cd1eb5, "__netif_schedule" },
	{ 0xcec3abb3, "IsLegalChannel" },
	{ 0xfab11365, "ieee80211_softmac_start_protocol_rsl" },
	{ 0x96b27088, "__down_failed" },
	{ 0xcd3349b1, "ieee80211_wx_set_gen_ie_rsl" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xe885825e, "ieee80211_reset_queue_rsl" },
	{ 0xc370a43e, "ieee80211_wlan_frequencies_rsl" },
	{ 0x620c646e, "usb_free_urb" },
	{ 0xc821f4e9, "ieee80211_wx_get_wap_rsl" },
	{ 0x33934162, "release_firmware" },
	{ 0xc9eca2f8, "queue_delayed_work" },
	{ 0xe01f0c35, "ieee80211_wx_get_power_rsl" },
	{ 0x94d5317f, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211-rsl";

MODULE_ALIAS("usb:v0BDAp8192d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8709d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0043d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp805Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0031d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3301d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0290d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8172d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "525E72EDE8CF4F58FC6ACA2");
