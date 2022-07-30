
static inline void setuphook(void){
	system("mkdir -p ~/.config/solidwm/hooks");
	system("cd ~/.config/solidwm/hooks;touch setup startup exit;");
	system("cd ~/.config/solidwm/hooks; ./setup");
	system("cd");
}

static inline void startuphook(void){
	system("cd ~/.config/solidwm/hooks; ./startup");
	system("cd");
}

static inline void exithook(void){
	system("cd ~/.config/solidwm/hooks; ./exit");
	system("cd");
}
