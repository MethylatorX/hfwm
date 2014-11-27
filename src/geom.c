#include <assert.h>
#include <stddef.h>
#include <string.h>

#include "geom.h"

void
geom_ratio(struct ratio *r, const struct geom *old, const struct geom *new)
{
	assert(r != NULL);
	assert(old != NULL);
	assert(new != NULL);

	/* XXX: deal with divide by zero */

	r->x = old->x / (double) new->x;
	r->y = old->y / (double) new->y;

	r->w = old->w / (double) new->w;
	r->h = old->h / (double) new->h;
}

void
geom_scale(struct geom *g, const struct ratio *r)
{
	assert(g != NULL);
	assert(r != NULL);

	/* TODO: surely rounding errors galore */

	g->x *= r->x;
	g->y *= r->y;

	g->w *= r->w;
	g->h *= r->h;
}
