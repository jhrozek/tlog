/**
 * @file
 * @brief Tlog-rec configuration parameter origin.
 */
/*
 *
 * Copyright (C) 2016 Red Hat
 *
 * This file is part of tlog.
 *
 * Tlog is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Tlog is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with tlog; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _TLOG_REC_CONF_ORIGIN_H
#define _TLOG_REC_CONF_ORIGIN_H

/** Configuration parameter origin codes, lowest priority first */
enum tlog_rec_conf_origin {
    TLOG_REC_CONF_ORIGIN_FILE,      /**< Configuration file */
    TLOG_REC_CONF_ORIGIN_ENV,       /**< Environment variable(s) */
    TLOG_REC_CONF_ORIGIN_NAME,      /**< Command name (argv[0]) */
    TLOG_REC_CONF_ORIGIN_OPTS,      /**< Command-line options */
    TLOG_REC_CONF_ORIGIN_ARGS       /**< Command-line positional arguments */
};

#endif /* _TLOG_REC_CONF_ORIGIN_H */
