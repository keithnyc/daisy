/* DaisyWindow.c generated by valac 0.36.5, the Vala compiler
 * generated from DaisyWindow.vala, do not modify */

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

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define DAISY_TYPE_DAISY_WINDOW (daisy_daisy_window_get_type ())
#define DAISY_DAISY_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAISY_TYPE_DAISY_WINDOW, DaisyDaisyWindow))
#define DAISY_DAISY_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAISY_TYPE_DAISY_WINDOW, DaisyDaisyWindowClass))
#define DAISY_IS_DAISY_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAISY_TYPE_DAISY_WINDOW))
#define DAISY_IS_DAISY_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAISY_TYPE_DAISY_WINDOW))
#define DAISY_DAISY_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAISY_TYPE_DAISY_WINDOW, DaisyDaisyWindowClass))

typedef struct _DaisyDaisyWindow DaisyDaisyWindow;
typedef struct _DaisyDaisyWindowClass DaisyDaisyWindowClass;
typedef struct _DaisyDaisyWindowPrivate DaisyDaisyWindowPrivate;

#define DAISY_TYPE_END_POINT_LIST_MANAGER (daisy_end_point_list_manager_get_type ())
#define DAISY_END_POINT_LIST_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAISY_TYPE_END_POINT_LIST_MANAGER, DaisyEndPointListManager))
#define DAISY_END_POINT_LIST_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAISY_TYPE_END_POINT_LIST_MANAGER, DaisyEndPointListManagerClass))
#define DAISY_IS_END_POINT_LIST_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAISY_TYPE_END_POINT_LIST_MANAGER))
#define DAISY_IS_END_POINT_LIST_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAISY_TYPE_END_POINT_LIST_MANAGER))
#define DAISY_END_POINT_LIST_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAISY_TYPE_END_POINT_LIST_MANAGER, DaisyEndPointListManagerClass))

typedef struct _DaisyEndPointListManager DaisyEndPointListManager;
typedef struct _DaisyEndPointListManagerClass DaisyEndPointListManagerClass;

#define DAISY_TYPE_STACK_MANAGER (daisy_stack_manager_get_type ())
#define DAISY_STACK_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAISY_TYPE_STACK_MANAGER, DaisyStackManager))
#define DAISY_STACK_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAISY_TYPE_STACK_MANAGER, DaisyStackManagerClass))
#define DAISY_IS_STACK_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAISY_TYPE_STACK_MANAGER))
#define DAISY_IS_STACK_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAISY_TYPE_STACK_MANAGER))
#define DAISY_STACK_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAISY_TYPE_STACK_MANAGER, DaisyStackManagerClass))

typedef struct _DaisyStackManager DaisyStackManager;
typedef struct _DaisyStackManagerClass DaisyStackManagerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define DAISY_TYPE_HEADER_BAR (daisy_header_bar_get_type ())
#define DAISY_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAISY_TYPE_HEADER_BAR, DaisyHeaderBar))
#define DAISY_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAISY_TYPE_HEADER_BAR, DaisyHeaderBarClass))
#define DAISY_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAISY_TYPE_HEADER_BAR))
#define DAISY_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAISY_TYPE_HEADER_BAR))
#define DAISY_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAISY_TYPE_HEADER_BAR, DaisyHeaderBarClass))

typedef struct _DaisyHeaderBar DaisyHeaderBar;
typedef struct _DaisyHeaderBarClass DaisyHeaderBarClass;

#define DAISY_TYPE_LIST_BOX (daisy_list_box_get_type ())
#define DAISY_LIST_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAISY_TYPE_LIST_BOX, DaisyListBox))
#define DAISY_LIST_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAISY_TYPE_LIST_BOX, DaisyListBoxClass))
#define DAISY_IS_LIST_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAISY_TYPE_LIST_BOX))
#define DAISY_IS_LIST_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAISY_TYPE_LIST_BOX))
#define DAISY_LIST_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAISY_TYPE_LIST_BOX, DaisyListBoxClass))

