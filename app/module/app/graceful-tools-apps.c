/*************************************************************************
> FileName: graceful-tools-apps.c
> Author  : DingJing
> Mail    : dingjing@live.cn
> Created Time: 2020年08月19日 星期三 20时04分54秒
 ************************************************************************/
#include "graceful-tools-apps.h"

static void graceful_itools_interface_init (GracefulIToolsInterface* iface);

G_DEFINE_TYPE_WITH_CODE (GracefulApp, graceful_app, G_TYPE_OBJECT, G_IMPLEMENT_INTERFACE (GRACEFUL_TYPE_ITOOLS, graceful_itools_interface_init));

static gboolean graceful_app_run (GracefulITools* iface, GError** error)
{

}


static void graceful_app_init (GracefulApp* self)
{
}

static void graceful_app_class_init (GracefulClass* self)
{
}

static void graceful_itools_interface_init (GracefulIToolsInterface* iface)
{
    iface->run = graceful_app_run;
}
