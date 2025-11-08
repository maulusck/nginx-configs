#!/bin/sh
set -e
cd "$(dirname ${0})"
exec openssl dhparam -dsaparam -out ./dhparam.pem 4096