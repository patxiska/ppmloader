/*
 * Copyright (C) Francisco Gomez-Fernandez <fgomez@dc.uba.ar>
 * Time-stamp: 2018-06-07 03:16:18
 *
 * Simple routines to read and write pgm and ppm files.
 * See this link for a file format description:
 *   http://paulbourke.net/dataformats/ppm/
 */

#ifndef __PPMLOADER_H__
#define __PPMLOADER_H__

typedef unsigned char uchar;

typedef 
enum _PPM_LOADER_PIXEL_TYPE {
	PPM_LOADER_PIXEL_TYPE_INVALID = -1,
	PPM_LOADER_PIXEL_TYPE_RGB_8B = 0,
	PPM_LOADER_PIXEL_TYPE_RGB_16B = ( PPM_LOADER_PIXEL_TYPE_RGB_8B + 1 ),
	PPM_LOADER_PIXEL_TYPE_RGB_32B = ( PPM_LOADER_PIXEL_TYPE_RGB_16B + 1 ),
	PPM_LOADER_PIXEL_TYPE_RGB_64B = ( PPM_LOADER_PIXEL_TYPE_RGB_32B + 1 ),
	PPM_LOADER_PIXEL_TYPE_GRAY_8B = ( PPM_LOADER_PIXEL_TYPE_RGB_64B + 1 ),
	PPM_LOADER_PIXEL_TYPE_GRAY_16B = ( PPM_LOADER_PIXEL_TYPE_GRAY_8B + 1 ),
	PPM_LOADER_PIXEL_TYPE_GRAY_32B = ( PPM_LOADER_PIXEL_TYPE_GRAY_16B + 1 ),
	PPM_LOADER_PIXEL_TYPE_GRAY_64B = ( PPM_LOADER_PIXEL_TYPE_GRAY_32B + 1 )
} PPM_LOADER_PIXEL_TYPE;

bool LoadPPMFile(uchar** data, int *width, int *height, PPM_LOADER_PIXEL_TYPE* pt, const char *filename);
bool SavePPMFile(const char *filename, const void *src, int width, int height, PPM_LOADER_PIXEL_TYPE pt, const char* comments = NULL);

#endif //__PPMLOADER_H__
