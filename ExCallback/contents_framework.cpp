#include "contents_framework.h"
#include "contents.h"
#include "stdafx.h"
#include "logout.h"

/* run method. */
void run() {

	// contents���R�[��.
	contents_run(update);

	return;
}

/* update method. */
void update(char* str) {

	LOG_OUTPUT2("%s", str);

	return;
}