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

using Gtk;
using Granite;

namespace Daisy {   

    public class DaisyApp : Gtk.Application{
        private static DaisyApp app;
        private DaisyWindow daisy_window = null;

        public DaisyApp () {
            Object (application_id: "com.github.keithnyc.daisy",
            flags: ApplicationFlags.FLAGS_NONE);
        }

        public static DaisyApp get_instance () {
            if (app == null) {
                app = new DaisyApp ();
            }

            return app;
        }
        protected override void activate () {
            if (daisy_window != null) {
                daisy_window.present ();
                return;
            }
            
            daisy_window = new DaisyWindow ();
            daisy_window.set_application(this);
            daisy_window.delete_event.connect(daisy_window.main_quit);
            daisy_window.show_all ();
            daisy_window.update ();
        }

        public static int main (string[] args) {
            app = new DaisyApp ();
            return app.run (args);
        }
    }
}