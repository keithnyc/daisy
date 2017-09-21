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
    public class StackManager : Object {
        static StackManager? instance;
        
            private Gtk.Stack stack;
            private const string ENDPOINT_VIEW_ID = "endpoint-view";
        
        
            StackManager () {
                stack = new Gtk.Stack ();
                stack.transition_type = Gtk.StackTransitionType.SLIDE_LEFT_RIGHT;
            }
        
            public static StackManager get_instance () {
                if (instance == null) {
                    instance = new StackManager ();
                }
        
                return instance;
            }
        
            public Gtk.Stack get_stack () {
                return this.stack;
            }
        
            public void load_views (Gtk.Window window) {
                stack.add_named (new EndPointView (), ENDPOINT_VIEW_ID);

                window.add (stack);
                window.show_all ();
            }
        
    }
    

}