typedef struct _DaisyListBox DaisyListBox;
typedef struct _DaisyListBoxClass DaisyListBoxClass;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _DaisyDaisyWindow {
	GtkWindow parent_instance;
	DaisyDaisyWindowPrivate * priv;
};

struct _DaisyDaisyWindowClass {
	GtkWindowClass parent_class;
};

struct _DaisyDaisyWindowPrivate {
	DaisyEndPointListManager* endPointListManager;
	DaisyStackManager* stackManager;
};


static gpointer daisy_daisy_window_parent_class = NULL;

GType daisy_daisy_window_get_type (void) G_GNUC_CONST;
GType daisy_end_point_list_manager_get_type (void) G_GNUC_CONST;
GType daisy_stack_manager_get_type (void) G_GNUC_CONST;
#define DAISY_DAISY_WINDOW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DAISY_TYPE_DAISY_WINDOW, DaisyDaisyWindowPrivate))
enum  {
	DAISY_DAISY_WINDOW_DUMMY_PROPERTY
};
DaisyEndPointListManager* daisy_end_point_list_manager_get_instance (void);
DaisyStackManager* daisy_stack_manager_get_instance (void);
DaisyDaisyWindow* daisy_daisy_window_new (void);
DaisyDaisyWindow* daisy_daisy_window_construct (GType object_type);
static GObject * daisy_daisy_window_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
DaisyHeaderBar* daisy_header_bar_new (void);
DaisyHeaderBar* daisy_header_bar_construct (GType object_type);
GType daisy_header_bar_get_type (void) G_GNUC_CONST;
void daisy_stack_manager_load_views (DaisyStackManager* self, GtkWindow* window);
GType daisy_list_box_get_type (void) G_GNUC_CONST;
DaisyListBox* daisy_end_point_list_manager_get_listbox (DaisyEndPointListManager* self);
void daisy_list_box_load_endpoints (DaisyListBox* self);
GtkStack* daisy_stack_manager_get_stack (DaisyStackManager* self);
void daisy_utils_print_log (const gchar* log);
static void daisy_daisy_window_finalize (GObject * obj);


DaisyDaisyWindow* daisy_daisy_window_construct (GType object_type) {
	DaisyDaisyWindow * self = NULL;
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	self = (DaisyDaisyWindow*) g_object_new (object_type, NULL);
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	return self;
#line 130 "DaisyWindow.c"
}


DaisyDaisyWindow* daisy_daisy_window_new (void) {
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	return daisy_daisy_window_construct (DAISY_TYPE_DAISY_WINDOW);
#line 137 "DaisyWindow.c"
}


static GObject * daisy_daisy_window_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DaisyDaisyWindow * self;
	DaisyHeaderBar* _tmp0_;
	DaisyHeaderBar* _tmp1_;
	DaisyStackManager* _tmp2_;
	DaisyEndPointListManager* _tmp3_;
	DaisyListBox* _tmp4_;
	DaisyListBox* _tmp5_;
	DaisyStackManager* _tmp6_;
	GtkStack* _tmp7_;
	GtkStack* _tmp8_;
	DaisyStackManager* _tmp9_;
	GtkStack* _tmp10_;
	GtkStack* _tmp11_;
	const gchar* _tmp12_;
	const gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
