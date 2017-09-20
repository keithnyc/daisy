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
using Granite.Widgets;

namespace Daisy {   

    public class DaisyApp : Granite.Application {
        //  private static DaisyApp app;
        //  private DaisyWindow daisy_window = null;

        public DaisyApp () {
            Object (application_id: "com.github.keithnyc.daisy",
            flags: ApplicationFlags.FLAGS_NONE);
        }

        protected override void activate () {
            var daisy_window = new DaisyWindow ();
            daisy_window.destroy.connect (Gtk.main_quit);
        }

        public static int main (string[] args) {
            new DaisyApp().run(args);            
            Gtk.main();
            return 0;
        }
    }
}