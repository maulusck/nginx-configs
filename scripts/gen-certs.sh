#!/bin/sh
set -e
# Source - https://stackoverflow.com/a
# Posted by Diego Woitasen, modified by community. See post 'Timeline' for change history
# Retrieved 2025-11-09, License - CC BY-SA 4.0

# Interactive
exec openssl req -x509 -newkey rsa:4096 -keyout ./privkey.pem -out ./cert.pem -sha256 -days 365

# Non-interactive and 10 years expiration
#exec openssl req -x509 -newkey rsa:4096 -keyout ./privkey.pem -out ./cert.pem -sha256 -days 3650 -nodes -subj \
"/C=XX/ST=StateName/L=CityName/O=CompanyName/OU=CompanySectionName/CN=CommonNameOrHostname"
