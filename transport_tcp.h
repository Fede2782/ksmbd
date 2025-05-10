/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 *   Copyright (C) 2018 Samsung Electronics Co., Ltd.
 */

#ifndef __KSMBD_TRANSPORT_TCP_H__
#define __KSMBD_TRANSPORT_TCP_H__

#if LINUX_VERSION_CODE < KERNEL_VERSION(5, 4, 0)
#define SO_RCVTIMEO_OLD SO_RCVTIMEO
#define SO_SNDTIMEO_OLD SO_SNDTIMEO
#endif

int ksmbd_tcp_set_interfaces(char *ifc_list, int ifc_list_sz);
struct interface *ksmbd_find_netdev_name_iface_list(char *netdev_name);
int ksmbd_tcp_init(void);
void ksmbd_tcp_destroy(void);

#endif /* __KSMBD_TRANSPORT_TCP_H__ */
