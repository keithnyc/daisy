/*
* Copyright (c) 2017 Keith Watt (https://github.com/keithnyc/daisy)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License version 3, as 
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranties of
* MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
* PURPOSE.  See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program.  If not, see <http://www.gnu.org/licenses>
*
* Authored by: Keith Watt <keith@unixloft.com>
*/

using Granite.Widgets;

namespace Daisy {

    public class HeaderBar : Gtk.HeaderBar {
        StackManager stackManager = StackManager.get_instance ();

        public HeaderBar () {

            var add_button = new Gtk.Button.from_icon_name ("document-new", Gtk.IconSize.LARGE_TOOLBAR);
            add_button.set_tooltip_text("Add New Endpoint");
            add_button.clicked.connect (() => {
                stackManager.get_stack().visible_child_name = "new-endpoint-view";
            });

            Granite.Widgets.Utils.set_color_primary (this, Constants.BRAND_COLOR);
            this.show_close_button = true;
            this.pack_start (add_button);
            this.title = "Daisy";
            this.subtitle = "Web Monitoring Application";
        }

    }



}