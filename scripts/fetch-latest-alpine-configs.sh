#!/bin/sh
set -e
cd "$(dirname "$0")"
target=${1:-./latest-configs}
echo "Fetching latest nginx config files to '$target'..."
command=$(command -v podman 2>/dev/null || command -v docker 2>/dev/null) || { echo >&2 "podman/docker required"; exit 1; }
mkdir -p "$target"
$command run --rm alpine sh -c 'apk add --no-cache nginx >/dev/null && tar cf - /etc/nginx' | tar xf - -C "$target"
echo "Copied latest nginx config files to '$target'."