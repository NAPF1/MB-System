.TH mbeditviz l "31 December 2008" "MB-System 5.0" "MB-System 5.0"
.SH NAME
\fBMBeditviz\fP - Interactive 3D visualization based bathymetry editor and patch test tool.

.SH VERSION
Version 5.0

.SH SYNOPSIS
\fBMBeditviz\fP [-I\fIdatalist\fP \fB-V -H\fP]

.SH DESCRIPTION

\fIOverview\fP

\fBMBeditviz\fP is an interactive 3D visualization based bathymetry editor and
patch test tool.

.SH AUTHORSHIP
David W. Caress (caress@mbari.org)
.br
  Monterey Bay Aquarium Research Institute
.br
Dale N. Chayes (dale@ldeo.columbia.edu)
.br
  Lamont-Doherty Earth Observatory

.SH OPTIONS
.TP
.B \-H
This "help" flag cause the program to print out a description
of its operation and then exit immediately.
.TP
.B \-I
\fIdatalistfile\fP
.br
Sets the datalist file to be recursively read by MBeditviz. 
A datalist contains a list of input swath data files and/or other datalist files. 
.TP
.B \-V
Normally, \fBMBeditviz\fP outputs limited information to the stderr stream.  
If the \fB-V\fP flag is given, then \fBMBeditviz\fP works in a "verbose" mode and
outputs the program version being used, all error status messages, 
and a large amount of other information including all of the
beams flagged or zeroed.

.SH INTERACTIVE CONTROLS: to be documented.....

.SH MOUSE ACTIONS

.SH KEYBOARD ACTIONS

.SH MBeditviz ROUTE FILES

.SH MBeditviz SITE FILES

.SH SEE ALSO
\fBmbsystem\fP(l) \fBmbgrdviz\fP

.SH BUGS
This program is not done, nor is it adequately documented.
