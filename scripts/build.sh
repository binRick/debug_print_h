#!/usr/bin/env bash
set -eou pipefail
cd $(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
cd ../

[[ -d deps ]] || clib i -c -q

[[ -d bin ]] || mkdir -p bin

/usr/bin/make
