/*
 * stormfs - A FUSE abstraction layer for cloud storage
 * Copyright (C) 2011 Ben LeMasurier <ben.lemasurier@gmail.com>
 *
 * This program can be distributed under the terms of the GNU GPL.
 * See the file COPYING.
 */

#ifndef stormfs_H
#define stormfs_H

#define FIVE_GB 5368709120LL

struct file {
  const char *path;
  struct stat *stbuf;
};

char *stormfs_virtual_url(char *url, char *bucket);

#endif // stormfs_H
