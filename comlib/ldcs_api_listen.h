/*
This file is part of Spindle.  For copyright information see the COPYRIGHT 
file in the top level directory, or at 
https://github.com/hpc/Spindle/blob/master/COPYRIGHT

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License (as published by the Free Software
Foundation) version 2.1 dated February 1999.  This program is distributed in the
hope that it will be useful, but WITHOUT ANY WARRANTY; without even the IMPLIED
WARRANTY OF MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms 
and conditions of the GNU General Public License for more details.  You should 
have received a copy of the GNU Lesser General Public License along with this 
program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef LDCS_API_LISTEN_H
#define LDCS_API_LISTEN_H

int ldcs_listen_register_fd( int fd, 
			     int id, 
			     int _ldcs_server_CB ( int fd, int id, void *data ), 
			     void * data);

int ldcs_listen_register_exit_loop_cb( int cb_func ( int num_fds, void *data ), 
				       void * data);

int ldcs_listen_unregister_fd( int fd );

int ldcs_listen_signal_end_listen_loop( );

int ldcs_listen();

#endif
