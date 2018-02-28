#!/bin/bash

# HACKISH: FIXME: Replace unknown git values in manifest.json
# Git is not installable in the Docker container, so we need to rely
# on the values from the host machine.

echo "Replacing Git version"

find ./ -type f -exec sed -i -e "s/gitlatestrevno/$(git rev-list --first-parent --all --count)/" {} \;
find ./ -type f -exec sed -i -e "s/gitunknownhash/$(git rev-parse --short=7 HEAD)/"  {} \;
