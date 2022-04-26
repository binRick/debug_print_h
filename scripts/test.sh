#!/bin/sh
set -eou pipefail
cd $(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)

cd ../

./scripts/build.sh
clear

cd bin

do_test() {
	N="example$1"
	set +e
	o=$(eval ./$N)
	ec=$?
	set -e
	ansi --cyan --bg-black --italic "<$N> :: $ec -> $o"
	return $ec
}

do_test 0
