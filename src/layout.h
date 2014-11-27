#ifndef LAYOUT_H
#define LAYOUT_H

struct geom;

enum layout {
	LAYOUT_HORIZ,
	LAYOUT_VERT,
	LAYOUT_MAX
};

#define LAYOUT_COUNT 3

extern enum layout default_branch_layout;
extern enum layout default_leaf_layout;

enum layout
layout_lookup(const char *name);

enum layout
layout_cycle(enum layout l, int delta);

void
layout_split(enum layout layout, enum order order, struct geom *new, struct geom *old);

void
layout_merge(enum order order, struct geom *dst, struct geom *src);

void
layout_redistribute(struct geom *a, struct geom *b, enum layout layout, unsigned n);

#endif

