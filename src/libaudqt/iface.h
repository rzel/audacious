/*
 * iface.h
 * Copyright 2014 William Pitcock
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions, and the following disclaimer in the documentation
 *    provided with the distribution.
 *
 * This software is provided "as is" and without any warranty, express or
 * implied. In no event shall the authors be liable for any damages arising from
 * the use of this software.
 */

#ifndef LIBAUDQT_IFACE_H
#define LIBAUDQT_IFACE_H

#include <libaudcore/plugin.h>
#include <libaudqt/libaudqt.h>

namespace audqt {

class QtIfacePlugin : public IfacePlugin
{
public:
    constexpr QtIfacePlugin (PluginInfo info) : IfacePlugin (info) {}

    void show_about_window () { aboutwindow_show (); }
    void hide_about_window () { aboutwindow_hide (); }
    void show_filebrowser (bool open) { fileopener_show (open); }
    void hide_filebrowser () {}
    void show_jump_to_song () {}
    void hide_jump_to_song () {}
    void show_prefs_window () { prefswin_show (); }
    void hide_prefs_window () { prefswin_hide (); }
    void plugin_menu_add (AudMenuID id, void func (), const char * name, const char * icon) {}
    void plugin_menu_remove (AudMenuID id, void func ()) {}
};

} // namespace audqt

#endif
