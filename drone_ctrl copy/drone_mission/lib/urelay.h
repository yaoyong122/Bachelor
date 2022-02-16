/***************************************************************************
 *   Copyright (C) 2016-2021 by DTU (Christian Andersen)                        *
 *   jca@elektro.dtu.dk                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Lesser General Public License for more details.                   *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef URELAY_H_INCLUDED
#define URELAY_H_INCLUDED

#include <udata.h>

/**
 * Class to handle debug messages and relay of bulk data like logfiles.
 * 
 * The main principle is immediate transfer to any sybscribers.
 * All data is line oriented (max line length is in the upublish.h file (UPublish class)
 * 
 * comments start with the special character '#' and is usually not critical
 * bulk data start with '%' or a digit and is typically logfiles intended for Matlab import.
 * 
 * This data is handled as an exception in udata (UData class) and serviced there with
 * immediate transfer to clients.
 * */

class UDataBase;
/**
 * robot pose info */
class URelay : public UData
{
public:
  // constructor
  URelay(UDataBase * data);
  //
  bool decode(const char * msg, int source, const char * key, bool isCheckedOK) override;
  //
  virtual void subscribeFromHW(bool fromTeensy) override;
  // open logfile
  void openLog();
  /**
   * Print status for bridge and all data elements */
  void printStatus(int client) override;
  /**
   * Send help */
  void sendHelp(const int client) override;
};

#endif
