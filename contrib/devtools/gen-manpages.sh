#!/bin/sh

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
SRCDIR=${SRCDIR:-$TOPDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

SATOD=${SATOD:-$SRCDIR/satod}
SATOCLI=${SATOCLI:-$SRCDIR/sato-cli}
SATOTX=${SATOTX:-$SRCDIR/sato-tx}
SATOQT=${SATOQT:-$SRCDIR/qt/sato-qt}

[ ! -x $SATOD ] && echo "$SATOD not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
SATOVER=($($SATOCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for satod if --version-string is not set,
# but has different outcomes for sato-qt and sato-cli.
echo "[COPYRIGHT]" > footer.h2m
$SATOD --version | sed -n '1!p' >> footer.h2m

for cmd in $SATOD $SATOCLI $SATOTX $SATOQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${SATOVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${SATOVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
