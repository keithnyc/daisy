
            var app_window = new Gtk.ApplicationWindow (this);


            var header = new Gtk.HeaderBar();
            header.set_show_close_button(true);
            header.title = "Daisy Web Monitor";
    
            app_window.set_titlebar(header);
            app_window.destroy.connect(Gtk.main_quit);
            app_window.set_default_size(1024,768);
            app_window.border_width = 10;
    
            var test_button = new Gtk.Button.with_label ("Daisy");        
            var test_label  = new Gtk.Label("Awaiting button click");
            
            test_button.clicked.connect(() => {
                test_label.label = "We are clicked.";
                test_button.sensitive = false;
    
                  var notification = new Notification ("Daisy");
                  notification.set_body ("UBS PROD is Down!");
                  var image = new Gtk.Image.from_icon_name ("network-error", Gtk.IconSize.DIALOG);
                  notification.set_icon (image.gicon);
                  notification.set_priority (NotificationPriority.URGENT);
                  this.send_notification ("daisy.app", notification);
            });
    
            var grid  = new Gtk.Grid ();        
            grid.row_spacing = 12;
            grid.column_spacing = 12;
            
            grid.attach (test_button, 0, 0, 1, 1);
            grid.attach_next_to (test_label, test_button, Gtk.PositionType.RIGHT, 1, 1);
                    
            
            app_window.add(grid);
            app_window.show_all();