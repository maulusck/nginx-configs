#!/bin/sh
set -e
exec openssl dhparam -dsaparam -out /etc/nginx/dhparam.pem 4096