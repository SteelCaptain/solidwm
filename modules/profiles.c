static void setuphook(void){
	sprintf(profilepath,"%s%s",profiledir,profilename);
	sprintf(profilesetupcmd,"mkdir -p %s",profilepath);
	sprintf(profilecmd,"%s/setup",profilepath);
	system(profilesetupcmd);
	system(profilecmd);
}

static void startuphook(void){
	sprintf(profilecmd,"%s/startup",profilepath);
	system(profilecmd);
}

static void exithook(void){
	sprintf(profilecmd,"%s/exit",profilepath);
	system(profilecmd);
}
