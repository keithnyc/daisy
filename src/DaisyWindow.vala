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


namespace Daisy {

    public class DaisyWindow : Gtk.Window {
        private EndPointListManager endPointListManager = EndPointListManager.get_instance();
        private StackManager stackManager = StackManager.get_instance ();
        

        construct {
            set_default_size (800, 600);
            set_size_request (800, 600);
            set_titlebar (new HeaderBar());
            
            stackManager.load_views(this);
            endPointListManager.listbox.load_endpoints ();
            stackManager.get_stack().visible_child_name = "endpoint-view";
            Utils.print_log ("stackManager visible child: " + stackManager.get_stack().visible_child_name);
            Utils.print_log ("DaisyWindow construct completed");
        }       

    }

}