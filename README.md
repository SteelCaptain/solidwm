# solidwm

solidwm is a fast and simple dynamic window manager that is designed to get out of the way.

# Features
* Bar with complete functionality (systray,hiding windows,transparency)
* Signal interface for external scripting
* Dynamic window layouts with advanced management
* Xresources compatibility
* GLava compatibility

# Requirements
In order to build solidwm you need:
* Xorg libraries:
    * libX11
    * xcb
    * Xinerama
* pango (emoji functionality requires libxft-bgra)
* Imlib2

# Installation

Edit config.mk to suit your system.

Run the following command to build and install solidwm:

    make clean install

# Running solidwm

Add the following line to your .xinitrc to start solidwm using startx:

    exec solidwm

xsession files are installed for XDG compliant display managers such as lightdm or GDM.

In order to connect solidwm to a specific display, make sure that
the DISPLAY environment variable is set correctly, e.g.:

    DISPLAY=:1 exec solidwm

# Configuration

solidwm aims to be entirely configurable without rebuilding it.
solidwm can be configured trough xresources.
An external keybinding daemon is suggested for lauching external programs.

## The signal interface

Solidwm can receive signals through the root window name, and the solidwmc script serves as a wrapper.
To set the bar status text run the following command:

	solidwmc status "your status text here"

# Credits

* The original DWM devs
* The DWM patch devs
* [bakkeby](https://github.com/bakkeby) for the flexipatch line of programs and patches
* [explosion-mental](https://github.com/explosion-mental) for the NetWMWindowTypeDesktop fuctionality required by glava
