#!/bin/sh
set -e
exec openssl dhparam -dsaparam -out ./dhparam.pem 4096
