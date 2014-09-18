============
vmod_example
============

------------------------
Varnish Substring Module
------------------------

:Author: Per BUer
:Date: 2014-09-18
:Version: 1.0
:Manual section: 3

SYNOPSIS
========

import substring;

DESCRIPTION
===========

Substring matching in Varnish.

FUNCTIONS
=========

substr
------

Prototype
        ::

                substr(STRING S, STRING M)
Return value
	BOOL
Description
	Returns TRUE if M is a substring of S.
Example
        ::

                if (substring.substr("foobar", "bar") ..

INSTALLATION
============

Usage::

 ./configure [VMODDIR=DIR]

Optionally you can also set the vmod install directory by adding
`VMODDIR=DIR` (defaults to the pkg-config discovered directory from your
Varnish installation).

Make targets:

* make - builds the vmod
* make install - installs your vmod in `VMODDIR`
* make check - runs the unit tests in ``src/tests/*.vtc``

In your VCL you could then use this vmod along the following lines::
        
        import substring;

        sub vcl_recv {
                # This sets resp.http.hello to "Hello, World"
                if (substring.substr("foobar", "bar") {
	           set req.http.truth = "There is a bar in foobar.";
		}
        }

HISTORY
=======

No history.

COPYRIGHT
=========

This document is licensed under the same license as the
libvmod-example project. See LICENSE for details.

* Copyright (c) 2011-2014 Varnish Software
