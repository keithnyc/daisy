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
    public class ListBoxRow : Gtk.ListBoxRow {
        StackManager stackManager = StackManager.get_instance ();
        
        private Gtk.Box vertical_box = new Gtk.Box (Gtk.Orientation.VERTICAL, 6);
        private Gtk.Image icon = new Gtk.Image.from_icon_name ("terminal", Gtk.IconSize.DND);
        private EndPoint endpoint;

        public ListBoxRow (EndPoint ep) {
            this.endpoint = ep;
            Gtk.Grid grid = new Gtk.Grid ();            
            var name_label = generate_name_label (ep);
            var endpoint_label = generate_endpoint_label (ep);
            var status_label = generate_status_label (ep);

            grid.column_spacing = 2;
            grid.margin_left = 10;
            this.add (grid);

            grid.attach (icon, 0, 0, 1, 1);
            grid.attach (name_label, 1, 0, 1, 1);
            grid.attach (endpoint_label, 1, 1, 1, 1);
            grid.attach_next_to (status_label, endpoint_label, Gtk.PositionType.RIGHT, 1, 1 );
            
            Utils.print_log ("ListBoxRow completed");
        }

        public Gtk.Label generate_name_label (EndPoint ep) {
            var name_label = new Gtk.Label ("<b>%s</b>".printf(ep.name));
            name_label.use_markup = true;
            name_label.halign = Gtk.Align.START;
            
            Utils.print_log ("generate_name_label completed");

            return name_label;
        }

        public Gtk.Label generate_endpoint_label (EndPoint ep) {
            var ip_label = new Gtk.Label (ep.ip);
            ip_label.halign = Gtk.Align.START;
    
            return ip_label;
        }

        public Gtk.Label generate_status_label (EndPoint ep) {
            var status_label = new Gtk.Label ("<b>" + ep.status+ "</b>");
            status_label.halign = Gtk.Align.START;
            status_label.use_markup = true;
            return status_label;
        }
    }
}