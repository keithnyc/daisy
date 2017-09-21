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
    
    public class ListBox : Gtk.ListBox {
        private StackManager stackManager = StackManager.get_instance();

        public void empty () {
            this.foreach ((ListBoxRow) => {
                this.remove(ListBoxRow);
            });
        }

        public bool listisempty (EndPoint[] endpoints) {
            return endpoints.length == 0;
        }

        public void load_endpoints () {
            this.empty ();
            stackManager.get_stack().visible_child_name = "endpoint-view";
            
            var ep  = new EndPoint ();
            ep.name = "Local";
            ep.ip = "127.0.0.1";
            ep.status = "UP";
            ep.last_check_time = "01/01/01 12:00am";
            
            this.add (new ListBoxRow (ep));

            this.show_all ();

            Utils.print_log ("load_endpoints completed");
        }
    }
}