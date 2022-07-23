/*! \file breastPhantom.hxx
 *  \brief breastPhantom main header file
 *  \author Christian G. Graff
 *  \version 1.0
 *  \date 2018
 *
 *  \copyright To the extent possible under law, the author(s) have
 *  dedicated all copyright and related and neighboring rights to this
 *  software to the public domain worldwide. This software is
 *  distributed without any warranty.  You should have received a copy
 *  of the CC0 Public Domain Dedication along with this software.
 *  If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
 *
 */

#ifndef BREASTPHANTOM_HXX_
#define BREASTPHANTOM_HXX_

#ifndef __IOS__
    #define __IOS__
    #include <iostream>
#endif

#ifndef __CSDTINT__
    #define __CSTDINT__
    #include <cstdint>
#endif

#include <math.h>
#include <unistd.h>
#include <sys/stat.h>
// debug
#include <time.h>

#include <zlib.h>

#ifndef __OMP__
    #define __OMP__
    #include <omp.h>
#endif

#include "perlinNoise.hxx"
#include "createDuct.hxx"
#include "createArtery.hxx"
#include "createVein.hxx"

// vtk stuff
#include <vtkVersion.h>
#ifndef __VTKSMARTPOINTER__
    #define __VTKSMARTPOINTER__
    #include <vtkSmartPointer.h>
#endif
#ifndef __VTKMATH__
    #define __VTKMATH__
    #include <vtkMath.h>
#endif
#include <vtkPolyData.h>
#include <vtkCleanPolyData.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkPolyDataNormals.h>
#include <vtkGeometryFilter.h>
#include <vtkDecimatePro.h>
#include <vtkTIFFWriter.h>
#include <vtkFloatArray.h>
#include <vtkCellArray.h>
#include <vtkPointData.h>
#include <vtkSortDataArray.h>
#include <vtkParametricSpline.h>
#include <vtkProperty.h>
#include <vtkTransform.h>
#include <vtkTransformPolyDataFilter.h>
#include <vtkSmoothPolyDataFilter.h>
#include <vtkSurfaceReconstructionFilter.h>
#include <vtkContourFilter.h>
#include <vtkReverseSense.h>
#ifndef __VTKIMAGEDATA__
    #define __VTKIMAGEDATA__
    #include <vtkImageData.h>
#endif
#include <vtkFillHolesFilter.h>
#include <vtkCellLocator.h>
#include <vtkXMLPolyDataWriter.h>
#ifndef __VTKIMAGEDATAWRITER__
    #define __VTKIMAGEDATAWRITER__
    #include <vtkXMLImageDataWriter.h>
#endif

#ifndef __VTKIMAGEDATAREADER__
    #define __VTKIMAGEDATAREADER__
    #include <vtkXMLImageDataReader.h>
#endif
#include <vtkMetaImageWriter.h>
#include <vtkPointLocator.h>
#include <vtkOctreePointLocator.h>
#include <vtkMinimalStandardRandomSequence.h>
#ifndef __VTKVECTOR__
    #define __VTKVECTOR__
    #include <vtkVector.h>
#endif

// number of fat lobule Fourier perturbation coefficients
#define NUMCOEFF 3

#ifndef __TISSUESTRUCT__
    #define __TISSUESTRUCT__
    #include "tissueStruct.hxx"
#endif

#endif /* BREASTPHANTOM_HXX_ */
