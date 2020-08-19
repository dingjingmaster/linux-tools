/*************************************************************************
> FileName: graceful-tools-apps.h
> Author  : DingJing
> Mail    : dingjing@live.cn
> Created Time: 2020年08月19日 星期三 20时04分50秒
 ************************************************************************/
#ifndef _GRACEFUL_TOOLS_APPS_H
#define _GRACEFUL_TOOLS_APPS_H
#include <glib-object.h>

#include <graceful-linux-tools.h>

#define GRACEFUL_TYPE_APP       (graceful_app_get_type())
#define GRACEFUL_APP(obj)       (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRACEFUL_TYPE_APP, GracefulApp))
#define GRACEFUL_IS_APP(obj)    (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRACEFUL_TYPE_APP))
#define GRACEFUL_APP_CLASS (kclass)     \
    (G_TYPE_CHECK_CLASS_CAST ((kclass), GRACEFUL_TYPE_APP, GracefulAppClass))
#define GRACEFUL_IS_APP_CLASS (kclass)  \
    (G_TYPE_CHECK_CLASS_TYPE ((kclass), GRACEFUL_TYPE_APP))
#define GRACEFUL_APP_GET_CLASS (obj)    \
    (G_TYPE_INSTANCE_GET_CLASS ((obj), GRACEFUL_TYPE_APP, GracefulAppClass))

typedef struct _GracefulApp         GracefulApp;
typedef struct _GracefulAppClass    GracefulAppClass;

struct _GracefulApp 
{
    GObject         parent;
};

struct _GracefulClass
{
    GObjectClass    parent_class;
};

GType graceful_app_get_type (void);

#endif
