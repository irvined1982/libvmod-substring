#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vrt.h"
#include "cache/cache.h"

#include "vcc_if.h"

int
init_function(struct vmod_priv *priv, const struct VCL_conf *conf)
{
	return (0);
}

VCL_BOOL
vmod_substr(const struct vrt_ctx *ctx, VCL_STRING mstring, VCL_STRING msubstring)
{
	char *p;
	unsigned u, v;
	
	char *match =  strstr(mstring, msubstring);

	if (match) {
	  return(1);
	} else {
	  return(0);
	}
}
