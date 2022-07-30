
static char profilename[128] = "default"; /* default profile name */
static char profiledir[1024] = "~/.config/solidwm/"; /* default profile directory */
static char profilepath[2048];
static char profilesetupcmd[2128];
static char profilecmd[2128];

static void setuphook(void);
static void startuphook(void);
static void exithook(void);

