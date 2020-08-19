/*************************************************************************
> FileName: ./graceful-linux-tools.c
> Author  : DingJing
> Mail    : dingjing@live.cn
> Created Time: 2020年08月19日 星期三 19时03分27秒
 ************************************************************************/
#include "graceful-linux-tools.h"

#include <glib.h>

G_DEFINE_INTERFACE (GracefulITools, graceful_itools, G_TYPE_INVALID);

static void graceful_itools_default_init (GracefulIToolsInterface* iface)
{
}

gboolean graceful_itools_run (GracefulITools* self, GError** error)
{
    g_return_if_fail (GRACEFUL_IS_ITOOLS (self));
    return (GRACEFUL_ITOOLS_GET_INTERFACE (self)->run)(self, error);
}
