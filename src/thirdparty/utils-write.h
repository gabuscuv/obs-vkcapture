/*
Copyright (C) 2023 Gabriel Bustillo del Cuvillo <gabibust@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "../utils.h"

static const char * filePath = "/tmp/obs-vkcapture-ready";

static inline void WriteStatus(_Bool status)
{
    if(*getenv("OBS_VKCAPTURE_FILE") != '1'){ hlog("OBS_VKCAPTURE_FILE Disable");return;}

    if(getenv("OBS_VKCAPTURE_CUSTOMFILE") != NULL){filePath = *getenv("OBS_VKCAPTURE_CUSTOMFILE");}

    FILE* file = fopen(filePath, "w");
    if (file == NULL) {hlog("Failed To Open File Descriptor");fclose(file);return;};

    fputs(status ? "1" : "0",file);

    fclose(file);

}
