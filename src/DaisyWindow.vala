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

        private enum Columns {
            ENDPOINT,
            RESPONSE,
            STATUS,
            N_COLUMNS
        }

        //GUI
        private Gtk.ListStore       endpoint_list;
        private Gtk.TreeView        endpoint_treeview;
        private Gtk.Grid            grid;
        private Gtk.Entry           endpoint_entry;
        private Gtk.ScrolledWindow  scrolled_window;


        public DaisyWindow () {
            
            const string ELEMENTARY_STYLESHEET = """
                .titlebar {
                    background-color: @bg_color;
                    background-image: none;
                    border: none;
                }
                .welcome {
                    background-color: @bg_color;
                }
                GtkTreeView {
                    color: @fg_color;
                    background-color: @bg_color;
                }
                GtkTreeView:selected {
                    color: @selected_fg_color;
                    background-color: @selected_bg_color;
                }
                GtkTreeView .entry {
                    background-image: none;
                    background-color: @bg_color;
                    border-bottom: 1px solid @fg_color;
                }
                GtkTreeView .entry selection,
                GtkTreeView .entry selection:focus,
                GtkTreeView .entry:selected,
                GtkTreeView .entry:selected:focus {
                    background-color: @colorAccent;
                }
            """;
        
            Granite.Widgets.Utils.set_theming_for_screen (this.get_screen (), ELEMENTARY_STYLESHEET,
                Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION);
            
            endpoint_list = new Gtk.ListStore (Columns.N_COLUMNS,
                                                typeof(string),
                                                typeof(string),
                                                typeof(string));
            scrolled_window = new Gtk.ScrolledWindow (null, null);
            endpoint_entry = new Gtk.Entry ();
            grid = new Gtk.Grid ();
            endpoint_treeview = new Gtk.TreeView ();


        }

        private void load_endpoint_list () {
            
        }

        public void update () {

        }

        public bool main_quit (){
            this.destroy ();
            return false;
        }

    }

}