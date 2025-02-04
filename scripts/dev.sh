#!/bin/sh
set -eou pipefail
cd $(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
cd ../.

nodemon -w Makefile -w . -w src -w tests -w include -e sh,c,h,Makefile -x sh -- -c 'make all test || true'