#line 27 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	parent_class = G_OBJECT_CLASS (daisy_daisy_window_parent_class);
#line 27 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 27 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAISY_TYPE_DAISY_WINDOW, DaisyDaisyWindow);
#line 28 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 800, 600);
#line 29 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	gtk_widget_set_size_request ((GtkWidget*) self, 800, 600);
#line 30 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp0_ = daisy_header_bar_new ();
#line 30 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	g_object_ref_sink (_tmp0_);
#line 30 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp1_ = _tmp0_;
#line 30 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	gtk_window_set_titlebar ((GtkWindow*) self, (GtkWidget*) _tmp1_);
#line 30 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_g_object_unref0 (_tmp1_);
#line 32 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp2_ = self->priv->stackManager;
#line 32 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	daisy_stack_manager_load_views (_tmp2_, (GtkWindow*) self);
#line 33 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp3_ = self->priv->endPointListManager;
#line 33 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp4_ = daisy_end_point_list_manager_get_listbox (_tmp3_);
#line 33 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp5_ = _tmp4_;
#line 33 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	daisy_list_box_load_endpoints (_tmp5_);
#line 34 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp6_ = self->priv->stackManager;
#line 34 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp7_ = daisy_stack_manager_get_stack (_tmp6_);
#line 34 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp8_ = _tmp7_;
#line 34 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	gtk_stack_set_visible_child_name (_tmp8_, "endpoint-view");
#line 34 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_g_object_unref0 (_tmp8_);
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp9_ = self->priv->stackManager;
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp10_ = daisy_stack_manager_get_stack (_tmp9_);
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp11_ = _tmp10_;
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp12_ = gtk_stack_get_visible_child_name (_tmp11_);
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp13_ = _tmp12_;
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp14_ = g_strconcat ("stackManager visible child: ", _tmp13_, NULL);
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp15_ = _tmp14_;
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	daisy_utils_print_log (_tmp15_);
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_g_free0 (_tmp15_);
#line 35 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_g_object_unref0 (_tmp11_);
#line 36 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	daisy_utils_print_log ("DaisyWindow construct completed");
#line 27 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	return obj;
#line 227 "DaisyWindow.c"
}


static void daisy_daisy_window_class_init (DaisyDaisyWindowClass * klass) {
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	daisy_daisy_window_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	g_type_class_add_private (klass, sizeof (DaisyDaisyWindowPrivate));
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	G_OBJECT_CLASS (klass)->constructor = daisy_daisy_window_constructor;
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	G_OBJECT_CLASS (klass)->finalize = daisy_daisy_window_finalize;
#line 240 "DaisyWindow.c"
}


static void daisy_daisy_window_instance_init (DaisyDaisyWindow * self) {
	DaisyEndPointListManager* _tmp0_;
	DaisyStackManager* _tmp1_;
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	self->priv = DAISY_DAISY_WINDOW_GET_PRIVATE (self);
#line 23 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp0_ = daisy_end_point_list_manager_get_instance ();
#line 23 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	self->priv->endPointListManager = _tmp0_;
#line 24 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_tmp1_ = daisy_stack_manager_get_instance ();
#line 24 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	self->priv->stackManager = _tmp1_;
#line 257 "DaisyWindow.c"
}


static void daisy_daisy_window_finalize (GObject * obj) {
	DaisyDaisyWindow * self;
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAISY_TYPE_DAISY_WINDOW, DaisyDaisyWindow);
#line 23 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_g_object_unref0 (self->priv->endPointListManager);
#line 24 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	_g_object_unref0 (self->priv->stackManager);
#line 22 "/home/keith/Projects/daisy/src/DaisyWindow.vala"
	G_OBJECT_CLASS (daisy_daisy_window_parent_class)->finalize (obj);
#line 271 "DaisyWindow.c"
}


GType daisy_daisy_window_get_type (void) {
	static volatile gsize daisy_daisy_window_type_id__volatile = 0;
	if (g_once_init_enter (&daisy_daisy_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DaisyDaisyWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daisy_daisy_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DaisyDaisyWindow), 0, (GInstanceInitFunc) daisy_daisy_window_instance_init, NULL };
		GType daisy_daisy_window_type_id;
		daisy_daisy_window_type_id = g_type_register_static (gtk_window_get_type (), "DaisyDaisyWindow", &g_define_type_info, 0);
		g_once_init_leave (&daisy_daisy_window_type_id__volatile, daisy_daisy_window_type_id);
	}
	return daisy_daisy_window_type_id__volatile;
}



