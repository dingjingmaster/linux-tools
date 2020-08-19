/*************************************************************************
> FileName: main.c
> Author  : DingJing
> Mail    : dingjing@live.cn
> Created Time: 2020年08月19日 星期三 10时50分36秒
 ************************************************************************/

#include <glib.h>
#include <syslog/clib_syslog.h>

#define APP_NAME "graceful-linux-command-tools"

typedef struct _GlobalInput {
    gboolean        appAll;
    char*           appName;
} GlobalInput;

static void run_command (GlobalInput* app);

static GlobalInput app;

static GOptionEntry entries[] = {
    {"app-all", 0, 0, G_OPTION_ARG_NONE, &(app.appAll), "List all installed application", NULL},
    {"app", 0, 0, G_OPTION_ARG_STRING, &(app.appName), "Query the app information based on the .desktop name", "[desktop name]"},
    {NULL}
};

int main (int argc, char* argv[])
{
    GError* error = NULL;
    GOptionContext* context = NULL;

    context = g_option_context_new (APP_NAME);
    if (NULL == context) {
        CT_SYSLOG(LOG_ERR, "");
        exit(-1);
    }

    g_option_context_add_main_entries (context, entries, NULL);

    if (!g_option_context_parse(context, &argc, &argv, &error)) {
        CT_SYSLOG(LOG_ERR, "option parsing failed:%s", error->message);
        exit(-1);
    }

    run_command (context);

    return 0;
}

static void run_command (GlobalInput* app)
{

}
