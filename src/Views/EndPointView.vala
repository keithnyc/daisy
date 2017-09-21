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
    public class EndPointView : Gtk.ScrolledWindow {
        EndPointListManager endPointListManager = EndPointListManager.get_instance ();

        public EndPointView () {
            var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 6);
            box.add(endPointListManager.listbox);

            this.hscrollbar_policy = Gtk.PolicyType.NEVER;
            this.add (box);

            Utils.print_log ("EndPointView Loaded");
        }
    }

}