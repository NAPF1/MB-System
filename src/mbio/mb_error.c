/*--------------------------------------------------------------------
 *    The MB-system:	mb_error.c	3.00	2/2/93
 *    $Id: mb_error.c,v 3.1 1993-05-14 22:33:34 sohara Exp $
 *
 *    Copyright (c) 1993 by 
 *    D. W. Caress (caress@lamont.ldgo.columbia.edu)
 *    and D. N. Chayes (dale@lamont.ldgo.columbia.edu)
 *    Lamont-Doherty Earth Observatory
 *    Palisades, NY  10964
 *
 *    See README file for copying and redistribution conditions.
 *--------------------------------------------------------------------*/
/*
 * mb_error.c returns a short error message associated with the
 * input error code.
 *
 * Author:	D. W. Caress
 * Date:	February 2, 1993
 *
 * $Log: not supported by cvs2svn $
 * Revision 3.0  1993/04/23  15:48:29  dale
 * Initial version
 *
 */

/* standard include files */
#include <stdio.h>
#include <math.h>
#include <strings.h>

/* mbio include files */
#include "../../include/mb_status.h"

/*--------------------------------------------------------------------*/
int mb_error(verbose,error,message)
int	verbose;
int	error;
char	**message;
{
  static char rcs_id[]="$Id: mb_error.c,v 3.1 1993-05-14 22:33:34 sohara Exp $";
	char	*function_name = "mb_error";
	int	status;

	/* print input debug statements */
	if (verbose >= 2)
		{
		fprintf(stderr,"\ndbg2  MBIO function <%s> called\n",
			function_name);
		fprintf(stderr,"dbg2  Input arguments:\n");
		fprintf(stderr,"dbg2       verbose: %d\n",verbose);
		fprintf(stderr,"dbg2       error:   %d\n",error);
		}

	/* set the message and status */
	if (error < MB_ERROR_MIN || error > MB_ERROR_MAX)
		{
		*message = unknown_error_msg[0];
		status = MB_FAILURE;
		}
	else if (error > MB_ERROR_NO_ERROR)
		{
		*message = fatal_error_msg[error];
		status = MB_SUCCESS;
		}
	else
		{
		*message = nonfatal_error_msg[-error];
		status = MB_SUCCESS;
		}

	/* print output debug statements */
	if (verbose >= 2)
		{
		fprintf(stderr,"\ndbg2  MBIO function <%s> completed\n",
			function_name);
		fprintf(stderr,"dbg2  Return value:\n");
		fprintf(stderr,"dbg2       message: %s\n",*message);
		fprintf(stderr,"dbg2  Return status:\n");
		fprintf(stderr,"dbg2       status:  %d\n",status);
		}

	/* return status */
	return(status);
}
/*--------------------------------------------------------------------*/
