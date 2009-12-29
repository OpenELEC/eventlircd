/*
 * Copyright (C) 2009 Paul Bender.
 *
 * This file is part of eventlircd.
 *
 * eventlircd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * eventlircd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with eventlircd.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _LIRCUDEVD_INPUT_H_
#define _LIRCUDEVD_INPUT_H_ 1

int input_init(const char* keymap_dir);
int input_exit();

#endif
