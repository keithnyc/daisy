/*
* Copyright (c) 2017 Keith Watt (https://github.com/keithnyc/daisy)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public 
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Keith Watt <keith@unixloft.com>
*/

namespace Daisy {   

    int main (string[] args){
        Gtk.init (ref args);

        var header = new Gtk.HeaderBar();
        header.set_show_close_button(true);


        var window = new Gtk.Window();
        window.set_titlebar(header);
        window.destroy.connect(Gtk.main_quit);
        window.set_default_size(350,70);
        window.border_width = 10;

        var test_button = new Gtk.Button.with_label (_("Daisy"));
        window.add(test_button);
        window.show_all();

        Gtk.main();
        return 0;
    }
}