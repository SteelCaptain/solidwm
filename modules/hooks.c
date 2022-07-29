
static inline void setuphook(void){
	system("mkdir -p ~/.config/solidwm/hooks");
	system("cd ~/.config/solidwm/hooks;touch setup startup exit;");
	system("cd ~/.config/solidwm/hooks; ./setup");
}

static inline void startuphook(void){
	system("cd ~/.config/solidwm/hooks; ./startup");
}

static inline void exithook(void){
	system("cd ~/.config/solidwm/hooks; ./exit");
}
