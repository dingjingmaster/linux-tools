/*************************************************************************
> FileName: graceful-linux-tools.h
> Author  : DingJing
> Mail    : dingjing@live.cn
> Created Time: 2020年08月19日 星期三 18时53分23秒
 ************************************************************************/
#ifndef _GRACEFUL_LINUX_TOOLS_H
#define _GRACEFUL_LINUX_TOOLS_H

#include <glib-object.h>

#define GRACEFUL_TYPE_ITOOLS                (graceful_itools_get_type ())
#define GRACEFUL_ITOOLS(obj)                (G_TYPE_CHECK_IS_INSTANCE_CAST ((obj), GRACEFUL_TYPE_ITOOLS, Graceful_ITools))
#define GRACEFUL_IS_ITOOLS(obj)             (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRACEFUL_TYPE_ITOOLS))
#define GRACEFUL_ITOOLS_GET_INTERFACE(obj)  (\
        G_TYPE_INSTANCE_GET_INTERFACE ((obj), GRACEFUL_TYPE_ITOOLS, GracefulIToolsInterface))

typedef struct _GracefulITools              GracefulITools;
typedef struct _GracefulIToolsInterface     GracefulIToolsInterface;

struct _GracefulIToolsInterface
{
    GTypeInterface      parent_interface;
    gboolean (*run) (GracefulITools* self, GError** error);
};

GType graceful_itools_get_type (void);

gboolean graceful_itools_run (GracefulITools* self, GError** error);

#endif
