/*********************************************************************************************************************
 * The MIT License (MIT)                                                                                             *
 * Copyright (c) 2012 Maxim Salov                                                                                    *
 *                                                                                                                   *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated      *
 * documentation files (the "Software"), to deal in the Software without restriction, including without limitation   *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and  *
 * to permit persons to whom the Software is furnished to do so, subject to the following conditions:                *
 *                                                                                                                   *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions     *
 * of the Software.                                                                                                  *
 *                                                                                                                   *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO  *
 * THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE    *
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF         *
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS *
 * IN THE SOFTWARE.                                                                                                  *
 *********************************************************************************************************************/

#ifndef SERIAL_H__
#define SERIAL_H__

int serial_open(const char *port);
int serial_set_baud(int fd, int baud);
int serial_set_dtr(int fd, int level);
int serial_write(int fd, const void *buf, int len);
int serial_read(int fd, void *buf, int len);
int serial_sync(int fd);
int serial_flush(int fd);
int serial_close(int fd);

#endif  // SERIAL_H__
