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
    public class EndPointListManager : Object {
        static EndPointListManager? instance;

        public ListBox listbox {get;set;}

        EndPointListManager () {
            listbox = new ListBox ();            
        }

        public static EndPointListManager get_instance () {
            if (instance == null) {
                instance = new EndPointListManager ();                
            }

            return instance;
        }



    }
    
}