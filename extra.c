#include <gtk/gtk.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

void show_about(void)
{

    GtkWidget *window1;
    GtkWidget *label;

    window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window1), "About Text Editor");
    gtk_window_set_default_size(GTK_WINDOW(window1), 300, 300);
  

    label = gtk_label_new ("Text Editor\nGtk / C\n Manuel Muiña López\nOliver Mas Otero\n");
    
    gtk_container_add (GTK_CONTAINER (window1), label); 

    gtk_widget_show_all (window1);
}



